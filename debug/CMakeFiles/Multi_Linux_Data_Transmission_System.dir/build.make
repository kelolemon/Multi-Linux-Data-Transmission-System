# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.19

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Disable VCS-based implicit rules.
% : %,v


# Disable VCS-based implicit rules.
% : RCS/%


# Disable VCS-based implicit rules.
% : RCS/%,v


# Disable VCS-based implicit rules.
% : SCCS/s.%


# Disable VCS-based implicit rules.
% : s.%


.SUFFIXES: .hpux_make_needs_suffix_list


# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/local/Cellar/cmake/3.19.2/bin/cmake

# The command to remove a file.
RM = /usr/local/Cellar/cmake/3.19.2/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/kelo/kelo/cpp/Multi-Linux-Data-Transmission-System

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/kelo/kelo/cpp/Multi-Linux-Data-Transmission-System/debug

# Include any dependencies generated for this target.
include CMakeFiles/Multi_Linux_Data_Transmission_System.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Multi_Linux_Data_Transmission_System.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Multi_Linux_Data_Transmission_System.dir/flags.make

CMakeFiles/Multi_Linux_Data_Transmission_System.dir/main.cpp.o: CMakeFiles/Multi_Linux_Data_Transmission_System.dir/flags.make
CMakeFiles/Multi_Linux_Data_Transmission_System.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/kelo/kelo/cpp/Multi-Linux-Data-Transmission-System/debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Multi_Linux_Data_Transmission_System.dir/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Multi_Linux_Data_Transmission_System.dir/main.cpp.o -c /Users/kelo/kelo/cpp/Multi-Linux-Data-Transmission-System/main.cpp

CMakeFiles/Multi_Linux_Data_Transmission_System.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Multi_Linux_Data_Transmission_System.dir/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/kelo/kelo/cpp/Multi-Linux-Data-Transmission-System/main.cpp > CMakeFiles/Multi_Linux_Data_Transmission_System.dir/main.cpp.i

CMakeFiles/Multi_Linux_Data_Transmission_System.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Multi_Linux_Data_Transmission_System.dir/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/kelo/kelo/cpp/Multi-Linux-Data-Transmission-System/main.cpp -o CMakeFiles/Multi_Linux_Data_Transmission_System.dir/main.cpp.s

CMakeFiles/Multi_Linux_Data_Transmission_System.dir/receiver/receive_init.cpp.o: CMakeFiles/Multi_Linux_Data_Transmission_System.dir/flags.make
CMakeFiles/Multi_Linux_Data_Transmission_System.dir/receiver/receive_init.cpp.o: ../receiver/receive_init.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/kelo/kelo/cpp/Multi-Linux-Data-Transmission-System/debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Multi_Linux_Data_Transmission_System.dir/receiver/receive_init.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Multi_Linux_Data_Transmission_System.dir/receiver/receive_init.cpp.o -c /Users/kelo/kelo/cpp/Multi-Linux-Data-Transmission-System/receiver/receive_init.cpp

CMakeFiles/Multi_Linux_Data_Transmission_System.dir/receiver/receive_init.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Multi_Linux_Data_Transmission_System.dir/receiver/receive_init.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/kelo/kelo/cpp/Multi-Linux-Data-Transmission-System/receiver/receive_init.cpp > CMakeFiles/Multi_Linux_Data_Transmission_System.dir/receiver/receive_init.cpp.i

CMakeFiles/Multi_Linux_Data_Transmission_System.dir/receiver/receive_init.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Multi_Linux_Data_Transmission_System.dir/receiver/receive_init.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/kelo/kelo/cpp/Multi-Linux-Data-Transmission-System/receiver/receive_init.cpp -o CMakeFiles/Multi_Linux_Data_Transmission_System.dir/receiver/receive_init.cpp.s

CMakeFiles/Multi_Linux_Data_Transmission_System.dir/receiver/handle.cpp.o: CMakeFiles/Multi_Linux_Data_Transmission_System.dir/flags.make
CMakeFiles/Multi_Linux_Data_Transmission_System.dir/receiver/handle.cpp.o: ../receiver/handle.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/kelo/kelo/cpp/Multi-Linux-Data-Transmission-System/debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/Multi_Linux_Data_Transmission_System.dir/receiver/handle.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Multi_Linux_Data_Transmission_System.dir/receiver/handle.cpp.o -c /Users/kelo/kelo/cpp/Multi-Linux-Data-Transmission-System/receiver/handle.cpp

