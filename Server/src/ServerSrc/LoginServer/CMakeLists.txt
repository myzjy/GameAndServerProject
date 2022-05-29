cmake_minimum_required(VERSION 3.5)
project(ServerSrc_LoginServer CXX)

add_executable(${PROJECT_NAME}  loginServer.cpp)

target_link_libraries(${PROJECT_NAME} PRIVATE Drogon::Drogon)
