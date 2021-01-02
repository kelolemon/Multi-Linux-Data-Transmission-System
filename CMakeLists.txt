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
        receiver/forward.cpp
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
        init/config.cpp
        "data_processing/load_file.cpp"
        "data_processing/load_file.h"
        data_processing/buffer_file.cpp
        data_processing/buffer_file.h
        init/load_hosts.cpp
        init/load_hosts.h
        crypto/sha256.cpp
        crypto/sha256.h
        init/get_host.cpp init/get_host.h)