CMakeFiles/Multi_Linux_Data_Transmission_System.dir/receiver/handle.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Multi_Linux_Data_Transmission_System.dir/receiver/handle.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/kelo/kelo/cpp/Multi-Linux-Data-Transmission-System/receiver/handle.cpp > CMakeFiles/Multi_Linux_Data_Transmission_System.dir/receiver/handle.cpp.i

CMakeFiles/Multi_Linux_Data_Transmission_System.dir/receiver/handle.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Multi_Linux_Data_Transmission_System.dir/receiver/handle.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/kelo/kelo/cpp/Multi-Linux-Data-Transmission-System/receiver/handle.cpp -o CMakeFiles/Multi_Linux_Data_Transmission_System.dir/receiver/handle.cpp.s

CMakeFiles/Multi_Linux_Data_Transmission_System.dir/receiver/receive.cpp.o: CMakeFiles/Multi_Linux_Data_Transmission_System.dir/flags.make
CMakeFiles/Multi_Linux_Data_Transmission_System.dir/receiver/receive.cpp.o: ../receiver/receive.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/kelo/kelo/cpp/Multi-Linux-Data-Transmission-System/debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/Multi_Linux_Data_Transmission_System.dir/receiver/receive.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Multi_Linux_Data_Transmission_System.dir/receiver/receive.cpp.o -c /Users/kelo/kelo/cpp/Multi-Linux-Data-Transmission-System/receiver/receive.cpp

CMakeFiles/Multi_Linux_Data_Transmission_System.dir/receiver/receive.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Multi_Linux_Data_Transmission_System.dir/receiver/receive.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/kelo/kelo/cpp/Multi-Linux-Data-Transmission-System/receiver/receive.cpp > CMakeFiles/Multi_Linux_Data_Transmission_System.dir/receiver/receive.cpp.i

CMakeFiles/Multi_Linux_Data_Transmission_System.dir/receiver/receive.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Multi_Linux_Data_Transmission_System.dir/receiver/receive.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/kelo/kelo/cpp/Multi-Linux-Data-Transmission-System/receiver/receive.cpp -o CMakeFiles/Multi_Linux_Data_Transmission_System.dir/receiver/receive.cpp.s

CMakeFiles/Multi_Linux_Data_Transmission_System.dir/Test/Test.cpp.o: CMakeFiles/Multi_Linux_Data_Transmission_System.dir/flags.make
CMakeFiles/Multi_Linux_Data_Transmission_System.dir/Test/Test.cpp.o: ../Test/Test.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/kelo/kelo/cpp/Multi-Linux-Data-Transmission-System/debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/Multi_Linux_Data_Transmission_System.dir/Test/Test.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Multi_Linux_Data_Transmission_System.dir/Test/Test.cpp.o -c /Users/kelo/kelo/cpp/Multi-Linux-Data-Transmission-System/Test/Test.cpp

CMakeFiles/Multi_Linux_Data_Transmission_System.dir/Test/Test.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Multi_Linux_Data_Transmission_System.dir/Test/Test.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/kelo/kelo/cpp/Multi-Linux-Data-Transmission-System/Test/Test.cpp > CMakeFiles/Multi_Linux_Data_Transmission_System.dir/Test/Test.cpp.i

CMakeFiles/Multi_Linux_Data_Transmission_System.dir/Test/Test.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Multi_Linux_Data_Transmission_System.dir/Test/Test.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/kelo/kelo/cpp/Multi-Linux-Data-Transmission-System/Test/Test.cpp -o CMakeFiles/Multi_Linux_Data_Transmission_System.dir/Test/Test.cpp.s

CMakeFiles/Multi_Linux_Data_Transmission_System.dir/sender/sender_init.cpp.o: CMakeFiles/Multi_Linux_Data_Transmission_System.dir/flags.make
CMakeFiles/Multi_Linux_Data_Transmission_System.dir/sender/sender_init.cpp.o: ../sender/sender_init.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/kelo/kelo/cpp/Multi-Linux-Data-Transmission-System/debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/Multi_Linux_Data_Transmission_System.dir/sender/sender_init.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Multi_Linux_Data_Transmission_System.dir/sender/sender_init.cpp.o -c /Users/kelo/kelo/cpp/Multi-Linux-Data-Transmission-System/sender/sender_init.cpp

