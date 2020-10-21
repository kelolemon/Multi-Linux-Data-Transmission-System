cmake_minimum_required(VERSION 3.17)
project(Multi_Linux_Data_Transmission_System)

set(CMAKE_CXX_STANDARD 14)

add_executable(Multi_Linux_Data_Transmission_System main.cpp srv/srv_init.cpp srv/handle.cpp srv/srv_init.h srv/handle.h main.h Test/Test.cpp Test/Test.h)