
#include <iostream>
#include <memory>
#include <string>

#include "absl/flags/flag.h"
#include "absl/flags/parse.h"

#include <grpcpp/grpcpp.h>

#include "my.grpc.pb.h"

ABSL_FLAG(std::string, target, "localhost:50051", "Server address");

using grpc::Channel;
using grpc::ClientContext;
using grpc::Status;
using BasicT::Tweeter;
using BasicT::TweeterReply;
using BasicT::TweeterRequest;
using BasicT::LastNTweetsRequest;

class TweeterClient {
 public:
  TweeterClient(std::shared_ptr<Channel> channel)
      : stub_(Tweeter::NewStub(channel)) {}

  std::string SendMessage(const std::string& tweet) {
    // Data we are sending to the server.
    TweeterRequest request;
    request.set_tweet(tweet);

    // Container for the data we expect from the server.
    TweeterReply reply;

    // Context for the client. It could be used to convey extra information to
    // the server and/or tweak certain RPC behaviors.
    ClientContext context;

    // The actual RPC.
    Status status = stub_->SendMessage(&context, request, &reply);

    // Act upon its status.
    if (status.ok()) {
      return reply.message();
    } else {
      std::cout << status.error_code() << ": " << status.error_message()
                << std::endl;
      return "RPC failed";
    }
  }

  std::string GetMessage(const int number) {
    // Data we are sending to the server.
    LastNTweetsRequest request;
    request.set_number(number);

    // Container for the data we expect from the server.
    TweeterReply reply;

    // Context for the client. It could be used to convey extra information to
    // the server and/or tweak certain RPC behaviors.
    ClientContext context;

    // The actual RPC.
    Status status = stub_->GetMessage(&context, request, &reply);

    // Act upon its status.
    if (status.ok()) {
      return reply.message();
    } else {
      std::cout << status.error_code() << ": " << status.error_message()
                << std::endl;
      return "RPC failed";
    }
  }
  
 private:
  std::unique_ptr<Tweeter::Stub> stub_;
};

int main(int argc, char** argv) {
  //absl::ParseCommandLine(argc, argv);
  // Instantiate the client. It requires a channel, out of which the actual RPCs
  // are created. This channel models a connection to an endpoint specified by
  // the argument "--target=" which is the only expected argument.
  std::string target_str = absl::GetFlag(FLAGS_target);
  // We indicate that the channel isn't authenticated (use of
  // InsecureChannelCredentials()).
  TweeterClient tweeter(
      grpc::CreateChannel(target_str, grpc::InsecureChannelCredentials()));
  std::string tweet("I like pancakes");
  std::string reply = tweeter.SendMessage(tweet);
  std::cout << "received: " << reply << std::endl;

  tweet="I like burgers";
  reply = tweeter.SendMessage(tweet);
  std::cout << "received: " << reply << std::endl;

  tweet="I like toast";
  reply = tweeter.SendMessage(tweet);
  std::cout << "received: " << reply << std::endl;

  int number_of_tweets = 2;
  reply = tweeter.GetMessage(number_of_tweets);
  std::cout << "received: " << reply << std::endl;

  return 0;
}