CMakeFiles/Multi_Linux_Data_Transmission_System.dir/sender/sender_init.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Multi_Linux_Data_Transmission_System.dir/sender/sender_init.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/kelo/kelo/cpp/Multi-Linux-Data-Transmission-System/sender/sender_init.cpp > CMakeFiles/Multi_Linux_Data_Transmission_System.dir/sender/sender_init.cpp.i

CMakeFiles/Multi_Linux_Data_Transmission_System.dir/sender/sender_init.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Multi_Linux_Data_Transmission_System.dir/sender/sender_init.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/kelo/kelo/cpp/Multi-Linux-Data-Transmission-System/sender/sender_init.cpp -o CMakeFiles/Multi_Linux_Data_Transmission_System.dir/sender/sender_init.cpp.s

CMakeFiles/Multi_Linux_Data_Transmission_System.dir/sender/sender.cpp.o: CMakeFiles/Multi_Linux_Data_Transmission_System.dir/flags.make
CMakeFiles/Multi_Linux_Data_Transmission_System.dir/sender/sender.cpp.o: ../sender/sender.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/kelo/kelo/cpp/Multi-Linux-Data-Transmission-System/debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/Multi_Linux_Data_Transmission_System.dir/sender/sender.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Multi_Linux_Data_Transmission_System.dir/sender/sender.cpp.o -c /Users/kelo/kelo/cpp/Multi-Linux-Data-Transmission-System/sender/sender.cpp

CMakeFiles/Multi_Linux_Data_Transmission_System.dir/sender/sender.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Multi_Linux_Data_Transmission_System.dir/sender/sender.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/kelo/kelo/cpp/Multi-Linux-Data-Transmission-System/sender/sender.cpp > CMakeFiles/Multi_Linux_Data_Transmission_System.dir/sender/sender.cpp.i

CMakeFiles/Multi_Linux_Data_Transmission_System.dir/sender/sender.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Multi_Linux_Data_Transmission_System.dir/sender/sender.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/kelo/kelo/cpp/Multi-Linux-Data-Transmission-System/sender/sender.cpp -o CMakeFiles/Multi_Linux_Data_Transmission_System.dir/sender/sender.cpp.s

CMakeFiles/Multi_Linux_Data_Transmission_System.dir/init/init.cpp.o: CMakeFiles/Multi_Linux_Data_Transmission_System.dir/flags.make
CMakeFiles/Multi_Linux_Data_Transmission_System.dir/init/init.cpp.o: ../init/init.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/kelo/kelo/cpp/Multi-Linux-Data-Transmission-System/debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/Multi_Linux_Data_Transmission_System.dir/init/init.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Multi_Linux_Data_Transmission_System.dir/init/init.cpp.o -c /Users/kelo/kelo/cpp/Multi-Linux-Data-Transmission-System/init/init.cpp

CMakeFiles/Multi_Linux_Data_Transmission_System.dir/init/init.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Multi_Linux_Data_Transmission_System.dir/init/init.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/kelo/kelo/cpp/Multi-Linux-Data-Transmission-System/init/init.cpp > CMakeFiles/Multi_Linux_Data_Transmission_System.dir/init/init.cpp.i

CMakeFiles/Multi_Linux_Data_Transmission_System.dir/init/init.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Multi_Linux_Data_Transmission_System.dir/init/init.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/kelo/kelo/cpp/Multi-Linux-Data-Transmission-System/init/init.cpp -o CMakeFiles/Multi_Linux_Data_Transmission_System.dir/init/init.cpp.s

CMakeFiles/Multi_Linux_Data_Transmission_System.dir/init/load_connection.cpp.o: CMakeFiles/Multi_Linux_Data_Transmission_System.dir/flags.make
CMakeFiles/Multi_Linux_Data_Transmission_System.dir/init/load_connection.cpp.o: ../init/load_connection.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/kelo/kelo/cpp/Multi-Linux-Data-Transmission-System/debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object CMakeFiles/Multi_Linux_Data_Transmission_System.dir/init/load_connection.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Multi_Linux_Data_Transmission_System.dir/init/load_connection.cpp.o -c /Users/kelo/kelo/cpp/Multi-Linux-Data-Transmission-System/init/load_connection.cpp

