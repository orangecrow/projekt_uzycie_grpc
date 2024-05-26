
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
  if (argc > 1)
	  target_str = argv[1];
  // We indicate that the channel isn't authenticated (use of
  // InsecureChannelCredentials()).
  TweeterClient tweeter(
      grpc::CreateChannel(target_str, grpc::InsecureChannelCredentials()));

  std::string tweet;
  std::string reply; 
  int number_of_tweets = 0;
  char command = 'a';
  using namespace std;
  while(command!='q'){
	  cout << "What would you like to do?\nt - send a tweet\nn - get some tweets from the server\nq - quit\n";
	  cin >> command;
		  switch(command){
			  case 't':
				  //some code
				  cout << "type your tweet and press enter to send. If you want to cancel simply delete all characters and press enter" << endl;
				  cin.ignore();
				  getline(cin, tweet);
				  if ( tweet.length()>0){
					  reply = tweeter.SendMessage(tweet);
					  cout << reply << endl;
				  }else{
					  cout << "empty tweet; It was not send" << endl;
				  }
				  break;
			  case 'n':
				  //some code
				  cout << "How many tweets do you want from a server?" << endl;
				  cin >> number_of_tweets;
				  reply = tweeter.GetMessage(number_of_tweets);
				  cout << "Here are the " << reply << endl;
				  break;
			  case 'q':
				  cout << "Ok, bye!" << endl;
				  break;
			  default:
				  cout << "This is not a valid command\n";
					  break;
		  }
  }

  return 0;
}
