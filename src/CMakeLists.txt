add_subdirectory(environment)
add_subdirectory(agent)

add_executable(main main.cpp)
target_link_libraries(main agent)

