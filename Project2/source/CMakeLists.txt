cmake_minimum_required(VERSION 3.10)
project(HelloApp
        VERSION 0.0.1
        DESCRIPTION "This is an app"
        LANGUAGES CXX) 

#List of sources

# Way 1- Explicitely defining executable files
# add_executable(Hello main.cpp
#                 src/dog.cpp
#                 src/operation.cpp)

#Way 2 - Using GLOB_RECURSE
file(GLOB_RECURSE SOURCE_FILES src/*.cpp)
add_executable(Hello main.cpp ${SOURCE_FILES})
                
target_compile_features(Hello PRIVATE cxx_std_17) 
target_include_directories(Hello PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include) 