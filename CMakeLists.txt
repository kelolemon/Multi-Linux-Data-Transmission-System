cmake_minimum_required(VERSION 3.17)
project(Multi_Linux_Data_Transmission_System)

set(CMAKE_CXX_STANDARD 14)

add_executable(
        Multi_Linux_Data_Transmission_System
        main.cpp
        receiver/receive_init.cpp
        receiver/handle.cpp
        receiver/receive_init.h
        receiver/handle.h
        main.h
        Test/Test.cpp
        Test/Test.h
        sender/sender_init.cpp
        sender/sender_init.h
        sender/sender.cpp
        sender/sender.h
        include/global.h
        init/init.cpp
        init/init.h
        init/load_connection.cpp
        init/load_connection.h
        json_cpp/lib_json/json_reader.cpp
        json_cpp/lib_json/json_tool.h
        json_cpp/lib_json/json_value.cpp
        json_cpp/lib_json/json_valueiterator.inl
        json_cpp/lib_json/json_writer.cpp
        init/config.cpp)