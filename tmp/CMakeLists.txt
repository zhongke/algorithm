project(chapterFirstExample)
cmake_minimum_required(VERSION 2.6)

include_directories(
  $ENV{GMOCK_HOME}/googlemock/include
  $ENV{GMOCK_HOME}/googletest/include
)

link_directories(
  $ENV{GMOCK_HOME}/googlemock/mybuild
  $ENV{GMOCK_HOME}/googletest/mybuild
)

add_definitions(-std=c++0x)

set(
  sources
  main.cc
  Substr.cc
  SubstrTest.cc
)

add_executable(
  Substr ${sources}
)

target_link_libraries(
  Substr
  gmock
  gtest
  pthread
)


