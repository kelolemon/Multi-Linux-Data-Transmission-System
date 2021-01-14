cmake_minimum_required(VERSION 3.17)
project(Multi_Linux_Data_Transmission_System)

set(CMAKE_CXX_STANDARD 17)
include_directories(/usr/local/opt/openssl@1.1/include)
link_directories(/usr/local/opt/openssl@1.1/lib)
set(CMAKE_PREFIX_PATH /home/tangyi/Qt5.14.2/5.14.2/gcc_64/lib/cmake/Qt5)
set(Qt5Widgets_DIR /home/tangyi/Qt5.14.2/5.14.2/gcc_64/lib/cmake/Qt5Widgets)
set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
find_package(Qt5Widgets)
find_package( Qt5Core)
find_package( Qt5Gui)
find_package(Qt5 COMPONENTS Widgets REQUIRED)

add_executable(
        Multi_Linux_Data_Transmission_System   
   
        main.cpp  
        main.h
        receiver/receive_init.cpp
        receiver/handle.cpp
        receiver/receive_init.h
        receiver/handle.h
        receiver/forward.cpp
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
        init/get_host.cpp
        init/get_host.h
        data_processing/write_file.cpp
        data_processing/write_file.h
        Qtui/sendfile.ui 
        Qtui/widget.ui
        Qtui/widget.cpp
        Qtui/widget.h
        Qtui/drawer.h
        Qtui/drawer.cpp
        Qtui/sendfile.h
        Qtui/sendfile.cpp
        Qtui/loginform.cpp
        Qtui/loginform.h
        ${SOURCES}
        init/load_key_filename.cpp init/load_key_filename.h crypto/rsa.cpp crypto/rsa.h)

target_link_libraries(${PROJECT_NAME} -lssl)
target_link_libraries(${PROJECT_NAME} -lcrypto)
target_link_libraries(${PROJECT_NAME} Qt5::Widgets)