CMakeFiles/Multi_Linux_Data_Transmission_System.dir/init/load_connection.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Multi_Linux_Data_Transmission_System.dir/init/load_connection.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/kelo/kelo/cpp/Multi-Linux-Data-Transmission-System/init/load_connection.cpp > CMakeFiles/Multi_Linux_Data_Transmission_System.dir/init/load_connection.cpp.i

CMakeFiles/Multi_Linux_Data_Transmission_System.dir/init/load_connection.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Multi_Linux_Data_Transmission_System.dir/init/load_connection.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/kelo/kelo/cpp/Multi-Linux-Data-Transmission-System/init/load_connection.cpp -o CMakeFiles/Multi_Linux_Data_Transmission_System.dir/init/load_connection.cpp.s

CMakeFiles/Multi_Linux_Data_Transmission_System.dir/json_cpp/lib_json/json_reader.cpp.o: CMakeFiles/Multi_Linux_Data_Transmission_System.dir/flags.make
CMakeFiles/Multi_Linux_Data_Transmission_System.dir/json_cpp/lib_json/json_reader.cpp.o: ../json_cpp/lib_json/json_reader.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/kelo/kelo/cpp/Multi-Linux-Data-Transmission-System/debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object CMakeFiles/Multi_Linux_Data_Transmission_System.dir/json_cpp/lib_json/json_reader.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Multi_Linux_Data_Transmission_System.dir/json_cpp/lib_json/json_reader.cpp.o -c /Users/kelo/kelo/cpp/Multi-Linux-Data-Transmission-System/json_cpp/lib_json/json_reader.cpp

CMakeFiles/Multi_Linux_Data_Transmission_System.dir/json_cpp/lib_json/json_reader.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Multi_Linux_Data_Transmission_System.dir/json_cpp/lib_json/json_reader.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/kelo/kelo/cpp/Multi-Linux-Data-Transmission-System/json_cpp/lib_json/json_reader.cpp > CMakeFiles/Multi_Linux_Data_Transmission_System.dir/json_cpp/lib_json/json_reader.cpp.i

CMakeFiles/Multi_Linux_Data_Transmission_System.dir/json_cpp/lib_json/json_reader.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Multi_Linux_Data_Transmission_System.dir/json_cpp/lib_json/json_reader.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/kelo/kelo/cpp/Multi-Linux-Data-Transmission-System/json_cpp/lib_json/json_reader.cpp -o CMakeFiles/Multi_Linux_Data_Transmission_System.dir/json_cpp/lib_json/json_reader.cpp.s

CMakeFiles/Multi_Linux_Data_Transmission_System.dir/json_cpp/lib_json/json_value.cpp.o: CMakeFiles/Multi_Linux_Data_Transmission_System.dir/flags.make
CMakeFiles/Multi_Linux_Data_Transmission_System.dir/json_cpp/lib_json/json_value.cpp.o: ../json_cpp/lib_json/json_value.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/kelo/kelo/cpp/Multi-Linux-Data-Transmission-System/debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building CXX object CMakeFiles/Multi_Linux_Data_Transmission_System.dir/json_cpp/lib_json/json_value.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Multi_Linux_Data_Transmission_System.dir/json_cpp/lib_json/json_value.cpp.o -c /Users/kelo/kelo/cpp/Multi-Linux-Data-Transmission-System/json_cpp/lib_json/json_value.cpp

CMakeFiles/Multi_Linux_Data_Transmission_System.dir/json_cpp/lib_json/json_value.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Multi_Linux_Data_Transmission_System.dir/json_cpp/lib_json/json_value.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/kelo/kelo/cpp/Multi-Linux-Data-Transmission-System/json_cpp/lib_json/json_value.cpp > CMakeFiles/Multi_Linux_Data_Transmission_System.dir/json_cpp/lib_json/json_value.cpp.i

