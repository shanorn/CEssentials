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
CMAKE_SOURCE_DIR = "C:\Users\zerox\Documents\CEssentials\strings\EJ16 Alreves"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\zerox\Documents\CEssentials\strings\EJ16 Alreves\build"

# Include any dependencies generated for this target.
include CMakeFiles/alreves.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/alreves.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/alreves.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/alreves.dir/flags.make

CMakeFiles/alreves.dir/main.c.obj: CMakeFiles/alreves.dir/flags.make
CMakeFiles/alreves.dir/main.c.obj: ../main.c
CMakeFiles/alreves.dir/main.c.obj: CMakeFiles/alreves.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\zerox\Documents\CEssentials\strings\EJ16 Alreves\build\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/alreves.dir/main.c.obj"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/alreves.dir/main.c.obj -MF CMakeFiles\alreves.dir\main.c.obj.d -o CMakeFiles\alreves.dir\main.c.obj -c "C:\Users\zerox\Documents\CEssentials\strings\EJ16 Alreves\main.c"

CMakeFiles/alreves.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/alreves.dir/main.c.i"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "C:\Users\zerox\Documents\CEssentials\strings\EJ16 Alreves\main.c" > CMakeFiles\alreves.dir\main.c.i

CMakeFiles/alreves.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/alreves.dir/main.c.s"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "C:\Users\zerox\Documents\CEssentials\strings\EJ16 Alreves\main.c" -o CMakeFiles\alreves.dir\main.c.s

# Object files for target alreves
alreves_OBJECTS = \
"CMakeFiles/alreves.dir/main.c.obj"

# External object files for target alreves
alreves_EXTERNAL_OBJECTS =

alreves.exe: CMakeFiles/alreves.dir/main.c.obj
alreves.exe: CMakeFiles/alreves.dir/build.make
alreves.exe: CMakeFiles/alreves.dir/linklibs.rsp
alreves.exe: CMakeFiles/alreves.dir/objects1.rsp
alreves.exe: CMakeFiles/alreves.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\zerox\Documents\CEssentials\strings\EJ16 Alreves\build\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable alreves.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\alreves.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/alreves.dir/build: alreves.exe
.PHONY : CMakeFiles/alreves.dir/build

CMakeFiles/alreves.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\alreves.dir\cmake_clean.cmake
.PHONY : CMakeFiles/alreves.dir/clean

CMakeFiles/alreves.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\zerox\Documents\CEssentials\strings\EJ16 Alreves" "C:\Users\zerox\Documents\CEssentials\strings\EJ16 Alreves" "C:\Users\zerox\Documents\CEssentials\strings\EJ16 Alreves\build" "C:\Users\zerox\Documents\CEssentials\strings\EJ16 Alreves\build" "C:\Users\zerox\Documents\CEssentials\strings\EJ16 Alreves\build\CMakeFiles\alreves.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/alreves.dir/depend

