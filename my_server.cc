#include <iostream>
#include <memory>
#include <string>
#include <vector>

#include "absl/flags/flag.h"
#include "absl/flags/parse.h"
#include "absl/strings/str_format.h"

#include <grpcpp/ext/proto_server_reflection_plugin.h>
#include <grpcpp/grpcpp.h>
#include <grpcpp/health_check_service_interface.h>

#include "my.grpc.pb.h"

using grpc::Server;
using grpc::ServerBuilder;
using grpc::ServerContext;
using grpc::Status;
using BasicT::Tweeter;
using BasicT::TweeterReply;
using BasicT::TweeterRequest;
using BasicT::LastNTweetsRequest;

ABSL_FLAG(uint16_t, port, 50051, "Server port for the service");

std::vector<std::string> tweet_list;

// Logic and data behind the server's behavior.
class TweeterServiceImpl final : public Tweeter::Service {

  Status SendMessage(ServerContext* context, const TweeterRequest* request,
                  TweeterReply* reply) override {
    std::string tweet_ok("Your tweet has been submited\n");
    std::string tweet_not_ok("Your tweet is too long\n");
	if (request->tweet().length()<=50){
		reply->set_message(tweet_ok);
		tweet_list.insert( tweet_list.begin(), request->tweet() );
	}
	else{
		reply->set_message(tweet_not_ok);
	}
    return Status::OK;
  }

  Status GetMessage(ServerContext* context, const LastNTweetsRequest* request,
                  TweeterReply* reply) override {
    std::string tweets("Tweets:\n");
	if ( request->number() <= tweet_list.size() )
	for (int i=0; i<request->number(); i++){
		tweets+=tweet_list[i];
		tweets+="\n-------------\n";
	}
    reply->set_message(tweets);
    return Status::OK;
  }
};

void RunServer(uint16_t port) {
  std::string server_address = absl::StrFormat("0.0.0.0:%d", port);
  TweeterServiceImpl service;

  //grpc::EnableDefaultHealthCheckService(true);
  //grpc::reflection::InitProtoReflectionServerBuilderPlugin();
  ServerBuilder builder;
  // Listen on the given address without any authentication mechanism.
  builder.AddListeningPort(server_address, grpc::InsecureServerCredentials());
  // Register "service" as the instance through which we'll communicate with
  // clients. In this case it corresponds to an *synchronous* service.
  builder.RegisterService(&service);
  // Finally assemble the server.
  std::unique_ptr<Server> server(builder.BuildAndStart());
  std::cout << "Server listening on " << server_address << std::endl;

  // Wait for the server to shutdown. Note that some other thread must be
  // responsible for shutting down the server for this call to ever return.
  server->Wait();
}

int main(int argc, char** argv) {
  //absl::ParseCommandLine(argc, argv);
  RunServer(absl::GetFlag(FLAGS_port));
  //RunServer(50051);
  return 0;
}
