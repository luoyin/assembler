project(chapterFirstExample)
cmake_minimum_required(VERSION 2.6)

include_directories($ENV{GMOCK_HOME}/include $ENV{GMOCK_HOME}/gtest/include)
link_directories($ENV{GMOCK_HOME}/mybuild $ENV{GMOCK_HOME}/gtest/mybuild)
add_definitions(-std=c++11)
set(CMAKE_CXX_FLAGS "${CMAXE_CXX_FLAGS} -Wall")

add_subdirectory(utest)