CMakeFiles/Multi_Linux_Data_Transmission_System.dir/json_cpp/lib_json/json_value.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Multi_Linux_Data_Transmission_System.dir/json_cpp/lib_json/json_value.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/kelo/kelo/cpp/Multi-Linux-Data-Transmission-System/json_cpp/lib_json/json_value.cpp -o CMakeFiles/Multi_Linux_Data_Transmission_System.dir/json_cpp/lib_json/json_value.cpp.s

CMakeFiles/Multi_Linux_Data_Transmission_System.dir/json_cpp/lib_json/json_writer.cpp.o: CMakeFiles/Multi_Linux_Data_Transmission_System.dir/flags.make
CMakeFiles/Multi_Linux_Data_Transmission_System.dir/json_cpp/lib_json/json_writer.cpp.o: ../json_cpp/lib_json/json_writer.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/kelo/kelo/cpp/Multi-Linux-Data-Transmission-System/debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Building CXX object CMakeFiles/Multi_Linux_Data_Transmission_System.dir/json_cpp/lib_json/json_writer.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Multi_Linux_Data_Transmission_System.dir/json_cpp/lib_json/json_writer.cpp.o -c /Users/kelo/kelo/cpp/Multi-Linux-Data-Transmission-System/json_cpp/lib_json/json_writer.cpp

CMakeFiles/Multi_Linux_Data_Transmission_System.dir/json_cpp/lib_json/json_writer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Multi_Linux_Data_Transmission_System.dir/json_cpp/lib_json/json_writer.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/kelo/kelo/cpp/Multi-Linux-Data-Transmission-System/json_cpp/lib_json/json_writer.cpp > CMakeFiles/Multi_Linux_Data_Transmission_System.dir/json_cpp/lib_json/json_writer.cpp.i

CMakeFiles/Multi_Linux_Data_Transmission_System.dir/json_cpp/lib_json/json_writer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Multi_Linux_Data_Transmission_System.dir/json_cpp/lib_json/json_writer.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/kelo/kelo/cpp/Multi-Linux-Data-Transmission-System/json_cpp/lib_json/json_writer.cpp -o CMakeFiles/Multi_Linux_Data_Transmission_System.dir/json_cpp/lib_json/json_writer.cpp.s

CMakeFiles/Multi_Linux_Data_Transmission_System.dir/init/config.cpp.o: CMakeFiles/Multi_Linux_Data_Transmission_System.dir/flags.make
CMakeFiles/Multi_Linux_Data_Transmission_System.dir/init/config.cpp.o: ../init/config.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/kelo/kelo/cpp/Multi-Linux-Data-Transmission-System/debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_13) "Building CXX object CMakeFiles/Multi_Linux_Data_Transmission_System.dir/init/config.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Multi_Linux_Data_Transmission_System.dir/init/config.cpp.o -c /Users/kelo/kelo/cpp/Multi-Linux-Data-Transmission-System/init/config.cpp

CMakeFiles/Multi_Linux_Data_Transmission_System.dir/init/config.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Multi_Linux_Data_Transmission_System.dir/init/config.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/kelo/kelo/cpp/Multi-Linux-Data-Transmission-System/init/config.cpp > CMakeFiles/Multi_Linux_Data_Transmission_System.dir/init/config.cpp.i

CMakeFiles/Multi_Linux_Data_Transmission_System.dir/init/config.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Multi_Linux_Data_Transmission_System.dir/init/config.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/kelo/kelo/cpp/Multi-Linux-Data-Transmission-System/init/config.cpp -o CMakeFiles/Multi_Linux_Data_Transmission_System.dir/init/config.cpp.s

CMakeFiles/Multi_Linux_Data_Transmission_System.dir/data_processing/load_file.cpp.o: CMakeFiles/Multi_Linux_Data_Transmission_System.dir/flags.make
CMakeFiles/Multi_Linux_Data_Transmission_System.dir/data_processing/load_file.cpp.o: ../data_processing/load_file.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/kelo/kelo/cpp/Multi-Linux-Data-Transmission-System/debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_14) "Building CXX object CMakeFiles/Multi_Linux_Data_Transmission_System.dir/data_processing/load_file.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Multi_Linux_Data_Transmission_System.dir/data_processing/load_file.cpp.o -c /Users/kelo/kelo/cpp/Multi-Linux-Data-Transmission-System/data_processing/load_file.cpp

