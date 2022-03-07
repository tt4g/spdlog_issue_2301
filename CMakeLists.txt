
cmake_minimum_required(VERSION 3.12.0)
project(spdlog_issue_2301 VERSION 0.1.0 LANGUAGES C)

add_subdirectory(thirdparty/spdlog)
add_subdirectory(cpplib)

add_executable(spdlog_issue_2301 main.c)
target_link_libraries(spdlog_issue_2301
    PUBLIC
    cpplib)
