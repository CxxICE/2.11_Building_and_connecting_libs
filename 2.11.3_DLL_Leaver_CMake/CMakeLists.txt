cmake_minimum_required(VERSION 3.22.0)

project (Leaver1)

add_library (LEAVER SHARED Leaver.cpp)

add_executable(Leaver_Client Leaver_Client.cpp)

target_link_libraries (Leaver_Client LEAVER)