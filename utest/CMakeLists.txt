include_directories($ENV{GMOCK_HOME}/include $ENV{GMOCK_HOME}/gtest/include)
link_directories($ENV{GMOCK_HOME}/mybuild $ENV{GMOCK_HOME}/gtest/mybuild)
add_definitions(-std=c++0x)
set(CMAKE_CXX_FLAGS "${CMAXE_CXX_FLAGS} -Wall")

add_executable(utest
    utest.cpp
    ../utils/parser_test.cpp
    ../utils/parser.cpp
)
target_link_libraries(utest pthread)
target_link_libraries(utest ${CMAKE_SOURCE_DIR}/prebuilt/lib/libgmock.a)
target_link_libraries(utest ${CMAKE_SOURCE_DIR}/prebuilt/lib/libgtest.a)

