# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.23

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
CMAKE_COMMAND = "C:\Program Files\Microsoft Visual Studio\2022\Community\Common7\IDE\CommonExtensions\Microsoft\CMake\CMake\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\Microsoft Visual Studio\2022\Community\Common7\IDE\CommonExtensions\Microsoft\CMake\CMake\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\zerox\Documents\CEssentials\arrays\RandomMatriz

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\zerox\Documents\CEssentials\arrays\RandomMatriz\build

# Include any dependencies generated for this target.
include CMakeFiles/RandomMatriz.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/RandomMatriz.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/RandomMatriz.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/RandomMatriz.dir/flags.make

CMakeFiles/RandomMatriz.dir/main.c.obj: CMakeFiles/RandomMatriz.dir/flags.make
CMakeFiles/RandomMatriz.dir/main.c.obj: ../main.c
CMakeFiles/RandomMatriz.dir/main.c.obj: CMakeFiles/RandomMatriz.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\zerox\Documents\CEssentials\arrays\RandomMatriz\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/RandomMatriz.dir/main.c.obj"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/RandomMatriz.dir/main.c.obj -MF CMakeFiles\RandomMatriz.dir\main.c.obj.d -o CMakeFiles\RandomMatriz.dir\main.c.obj -c C:\Users\zerox\Documents\CEssentials\arrays\RandomMatriz\main.c

CMakeFiles/RandomMatriz.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/RandomMatriz.dir/main.c.i"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\zerox\Documents\CEssentials\arrays\RandomMatriz\main.c > CMakeFiles\RandomMatriz.dir\main.c.i

CMakeFiles/RandomMatriz.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/RandomMatriz.dir/main.c.s"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\zerox\Documents\CEssentials\arrays\RandomMatriz\main.c -o CMakeFiles\RandomMatriz.dir\main.c.s

# Object files for target RandomMatriz
RandomMatriz_OBJECTS = \
"CMakeFiles/RandomMatriz.dir/main.c.obj"

# External object files for target RandomMatriz
RandomMatriz_EXTERNAL_OBJECTS =

RandomMatriz.exe: CMakeFiles/RandomMatriz.dir/main.c.obj
RandomMatriz.exe: CMakeFiles/RandomMatriz.dir/build.make
RandomMatriz.exe: CMakeFiles/RandomMatriz.dir/linklibs.rsp
RandomMatriz.exe: CMakeFiles/RandomMatriz.dir/objects1.rsp
RandomMatriz.exe: CMakeFiles/RandomMatriz.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\zerox\Documents\CEssentials\arrays\RandomMatriz\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable RandomMatriz.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\RandomMatriz.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/RandomMatriz.dir/build: RandomMatriz.exe
.PHONY : CMakeFiles/RandomMatriz.dir/build

CMakeFiles/RandomMatriz.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\RandomMatriz.dir\cmake_clean.cmake
.PHONY : CMakeFiles/RandomMatriz.dir/clean

CMakeFiles/RandomMatriz.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\zerox\Documents\CEssentials\arrays\RandomMatriz C:\Users\zerox\Documents\CEssentials\arrays\RandomMatriz C:\Users\zerox\Documents\CEssentials\arrays\RandomMatriz\build C:\Users\zerox\Documents\CEssentials\arrays\RandomMatriz\build C:\Users\zerox\Documents\CEssentials\arrays\RandomMatriz\build\CMakeFiles\RandomMatriz.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/RandomMatriz.dir/depend
