cmake_minimum_required(VERSION 3.10)
project(HelloApp
        VERSION 0.0.1
        DESCRIPTION "This is an app"
        LANGUAGES CXX) 
add_executable(Hello vector.cpp)
target_compile_features(Hello PRIVATE cxx_std_17)  