CMakeFiles/Multi_Linux_Data_Transmission_System.dir/data_processing/load_file.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Multi_Linux_Data_Transmission_System.dir/data_processing/load_file.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/kelo/kelo/cpp/Multi-Linux-Data-Transmission-System/data_processing/load_file.cpp > CMakeFiles/Multi_Linux_Data_Transmission_System.dir/data_processing/load_file.cpp.i

CMakeFiles/Multi_Linux_Data_Transmission_System.dir/data_processing/load_file.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Multi_Linux_Data_Transmission_System.dir/data_processing/load_file.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/kelo/kelo/cpp/Multi-Linux-Data-Transmission-System/data_processing/load_file.cpp -o CMakeFiles/Multi_Linux_Data_Transmission_System.dir/data_processing/load_file.cpp.s

CMakeFiles/Multi_Linux_Data_Transmission_System.dir/data_processing/buffer_file.cpp.o: CMakeFiles/Multi_Linux_Data_Transmission_System.dir/flags.make
CMakeFiles/Multi_Linux_Data_Transmission_System.dir/data_processing/buffer_file.cpp.o: ../data_processing/buffer_file.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/kelo/kelo/cpp/Multi-Linux-Data-Transmission-System/debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_15) "Building CXX object CMakeFiles/Multi_Linux_Data_Transmission_System.dir/data_processing/buffer_file.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Multi_Linux_Data_Transmission_System.dir/data_processing/buffer_file.cpp.o -c /Users/kelo/kelo/cpp/Multi-Linux-Data-Transmission-System/data_processing/buffer_file.cpp

CMakeFiles/Multi_Linux_Data_Transmission_System.dir/data_processing/buffer_file.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Multi_Linux_Data_Transmission_System.dir/data_processing/buffer_file.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/kelo/kelo/cpp/Multi-Linux-Data-Transmission-System/data_processing/buffer_file.cpp > CMakeFiles/Multi_Linux_Data_Transmission_System.dir/data_processing/buffer_file.cpp.i

CMakeFiles/Multi_Linux_Data_Transmission_System.dir/data_processing/buffer_file.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Multi_Linux_Data_Transmission_System.dir/data_processing/buffer_file.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/kelo/kelo/cpp/Multi-Linux-Data-Transmission-System/data_processing/buffer_file.cpp -o CMakeFiles/Multi_Linux_Data_Transmission_System.dir/data_processing/buffer_file.cpp.s

# Object files for target Multi_Linux_Data_Transmission_System
Multi_Linux_Data_Transmission_System_OBJECTS = \
"CMakeFiles/Multi_Linux_Data_Transmission_System.dir/main.cpp.o" \
"CMakeFiles/Multi_Linux_Data_Transmission_System.dir/receiver/receive_init.cpp.o" \
"CMakeFiles/Multi_Linux_Data_Transmission_System.dir/receiver/handle.cpp.o" \
"CMakeFiles/Multi_Linux_Data_Transmission_System.dir/receiver/receive.cpp.o" \
"CMakeFiles/Multi_Linux_Data_Transmission_System.dir/Test/Test.cpp.o" \
"CMakeFiles/Multi_Linux_Data_Transmission_System.dir/sender/sender_init.cpp.o" \
"CMakeFiles/Multi_Linux_Data_Transmission_System.dir/sender/sender.cpp.o" \
"CMakeFiles/Multi_Linux_Data_Transmission_System.dir/init/init.cpp.o" \
"CMakeFiles/Multi_Linux_Data_Transmission_System.dir/init/load_connection.cpp.o" \
"CMakeFiles/Multi_Linux_Data_Transmission_System.dir/json_cpp/lib_json/json_reader.cpp.o" \
"CMakeFiles/Multi_Linux_Data_Transmission_System.dir/json_cpp/lib_json/json_value.cpp.o" \
"CMakeFiles/Multi_Linux_Data_Transmission_System.dir/json_cpp/lib_json/json_writer.cpp.o" \
"CMakeFiles/Multi_Linux_Data_Transmission_System.dir/init/config.cpp.o" \
"CMakeFiles/Multi_Linux_Data_Transmission_System.dir/data_processing/load_file.cpp.o" \
"CMakeFiles/Multi_Linux_Data_Transmission_System.dir/data_processing/buffer_file.cpp.o"

