
class GreeterServiceImpl final : public Greeter::Service {

  Status SendMessage(ServerContext* context, const TweetRequest* request,
                  TweeterReply* reply) override {
    std::string prefix("Hello ");
    reply->set_message(prefix + request->name());
    return Status::OK;
  }

  Status GetMessage(ServerContext* context, const LastNTweetsRequest* request,
                  TweeterReply* reply) override {
    std::string prefix("Hello ");
    reply->set_message(prefix + request->name());
    return Status::OK;
  }
