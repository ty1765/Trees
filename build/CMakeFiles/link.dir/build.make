# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 2.8

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/tpot/Desktop/C++/forFun/pracLink

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/tpot/Desktop/C++/forFun/pracLink/build

# Include any dependencies generated for this target.
include CMakeFiles/link.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/link.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/link.dir/flags.make

CMakeFiles/link.dir/main.cpp.o: CMakeFiles/link.dir/flags.make
CMakeFiles/link.dir/main.cpp.o: ../main.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/tpot/Desktop/C++/forFun/pracLink/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/link.dir/main.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/link.dir/main.cpp.o -c /home/tpot/Desktop/C++/forFun/pracLink/main.cpp

CMakeFiles/link.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/link.dir/main.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/tpot/Desktop/C++/forFun/pracLink/main.cpp > CMakeFiles/link.dir/main.cpp.i

CMakeFiles/link.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/link.dir/main.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/tpot/Desktop/C++/forFun/pracLink/main.cpp -o CMakeFiles/link.dir/main.cpp.s

CMakeFiles/link.dir/main.cpp.o.requires:
.PHONY : CMakeFiles/link.dir/main.cpp.o.requires

CMakeFiles/link.dir/main.cpp.o.provides: CMakeFiles/link.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/link.dir/build.make CMakeFiles/link.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/link.dir/main.cpp.o.provides

CMakeFiles/link.dir/main.cpp.o.provides.build: CMakeFiles/link.dir/main.cpp.o

CMakeFiles/link.dir/list.cpp.o: CMakeFiles/link.dir/flags.make
CMakeFiles/link.dir/list.cpp.o: ../list.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/tpot/Desktop/C++/forFun/pracLink/build/CMakeFiles $(CMAKE_PROGRESS_2)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/link.dir/list.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/link.dir/list.cpp.o -c /home/tpot/Desktop/C++/forFun/pracLink/list.cpp

CMakeFiles/link.dir/list.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/link.dir/list.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/tpot/Desktop/C++/forFun/pracLink/list.cpp > CMakeFiles/link.dir/list.cpp.i

CMakeFiles/link.dir/list.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/link.dir/list.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/tpot/Desktop/C++/forFun/pracLink/list.cpp -o CMakeFiles/link.dir/list.cpp.s

CMakeFiles/link.dir/list.cpp.o.requires:
.PHONY : CMakeFiles/link.dir/list.cpp.o.requires

CMakeFiles/link.dir/list.cpp.o.provides: CMakeFiles/link.dir/list.cpp.o.requires
	$(MAKE) -f CMakeFiles/link.dir/build.make CMakeFiles/link.dir/list.cpp.o.provides.build
.PHONY : CMakeFiles/link.dir/list.cpp.o.provides

CMakeFiles/link.dir/list.cpp.o.provides.build: CMakeFiles/link.dir/list.cpp.o

CMakeFiles/link.dir/array.cpp.o: CMakeFiles/link.dir/flags.make
CMakeFiles/link.dir/array.cpp.o: ../array.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/tpot/Desktop/C++/forFun/pracLink/build/CMakeFiles $(CMAKE_PROGRESS_3)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/link.dir/array.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/link.dir/array.cpp.o -c /home/tpot/Desktop/C++/forFun/pracLink/array.cpp

CMakeFiles/link.dir/array.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/link.dir/array.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/tpot/Desktop/C++/forFun/pracLink/array.cpp > CMakeFiles/link.dir/array.cpp.i

CMakeFiles/link.dir/array.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/link.dir/array.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/tpot/Desktop/C++/forFun/pracLink/array.cpp -o CMakeFiles/link.dir/array.cpp.s

CMakeFiles/link.dir/array.cpp.o.requires:
.PHONY : CMakeFiles/link.dir/array.cpp.o.requires

CMakeFiles/link.dir/array.cpp.o.provides: CMakeFiles/link.dir/array.cpp.o.requires
	$(MAKE) -f CMakeFiles/link.dir/build.make CMakeFiles/link.dir/array.cpp.o.provides.build
.PHONY : CMakeFiles/link.dir/array.cpp.o.provides

CMakeFiles/link.dir/array.cpp.o.provides.build: CMakeFiles/link.dir/array.cpp.o

# Object files for target link
link_OBJECTS = \
"CMakeFiles/link.dir/main.cpp.o" \
"CMakeFiles/link.dir/list.cpp.o" \
"CMakeFiles/link.dir/array.cpp.o"

# External object files for target link
link_EXTERNAL_OBJECTS =

link: CMakeFiles/link.dir/main.cpp.o
link: CMakeFiles/link.dir/list.cpp.o
link: CMakeFiles/link.dir/array.cpp.o
link: CMakeFiles/link.dir/build.make
link: CMakeFiles/link.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable link"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/link.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/link.dir/build: link
.PHONY : CMakeFiles/link.dir/build

CMakeFiles/link.dir/requires: CMakeFiles/link.dir/main.cpp.o.requires
CMakeFiles/link.dir/requires: CMakeFiles/link.dir/list.cpp.o.requires
CMakeFiles/link.dir/requires: CMakeFiles/link.dir/array.cpp.o.requires
.PHONY : CMakeFiles/link.dir/requires

CMakeFiles/link.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/link.dir/cmake_clean.cmake
.PHONY : CMakeFiles/link.dir/clean

CMakeFiles/link.dir/depend:
	cd /home/tpot/Desktop/C++/forFun/pracLink/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/tpot/Desktop/C++/forFun/pracLink /home/tpot/Desktop/C++/forFun/pracLink /home/tpot/Desktop/C++/forFun/pracLink/build /home/tpot/Desktop/C++/forFun/pracLink/build /home/tpot/Desktop/C++/forFun/pracLink/build/CMakeFiles/link.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/link.dir/depend

