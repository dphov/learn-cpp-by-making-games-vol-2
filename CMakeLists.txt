cmake_minimum_required(VERSION 3.19)
project(learn_cpp_by_making_games_vol_2)

set(CMAKE_CXX_STANDARD 17)

include_directories(.)

add_executable(${PROJECT_NAME}
         "lesson_20/RefInClass.cpp")

set_property(TARGET ${PROJECT_NAME}
    PROPERTY
    CXX_STANDARD 17)