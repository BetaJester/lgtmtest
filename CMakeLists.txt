cmake_minimum_required(VERSION 3.18)

project(lgtmtest LANGUAGES CXX)

message("Compiler ID: ${CMAKE_CXX_COMPILER_ID}")
message("Compiler version: ${CMAKE_CXX_COMPILER_VERSION}")

add_executable(main "main.cpp")
target_compile_features(main PRIVATE cxx_std_20)