# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.18

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
CMAKE_COMMAND = /usr/local/Cellar/cmake/3.18.4/bin/cmake

# The command to remove a file.
RM = /usr/local/Cellar/cmake/3.18.4/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/kelo/kelo/cpp/Multi-Linux-Data-Transmission-System

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/kelo/kelo/cpp/Multi-Linux-Data-Transmission-System/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Multi_Linux_Data_Transmission_System.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Multi_Linux_Data_Transmission_System.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Multi_Linux_Data_Transmission_System.dir/flags.make

CMakeFiles/Multi_Linux_Data_Transmission_System.dir/main.cpp.o: CMakeFiles/Multi_Linux_Data_Transmission_System.dir/flags.make
CMakeFiles/Multi_Linux_Data_Transmission_System.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/kelo/kelo/cpp/Multi-Linux-Data-Transmission-System/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Multi_Linux_Data_Transmission_System.dir/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Multi_Linux_Data_Transmission_System.dir/main.cpp.o -c /Users/kelo/kelo/cpp/Multi-Linux-Data-Transmission-System/main.cpp

CMakeFiles/Multi_Linux_Data_Transmission_System.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Multi_Linux_Data_Transmission_System.dir/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/kelo/kelo/cpp/Multi-Linux-Data-Transmission-System/main.cpp > CMakeFiles/Multi_Linux_Data_Transmission_System.dir/main.cpp.i

CMakeFiles/Multi_Linux_Data_Transmission_System.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Multi_Linux_Data_Transmission_System.dir/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/kelo/kelo/cpp/Multi-Linux-Data-Transmission-System/main.cpp -o CMakeFiles/Multi_Linux_Data_Transmission_System.dir/main.cpp.s

CMakeFiles/Multi_Linux_Data_Transmission_System.dir/srv/srv_init.cpp.o: CMakeFiles/Multi_Linux_Data_Transmission_System.dir/flags.make
CMakeFiles/Multi_Linux_Data_Transmission_System.dir/srv/srv_init.cpp.o: ../srv/srv_init.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/kelo/kelo/cpp/Multi-Linux-Data-Transmission-System/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Multi_Linux_Data_Transmission_System.dir/srv/srv_init.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Multi_Linux_Data_Transmission_System.dir/srv/srv_init.cpp.o -c /Users/kelo/kelo/cpp/Multi-Linux-Data-Transmission-System/srv/srv_init.cpp

CMakeFiles/Multi_Linux_Data_Transmission_System.dir/srv/srv_init.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Multi_Linux_Data_Transmission_System.dir/srv/srv_init.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/kelo/kelo/cpp/Multi-Linux-Data-Transmission-System/srv/srv_init.cpp > CMakeFiles/Multi_Linux_Data_Transmission_System.dir/srv/srv_init.cpp.i

CMakeFiles/Multi_Linux_Data_Transmission_System.dir/srv/srv_init.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Multi_Linux_Data_Transmission_System.dir/srv/srv_init.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/kelo/kelo/cpp/Multi-Linux-Data-Transmission-System/srv/srv_init.cpp -o CMakeFiles/Multi_Linux_Data_Transmission_System.dir/srv/srv_init.cpp.s

CMakeFiles/Multi_Linux_Data_Transmission_System.dir/srv/handle.cpp.o: CMakeFiles/Multi_Linux_Data_Transmission_System.dir/flags.make
CMakeFiles/Multi_Linux_Data_Transmission_System.dir/srv/handle.cpp.o: ../srv/handle.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/kelo/kelo/cpp/Multi-Linux-Data-Transmission-System/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/Multi_Linux_Data_Transmission_System.dir/srv/handle.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Multi_Linux_Data_Transmission_System.dir/srv/handle.cpp.o -c /Users/kelo/kelo/cpp/Multi-Linux-Data-Transmission-System/srv/handle.cpp

CMakeFiles/Multi_Linux_Data_Transmission_System.dir/srv/handle.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Multi_Linux_Data_Transmission_System.dir/srv/handle.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/kelo/kelo/cpp/Multi-Linux-Data-Transmission-System/srv/handle.cpp > CMakeFiles/Multi_Linux_Data_Transmission_System.dir/srv/handle.cpp.i

CMakeFiles/Multi_Linux_Data_Transmission_System.dir/srv/handle.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Multi_Linux_Data_Transmission_System.dir/srv/handle.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/kelo/kelo/cpp/Multi-Linux-Data-Transmission-System/srv/handle.cpp -o CMakeFiles/Multi_Linux_Data_Transmission_System.dir/srv/handle.cpp.s

