# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.15

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/filip/Desktop/Graph/GraphMatrix

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/filip/Desktop/Graph/GraphMatrix/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/aisd.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/aisd.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/aisd.dir/flags.make

CMakeFiles/aisd.dir/main.cpp.o: CMakeFiles/aisd.dir/flags.make
CMakeFiles/aisd.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/filip/Desktop/Graph/GraphMatrix/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/aisd.dir/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/aisd.dir/main.cpp.o -c /Users/filip/Desktop/Graph/GraphMatrix/main.cpp

CMakeFiles/aisd.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/aisd.dir/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/filip/Desktop/Graph/GraphMatrix/main.cpp > CMakeFiles/aisd.dir/main.cpp.i

CMakeFiles/aisd.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/aisd.dir/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/filip/Desktop/Graph/GraphMatrix/main.cpp -o CMakeFiles/aisd.dir/main.cpp.s

CMakeFiles/aisd.dir/Graph.cpp.o: CMakeFiles/aisd.dir/flags.make
CMakeFiles/aisd.dir/Graph.cpp.o: ../Graph.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/filip/Desktop/Graph/GraphMatrix/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/aisd.dir/Graph.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/aisd.dir/Graph.cpp.o -c /Users/filip/Desktop/Graph/GraphMatrix/Graph.cpp

CMakeFiles/aisd.dir/Graph.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/aisd.dir/Graph.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/filip/Desktop/Graph/GraphMatrix/Graph.cpp > CMakeFiles/aisd.dir/Graph.cpp.i

CMakeFiles/aisd.dir/Graph.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/aisd.dir/Graph.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/filip/Desktop/Graph/GraphMatrix/Graph.cpp -o CMakeFiles/aisd.dir/Graph.cpp.s

CMakeFiles/aisd.dir/Vertex.cpp.o: CMakeFiles/aisd.dir/flags.make
CMakeFiles/aisd.dir/Vertex.cpp.o: ../Vertex.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/filip/Desktop/Graph/GraphMatrix/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/aisd.dir/Vertex.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/aisd.dir/Vertex.cpp.o -c /Users/filip/Desktop/Graph/GraphMatrix/Vertex.cpp

CMakeFiles/aisd.dir/Vertex.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/aisd.dir/Vertex.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/filip/Desktop/Graph/GraphMatrix/Vertex.cpp > CMakeFiles/aisd.dir/Vertex.cpp.i

CMakeFiles/aisd.dir/Vertex.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/aisd.dir/Vertex.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/filip/Desktop/Graph/GraphMatrix/Vertex.cpp -o CMakeFiles/aisd.dir/Vertex.cpp.s

# Object files for target aisd
aisd_OBJECTS = \
"CMakeFiles/aisd.dir/main.cpp.o" \
"CMakeFiles/aisd.dir/Graph.cpp.o" \
"CMakeFiles/aisd.dir/Vertex.cpp.o"

# External object files for target aisd
aisd_EXTERNAL_OBJECTS =

aisd: CMakeFiles/aisd.dir/main.cpp.o
aisd: CMakeFiles/aisd.dir/Graph.cpp.o
aisd: CMakeFiles/aisd.dir/Vertex.cpp.o
aisd: CMakeFiles/aisd.dir/build.make
aisd: CMakeFiles/aisd.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/filip/Desktop/Graph/GraphMatrix/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable aisd"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/aisd.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/aisd.dir/build: aisd

.PHONY : CMakeFiles/aisd.dir/build

CMakeFiles/aisd.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/aisd.dir/cmake_clean.cmake
.PHONY : CMakeFiles/aisd.dir/clean

CMakeFiles/aisd.dir/depend:
	cd /Users/filip/Desktop/Graph/GraphMatrix/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/filip/Desktop/Graph/GraphMatrix /Users/filip/Desktop/Graph/GraphMatrix /Users/filip/Desktop/Graph/GraphMatrix/cmake-build-debug /Users/filip/Desktop/Graph/GraphMatrix/cmake-build-debug /Users/filip/Desktop/Graph/GraphMatrix/cmake-build-debug/CMakeFiles/aisd.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/aisd.dir/depend

