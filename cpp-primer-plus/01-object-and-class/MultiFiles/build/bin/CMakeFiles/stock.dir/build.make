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
CMAKE_SOURCE_DIR = /home/wuzhiguo/Desktop/OpenCV3/prerequisites/Cplusplus/01-class-definition/MultiFiles

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/wuzhiguo/Desktop/OpenCV3/prerequisites/Cplusplus/01-class-definition/MultiFiles/build

# Include any dependencies generated for this target.
include bin/CMakeFiles/stock.dir/depend.make

# Include the progress variables for this target.
include bin/CMakeFiles/stock.dir/progress.make

# Include the compile flags for this target's objects.
include bin/CMakeFiles/stock.dir/flags.make

bin/CMakeFiles/stock.dir/main.o: bin/CMakeFiles/stock.dir/flags.make
bin/CMakeFiles/stock.dir/main.o: ../src/main.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/wuzhiguo/Desktop/OpenCV3/prerequisites/Cplusplus/01-class-definition/MultiFiles/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object bin/CMakeFiles/stock.dir/main.o"
	cd /home/wuzhiguo/Desktop/OpenCV3/prerequisites/Cplusplus/01-class-definition/MultiFiles/build/bin && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/stock.dir/main.o -c /home/wuzhiguo/Desktop/OpenCV3/prerequisites/Cplusplus/01-class-definition/MultiFiles/src/main.cpp

bin/CMakeFiles/stock.dir/main.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/stock.dir/main.i"
	cd /home/wuzhiguo/Desktop/OpenCV3/prerequisites/Cplusplus/01-class-definition/MultiFiles/build/bin && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/wuzhiguo/Desktop/OpenCV3/prerequisites/Cplusplus/01-class-definition/MultiFiles/src/main.cpp > CMakeFiles/stock.dir/main.i

bin/CMakeFiles/stock.dir/main.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/stock.dir/main.s"
	cd /home/wuzhiguo/Desktop/OpenCV3/prerequisites/Cplusplus/01-class-definition/MultiFiles/build/bin && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/wuzhiguo/Desktop/OpenCV3/prerequisites/Cplusplus/01-class-definition/MultiFiles/src/main.cpp -o CMakeFiles/stock.dir/main.s

bin/CMakeFiles/stock.dir/main.o.requires:
.PHONY : bin/CMakeFiles/stock.dir/main.o.requires

bin/CMakeFiles/stock.dir/main.o.provides: bin/CMakeFiles/stock.dir/main.o.requires
	$(MAKE) -f bin/CMakeFiles/stock.dir/build.make bin/CMakeFiles/stock.dir/main.o.provides.build
.PHONY : bin/CMakeFiles/stock.dir/main.o.provides

bin/CMakeFiles/stock.dir/main.o.provides.build: bin/CMakeFiles/stock.dir/main.o

bin/CMakeFiles/stock.dir/stock.o: bin/CMakeFiles/stock.dir/flags.make
bin/CMakeFiles/stock.dir/stock.o: ../src/stock.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/wuzhiguo/Desktop/OpenCV3/prerequisites/Cplusplus/01-class-definition/MultiFiles/build/CMakeFiles $(CMAKE_PROGRESS_2)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object bin/CMakeFiles/stock.dir/stock.o"
	cd /home/wuzhiguo/Desktop/OpenCV3/prerequisites/Cplusplus/01-class-definition/MultiFiles/build/bin && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/stock.dir/stock.o -c /home/wuzhiguo/Desktop/OpenCV3/prerequisites/Cplusplus/01-class-definition/MultiFiles/src/stock.cpp

bin/CMakeFiles/stock.dir/stock.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/stock.dir/stock.i"
	cd /home/wuzhiguo/Desktop/OpenCV3/prerequisites/Cplusplus/01-class-definition/MultiFiles/build/bin && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/wuzhiguo/Desktop/OpenCV3/prerequisites/Cplusplus/01-class-definition/MultiFiles/src/stock.cpp > CMakeFiles/stock.dir/stock.i

bin/CMakeFiles/stock.dir/stock.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/stock.dir/stock.s"
	cd /home/wuzhiguo/Desktop/OpenCV3/prerequisites/Cplusplus/01-class-definition/MultiFiles/build/bin && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/wuzhiguo/Desktop/OpenCV3/prerequisites/Cplusplus/01-class-definition/MultiFiles/src/stock.cpp -o CMakeFiles/stock.dir/stock.s

bin/CMakeFiles/stock.dir/stock.o.requires:
.PHONY : bin/CMakeFiles/stock.dir/stock.o.requires

bin/CMakeFiles/stock.dir/stock.o.provides: bin/CMakeFiles/stock.dir/stock.o.requires
	$(MAKE) -f bin/CMakeFiles/stock.dir/build.make bin/CMakeFiles/stock.dir/stock.o.provides.build
.PHONY : bin/CMakeFiles/stock.dir/stock.o.provides

bin/CMakeFiles/stock.dir/stock.o.provides.build: bin/CMakeFiles/stock.dir/stock.o

# Object files for target stock
stock_OBJECTS = \
"CMakeFiles/stock.dir/main.o" \
"CMakeFiles/stock.dir/stock.o"

# External object files for target stock
stock_EXTERNAL_OBJECTS =

bin/stock: bin/CMakeFiles/stock.dir/main.o
bin/stock: bin/CMakeFiles/stock.dir/stock.o
bin/stock: bin/CMakeFiles/stock.dir/build.make
bin/stock: bin/CMakeFiles/stock.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable stock"
	cd /home/wuzhiguo/Desktop/OpenCV3/prerequisites/Cplusplus/01-class-definition/MultiFiles/build/bin && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/stock.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
bin/CMakeFiles/stock.dir/build: bin/stock
.PHONY : bin/CMakeFiles/stock.dir/build

bin/CMakeFiles/stock.dir/requires: bin/CMakeFiles/stock.dir/main.o.requires
bin/CMakeFiles/stock.dir/requires: bin/CMakeFiles/stock.dir/stock.o.requires
.PHONY : bin/CMakeFiles/stock.dir/requires

bin/CMakeFiles/stock.dir/clean:
	cd /home/wuzhiguo/Desktop/OpenCV3/prerequisites/Cplusplus/01-class-definition/MultiFiles/build/bin && $(CMAKE_COMMAND) -P CMakeFiles/stock.dir/cmake_clean.cmake
.PHONY : bin/CMakeFiles/stock.dir/clean

bin/CMakeFiles/stock.dir/depend:
	cd /home/wuzhiguo/Desktop/OpenCV3/prerequisites/Cplusplus/01-class-definition/MultiFiles/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/wuzhiguo/Desktop/OpenCV3/prerequisites/Cplusplus/01-class-definition/MultiFiles /home/wuzhiguo/Desktop/OpenCV3/prerequisites/Cplusplus/01-class-definition/MultiFiles/src /home/wuzhiguo/Desktop/OpenCV3/prerequisites/Cplusplus/01-class-definition/MultiFiles/build /home/wuzhiguo/Desktop/OpenCV3/prerequisites/Cplusplus/01-class-definition/MultiFiles/build/bin /home/wuzhiguo/Desktop/OpenCV3/prerequisites/Cplusplus/01-class-definition/MultiFiles/build/bin/CMakeFiles/stock.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : bin/CMakeFiles/stock.dir/depend