CMakeFiles/Multi_Linux_Data_Transmission_System.dir/Test/Test.cpp.o: CMakeFiles/Multi_Linux_Data_Transmission_System.dir/flags.make
CMakeFiles/Multi_Linux_Data_Transmission_System.dir/Test/Test.cpp.o: ../Test/Test.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/kelo/kelo/cpp/Multi-Linux-Data-Transmission-System/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/Multi_Linux_Data_Transmission_System.dir/Test/Test.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Multi_Linux_Data_Transmission_System.dir/Test/Test.cpp.o -c /Users/kelo/kelo/cpp/Multi-Linux-Data-Transmission-System/Test/Test.cpp

CMakeFiles/Multi_Linux_Data_Transmission_System.dir/Test/Test.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Multi_Linux_Data_Transmission_System.dir/Test/Test.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/kelo/kelo/cpp/Multi-Linux-Data-Transmission-System/Test/Test.cpp > CMakeFiles/Multi_Linux_Data_Transmission_System.dir/Test/Test.cpp.i

CMakeFiles/Multi_Linux_Data_Transmission_System.dir/Test/Test.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Multi_Linux_Data_Transmission_System.dir/Test/Test.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/kelo/kelo/cpp/Multi-Linux-Data-Transmission-System/Test/Test.cpp -o CMakeFiles/Multi_Linux_Data_Transmission_System.dir/Test/Test.cpp.s

# Object files for target Multi_Linux_Data_Transmission_System
Multi_Linux_Data_Transmission_System_OBJECTS = \
"CMakeFiles/Multi_Linux_Data_Transmission_System.dir/main.cpp.o" \
"CMakeFiles/Multi_Linux_Data_Transmission_System.dir/srv/srv_init.cpp.o" \
"CMakeFiles/Multi_Linux_Data_Transmission_System.dir/srv/handle.cpp.o" \
"CMakeFiles/Multi_Linux_Data_Transmission_System.dir/Test/Test.cpp.o"

# External object files for target Multi_Linux_Data_Transmission_System
Multi_Linux_Data_Transmission_System_EXTERNAL_OBJECTS =

Multi_Linux_Data_Transmission_System: CMakeFiles/Multi_Linux_Data_Transmission_System.dir/main.cpp.o
Multi_Linux_Data_Transmission_System: CMakeFiles/Multi_Linux_Data_Transmission_System.dir/srv/srv_init.cpp.o
Multi_Linux_Data_Transmission_System: CMakeFiles/Multi_Linux_Data_Transmission_System.dir/srv/handle.cpp.o
Multi_Linux_Data_Transmission_System: CMakeFiles/Multi_Linux_Data_Transmission_System.dir/Test/Test.cpp.o
Multi_Linux_Data_Transmission_System: CMakeFiles/Multi_Linux_Data_Transmission_System.dir/build.make
Multi_Linux_Data_Transmission_System: CMakeFiles/Multi_Linux_Data_Transmission_System.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/kelo/kelo/cpp/Multi-Linux-Data-Transmission-System/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX executable Multi_Linux_Data_Transmission_System"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Multi_Linux_Data_Transmission_System.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Multi_Linux_Data_Transmission_System.dir/build: Multi_Linux_Data_Transmission_System

.PHONY : CMakeFiles/Multi_Linux_Data_Transmission_System.dir/build

CMakeFiles/Multi_Linux_Data_Transmission_System.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Multi_Linux_Data_Transmission_System.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Multi_Linux_Data_Transmission_System.dir/clean

CMakeFiles/Multi_Linux_Data_Transmission_System.dir/depend:
	cd /Users/kelo/kelo/cpp/Multi-Linux-Data-Transmission-System/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/kelo/kelo/cpp/Multi-Linux-Data-Transmission-System /Users/kelo/kelo/cpp/Multi-Linux-Data-Transmission-System /Users/kelo/kelo/cpp/Multi-Linux-Data-Transmission-System/cmake-build-debug /Users/kelo/kelo/cpp/Multi-Linux-Data-Transmission-System/cmake-build-debug /Users/kelo/kelo/cpp/Multi-Linux-Data-Transmission-System/cmake-build-debug/CMakeFiles/Multi_Linux_Data_Transmission_System.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Multi_Linux_Data_Transmission_System.dir/depend

