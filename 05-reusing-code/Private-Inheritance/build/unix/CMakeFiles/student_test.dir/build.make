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
CMAKE_SOURCE_DIR = /home/wuzhiguo/Desktop/ComputerVision/prerequisites/Cplusplus/05-reusing-code/Private-Inheritance

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/wuzhiguo/Desktop/ComputerVision/prerequisites/Cplusplus/05-reusing-code/Private-Inheritance/build/unix

# Include any dependencies generated for this target.
include CMakeFiles/student_test.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/student_test.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/student_test.dir/flags.make

CMakeFiles/student_test.dir/main.cpp.o: CMakeFiles/student_test.dir/flags.make
CMakeFiles/student_test.dir/main.cpp.o: ../../main.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/wuzhiguo/Desktop/ComputerVision/prerequisites/Cplusplus/05-reusing-code/Private-Inheritance/build/unix/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/student_test.dir/main.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/student_test.dir/main.cpp.o -c /home/wuzhiguo/Desktop/ComputerVision/prerequisites/Cplusplus/05-reusing-code/Private-Inheritance/main.cpp

CMakeFiles/student_test.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/student_test.dir/main.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/wuzhiguo/Desktop/ComputerVision/prerequisites/Cplusplus/05-reusing-code/Private-Inheritance/main.cpp > CMakeFiles/student_test.dir/main.cpp.i

CMakeFiles/student_test.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/student_test.dir/main.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/wuzhiguo/Desktop/ComputerVision/prerequisites/Cplusplus/05-reusing-code/Private-Inheritance/main.cpp -o CMakeFiles/student_test.dir/main.cpp.s

CMakeFiles/student_test.dir/main.cpp.o.requires:
.PHONY : CMakeFiles/student_test.dir/main.cpp.o.requires

CMakeFiles/student_test.dir/main.cpp.o.provides: CMakeFiles/student_test.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/student_test.dir/build.make CMakeFiles/student_test.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/student_test.dir/main.cpp.o.provides

CMakeFiles/student_test.dir/main.cpp.o.provides.build: CMakeFiles/student_test.dir/main.cpp.o

CMakeFiles/student_test.dir/student.cpp.o: CMakeFiles/student_test.dir/flags.make
CMakeFiles/student_test.dir/student.cpp.o: ../../student.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/wuzhiguo/Desktop/ComputerVision/prerequisites/Cplusplus/05-reusing-code/Private-Inheritance/build/unix/CMakeFiles $(CMAKE_PROGRESS_2)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/student_test.dir/student.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/student_test.dir/student.cpp.o -c /home/wuzhiguo/Desktop/ComputerVision/prerequisites/Cplusplus/05-reusing-code/Private-Inheritance/student.cpp

CMakeFiles/student_test.dir/student.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/student_test.dir/student.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/wuzhiguo/Desktop/ComputerVision/prerequisites/Cplusplus/05-reusing-code/Private-Inheritance/student.cpp > CMakeFiles/student_test.dir/student.cpp.i

CMakeFiles/student_test.dir/student.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/student_test.dir/student.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/wuzhiguo/Desktop/ComputerVision/prerequisites/Cplusplus/05-reusing-code/Private-Inheritance/student.cpp -o CMakeFiles/student_test.dir/student.cpp.s

CMakeFiles/student_test.dir/student.cpp.o.requires:
.PHONY : CMakeFiles/student_test.dir/student.cpp.o.requires

CMakeFiles/student_test.dir/student.cpp.o.provides: CMakeFiles/student_test.dir/student.cpp.o.requires
	$(MAKE) -f CMakeFiles/student_test.dir/build.make CMakeFiles/student_test.dir/student.cpp.o.provides.build
.PHONY : CMakeFiles/student_test.dir/student.cpp.o.provides

CMakeFiles/student_test.dir/student.cpp.o.provides.build: CMakeFiles/student_test.dir/student.cpp.o

# Object files for target student_test
student_test_OBJECTS = \
"CMakeFiles/student_test.dir/main.cpp.o" \
"CMakeFiles/student_test.dir/student.cpp.o"

# External object files for target student_test
student_test_EXTERNAL_OBJECTS =

student_test: CMakeFiles/student_test.dir/main.cpp.o
student_test: CMakeFiles/student_test.dir/student.cpp.o
student_test: CMakeFiles/student_test.dir/build.make
student_test: CMakeFiles/student_test.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable student_test"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/student_test.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/student_test.dir/build: student_test
.PHONY : CMakeFiles/student_test.dir/build

CMakeFiles/student_test.dir/requires: CMakeFiles/student_test.dir/main.cpp.o.requires
CMakeFiles/student_test.dir/requires: CMakeFiles/student_test.dir/student.cpp.o.requires
.PHONY : CMakeFiles/student_test.dir/requires

CMakeFiles/student_test.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/student_test.dir/cmake_clean.cmake
.PHONY : CMakeFiles/student_test.dir/clean

CMakeFiles/student_test.dir/depend:
	cd /home/wuzhiguo/Desktop/ComputerVision/prerequisites/Cplusplus/05-reusing-code/Private-Inheritance/build/unix && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/wuzhiguo/Desktop/ComputerVision/prerequisites/Cplusplus/05-reusing-code/Private-Inheritance /home/wuzhiguo/Desktop/ComputerVision/prerequisites/Cplusplus/05-reusing-code/Private-Inheritance /home/wuzhiguo/Desktop/ComputerVision/prerequisites/Cplusplus/05-reusing-code/Private-Inheritance/build/unix /home/wuzhiguo/Desktop/ComputerVision/prerequisites/Cplusplus/05-reusing-code/Private-Inheritance/build/unix /home/wuzhiguo/Desktop/ComputerVision/prerequisites/Cplusplus/05-reusing-code/Private-Inheritance/build/unix/CMakeFiles/student_test.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/student_test.dir/depend
