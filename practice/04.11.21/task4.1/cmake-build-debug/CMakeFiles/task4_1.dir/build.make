# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.20

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\CLion\CLion 2021.2.1\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\CLion\CLion 2021.2.1\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "C:\Users\Cake\Desktop\labs git\04.11.21\task4.1"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\Cake\Desktop\labs git\04.11.21\task4.1\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/task4_1.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/task4_1.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/task4_1.dir/flags.make

CMakeFiles/task4_1.dir/task4.1.cpp.obj: CMakeFiles/task4_1.dir/flags.make
CMakeFiles/task4_1.dir/task4.1.cpp.obj: ../task4.1.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\Cake\Desktop\labs git\04.11.21\task4.1\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/task4_1.dir/task4.1.cpp.obj"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\task4_1.dir\task4.1.cpp.obj -c "C:\Users\Cake\Desktop\labs git\04.11.21\task4.1\task4.1.cpp"

CMakeFiles/task4_1.dir/task4.1.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/task4_1.dir/task4.1.cpp.i"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\Cake\Desktop\labs git\04.11.21\task4.1\task4.1.cpp" > CMakeFiles\task4_1.dir\task4.1.cpp.i

CMakeFiles/task4_1.dir/task4.1.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/task4_1.dir/task4.1.cpp.s"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\Cake\Desktop\labs git\04.11.21\task4.1\task4.1.cpp" -o CMakeFiles\task4_1.dir\task4.1.cpp.s

# Object files for target task4_1
task4_1_OBJECTS = \
"CMakeFiles/task4_1.dir/task4.1.cpp.obj"

# External object files for target task4_1
task4_1_EXTERNAL_OBJECTS =

task4_1.exe: CMakeFiles/task4_1.dir/task4.1.cpp.obj
task4_1.exe: CMakeFiles/task4_1.dir/build.make
task4_1.exe: CMakeFiles/task4_1.dir/linklibs.rsp
task4_1.exe: CMakeFiles/task4_1.dir/objects1.rsp
task4_1.exe: CMakeFiles/task4_1.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\Cake\Desktop\labs git\04.11.21\task4.1\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable task4_1.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\task4_1.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/task4_1.dir/build: task4_1.exe
.PHONY : CMakeFiles/task4_1.dir/build

CMakeFiles/task4_1.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\task4_1.dir\cmake_clean.cmake
.PHONY : CMakeFiles/task4_1.dir/clean

CMakeFiles/task4_1.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\Cake\Desktop\labs git\04.11.21\task4.1" "C:\Users\Cake\Desktop\labs git\04.11.21\task4.1" "C:\Users\Cake\Desktop\labs git\04.11.21\task4.1\cmake-build-debug" "C:\Users\Cake\Desktop\labs git\04.11.21\task4.1\cmake-build-debug" "C:\Users\Cake\Desktop\labs git\04.11.21\task4.1\cmake-build-debug\CMakeFiles\task4_1.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/task4_1.dir/depend

