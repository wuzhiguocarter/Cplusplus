# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.2

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
CMAKE_SOURCE_DIR = /home/wuzhiguo/Desktop/OpenCV3/prerequisites/Cplusplus/01-class-definition/This-Pointer

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/wuzhiguo/Desktop/OpenCV3/prerequisites/Cplusplus/01-class-definition/This-Pointer

# Include any dependencies generated for this target.
include CMakeFiles/stock.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/stock.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/stock.dir/flags.make

CMakeFiles/stock.dir/stock.cpp.o: CMakeFiles/stock.dir/flags.make
CMakeFiles/stock.dir/stock.cpp.o: stock.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/wuzhiguo/Desktop/OpenCV3/prerequisites/Cplusplus/01-class-definition/This-Pointer/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/stock.dir/stock.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/stock.dir/stock.cpp.o -c /home/wuzhiguo/Desktop/OpenCV3/prerequisites/Cplusplus/01-class-definition/This-Pointer/stock.cpp

CMakeFiles/stock.dir/stock.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/stock.dir/stock.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/wuzhiguo/Desktop/OpenCV3/prerequisites/Cplusplus/01-class-definition/This-Pointer/stock.cpp > CMakeFiles/stock.dir/stock.cpp.i

CMakeFiles/stock.dir/stock.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/stock.dir/stock.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/wuzhiguo/Desktop/OpenCV3/prerequisites/Cplusplus/01-class-definition/This-Pointer/stock.cpp -o CMakeFiles/stock.dir/stock.cpp.s

CMakeFiles/stock.dir/stock.cpp.o.requires:
.PHONY : CMakeFiles/stock.dir/stock.cpp.o.requires

CMakeFiles/stock.dir/stock.cpp.o.provides: CMakeFiles/stock.dir/stock.cpp.o.requires
	$(MAKE) -f CMakeFiles/stock.dir/build.make CMakeFiles/stock.dir/stock.cpp.o.provides.build
.PHONY : CMakeFiles/stock.dir/stock.cpp.o.provides

CMakeFiles/stock.dir/stock.cpp.o.provides.build: CMakeFiles/stock.dir/stock.cpp.o

# Object files for target stock
stock_OBJECTS = \
"CMakeFiles/stock.dir/stock.cpp.o"

# External object files for target stock
stock_EXTERNAL_OBJECTS =

stock: CMakeFiles/stock.dir/stock.cpp.o
stock: CMakeFiles/stock.dir/build.make
stock: CMakeFiles/stock.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable stock"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/stock.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/stock.dir/build: stock
.PHONY : CMakeFiles/stock.dir/build

CMakeFiles/stock.dir/requires: CMakeFiles/stock.dir/stock.cpp.o.requires
.PHONY : CMakeFiles/stock.dir/requires

CMakeFiles/stock.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/stock.dir/cmake_clean.cmake
.PHONY : CMakeFiles/stock.dir/clean

CMakeFiles/stock.dir/depend:
	cd /home/wuzhiguo/Desktop/OpenCV3/prerequisites/Cplusplus/01-class-definition/This-Pointer && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/wuzhiguo/Desktop/OpenCV3/prerequisites/Cplusplus/01-class-definition/This-Pointer /home/wuzhiguo/Desktop/OpenCV3/prerequisites/Cplusplus/01-class-definition/This-Pointer /home/wuzhiguo/Desktop/OpenCV3/prerequisites/Cplusplus/01-class-definition/This-Pointer /home/wuzhiguo/Desktop/OpenCV3/prerequisites/Cplusplus/01-class-definition/This-Pointer /home/wuzhiguo/Desktop/OpenCV3/prerequisites/Cplusplus/01-class-definition/This-Pointer/CMakeFiles/stock.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/stock.dir/depend

