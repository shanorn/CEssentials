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
CMAKE_SOURCE_DIR = C:\Users\zerox\Documents\CEssentials\memoryKiller

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\zerox\Documents\CEssentials\memoryKiller\build

# Include any dependencies generated for this target.
include CMakeFiles/killer.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/killer.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/killer.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/killer.dir/flags.make

CMakeFiles/killer.dir/main.c.obj: CMakeFiles/killer.dir/flags.make
CMakeFiles/killer.dir/main.c.obj: ../main.c
CMakeFiles/killer.dir/main.c.obj: CMakeFiles/killer.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\zerox\Documents\CEssentials\memoryKiller\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/killer.dir/main.c.obj"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/killer.dir/main.c.obj -MF CMakeFiles\killer.dir\main.c.obj.d -o CMakeFiles\killer.dir\main.c.obj -c C:\Users\zerox\Documents\CEssentials\memoryKiller\main.c

CMakeFiles/killer.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/killer.dir/main.c.i"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\zerox\Documents\CEssentials\memoryKiller\main.c > CMakeFiles\killer.dir\main.c.i

CMakeFiles/killer.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/killer.dir/main.c.s"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\zerox\Documents\CEssentials\memoryKiller\main.c -o CMakeFiles\killer.dir\main.c.s

# Object files for target killer
killer_OBJECTS = \
"CMakeFiles/killer.dir/main.c.obj"

# External object files for target killer
killer_EXTERNAL_OBJECTS =

killer.exe: CMakeFiles/killer.dir/main.c.obj
killer.exe: CMakeFiles/killer.dir/build.make
killer.exe: CMakeFiles/killer.dir/linklibs.rsp
killer.exe: CMakeFiles/killer.dir/objects1.rsp
killer.exe: CMakeFiles/killer.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\zerox\Documents\CEssentials\memoryKiller\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable killer.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\killer.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/killer.dir/build: killer.exe
.PHONY : CMakeFiles/killer.dir/build

CMakeFiles/killer.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\killer.dir\cmake_clean.cmake
.PHONY : CMakeFiles/killer.dir/clean

CMakeFiles/killer.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\zerox\Documents\CEssentials\memoryKiller C:\Users\zerox\Documents\CEssentials\memoryKiller C:\Users\zerox\Documents\CEssentials\memoryKiller\build C:\Users\zerox\Documents\CEssentials\memoryKiller\build C:\Users\zerox\Documents\CEssentials\memoryKiller\build\CMakeFiles\killer.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/killer.dir/depend

