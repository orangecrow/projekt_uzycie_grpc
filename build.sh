
protoc --grpc_out=. --plugin=protoc-gen-grpc=`which grpc_cpp_plugin` my.proto
protoc --cpp_out=. my.proto
gcc my.grpc.pb.cc -c -o my.grpc.pb.o
gcc my.pb.cc -c -o my.pb.o

gcc my_client.cpp my.grpc.pb.o my.pb.o -o test --libs pthread grpc++ pthread grpc absl_flags absl_flags_parse