# External object files for target Multi_Linux_Data_Transmission_System
Multi_Linux_Data_Transmission_System_EXTERNAL_OBJECTS =

Multi_Linux_Data_Transmission_System: CMakeFiles/Multi_Linux_Data_Transmission_System.dir/main.cpp.o
Multi_Linux_Data_Transmission_System: CMakeFiles/Multi_Linux_Data_Transmission_System.dir/receiver/receive_init.cpp.o
Multi_Linux_Data_Transmission_System: CMakeFiles/Multi_Linux_Data_Transmission_System.dir/receiver/handle.cpp.o
Multi_Linux_Data_Transmission_System: CMakeFiles/Multi_Linux_Data_Transmission_System.dir/receiver/receive.cpp.o
Multi_Linux_Data_Transmission_System: CMakeFiles/Multi_Linux_Data_Transmission_System.dir/Test/Test.cpp.o
Multi_Linux_Data_Transmission_System: CMakeFiles/Multi_Linux_Data_Transmission_System.dir/sender/sender_init.cpp.o
Multi_Linux_Data_Transmission_System: CMakeFiles/Multi_Linux_Data_Transmission_System.dir/sender/sender.cpp.o
Multi_Linux_Data_Transmission_System: CMakeFiles/Multi_Linux_Data_Transmission_System.dir/init/init.cpp.o
Multi_Linux_Data_Transmission_System: CMakeFiles/Multi_Linux_Data_Transmission_System.dir/init/load_connection.cpp.o
Multi_Linux_Data_Transmission_System: CMakeFiles/Multi_Linux_Data_Transmission_System.dir/json_cpp/lib_json/json_reader.cpp.o
Multi_Linux_Data_Transmission_System: CMakeFiles/Multi_Linux_Data_Transmission_System.dir/json_cpp/lib_json/json_value.cpp.o
Multi_Linux_Data_Transmission_System: CMakeFiles/Multi_Linux_Data_Transmission_System.dir/json_cpp/lib_json/json_writer.cpp.o
Multi_Linux_Data_Transmission_System: CMakeFiles/Multi_Linux_Data_Transmission_System.dir/init/config.cpp.o
Multi_Linux_Data_Transmission_System: CMakeFiles/Multi_Linux_Data_Transmission_System.dir/data_processing/load_file.cpp.o
Multi_Linux_Data_Transmission_System: CMakeFiles/Multi_Linux_Data_Transmission_System.dir/data_processing/buffer_file.cpp.o
Multi_Linux_Data_Transmission_System: CMakeFiles/Multi_Linux_Data_Transmission_System.dir/build.make
Multi_Linux_Data_Transmission_System: CMakeFiles/Multi_Linux_Data_Transmission_System.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/kelo/kelo/cpp/Multi-Linux-Data-Transmission-System/debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_16) "Linking CXX executable Multi_Linux_Data_Transmission_System"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Multi_Linux_Data_Transmission_System.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Multi_Linux_Data_Transmission_System.dir/build: Multi_Linux_Data_Transmission_System

.PHONY : CMakeFiles/Multi_Linux_Data_Transmission_System.dir/build

CMakeFiles/Multi_Linux_Data_Transmission_System.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Multi_Linux_Data_Transmission_System.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Multi_Linux_Data_Transmission_System.dir/clean

CMakeFiles/Multi_Linux_Data_Transmission_System.dir/depend:
	cd /Users/kelo/kelo/cpp/Multi-Linux-Data-Transmission-System/debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/kelo/kelo/cpp/Multi-Linux-Data-Transmission-System /Users/kelo/kelo/cpp/Multi-Linux-Data-Transmission-System /Users/kelo/kelo/cpp/Multi-Linux-Data-Transmission-System/debug /Users/kelo/kelo/cpp/Multi-Linux-Data-Transmission-System/debug /Users/kelo/kelo/cpp/Multi-Linux-Data-Transmission-System/debug/CMakeFiles/Multi_Linux_Data_Transmission_System.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Multi_Linux_Data_Transmission_System.dir/depend
