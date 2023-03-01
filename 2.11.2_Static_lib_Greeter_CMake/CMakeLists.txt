cmake_minimum_required(VERSION 3.22.0)

project (Greeter)

add_library (Greeter STATIC Greeter.cpp)

add_executable(Greeter_Client Greeter_Client.cpp)

target_link_libraries (Greeter_Client Greeter)