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
CMAKE_SOURCE_DIR = C:\Users\zerox\Documents\CEssentials\arrays\Polinomio

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\zerox\Documents\CEssentials\arrays\Polinomio\build

# Include any dependencies generated for this target.
include CMakeFiles/polinomio.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/polinomio.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/polinomio.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/polinomio.dir/flags.make

CMakeFiles/polinomio.dir/main_estatico.c.obj: CMakeFiles/polinomio.dir/flags.make
CMakeFiles/polinomio.dir/main_estatico.c.obj: ../main_estatico.c
CMakeFiles/polinomio.dir/main_estatico.c.obj: CMakeFiles/polinomio.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\zerox\Documents\CEssentials\arrays\Polinomio\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/polinomio.dir/main_estatico.c.obj"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/polinomio.dir/main_estatico.c.obj -MF CMakeFiles\polinomio.dir\main_estatico.c.obj.d -o CMakeFiles\polinomio.dir\main_estatico.c.obj -c C:\Users\zerox\Documents\CEssentials\arrays\Polinomio\main_estatico.c

CMakeFiles/polinomio.dir/main_estatico.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/polinomio.dir/main_estatico.c.i"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\zerox\Documents\CEssentials\arrays\Polinomio\main_estatico.c > CMakeFiles\polinomio.dir\main_estatico.c.i

CMakeFiles/polinomio.dir/main_estatico.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/polinomio.dir/main_estatico.c.s"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\zerox\Documents\CEssentials\arrays\Polinomio\main_estatico.c -o CMakeFiles\polinomio.dir\main_estatico.c.s

# Object files for target polinomio
polinomio_OBJECTS = \
"CMakeFiles/polinomio.dir/main_estatico.c.obj"

# External object files for target polinomio
polinomio_EXTERNAL_OBJECTS =

polinomio.exe: CMakeFiles/polinomio.dir/main_estatico.c.obj
polinomio.exe: CMakeFiles/polinomio.dir/build.make
polinomio.exe: CMakeFiles/polinomio.dir/linklibs.rsp
polinomio.exe: CMakeFiles/polinomio.dir/objects1.rsp
polinomio.exe: CMakeFiles/polinomio.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\zerox\Documents\CEssentials\arrays\Polinomio\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable polinomio.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\polinomio.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/polinomio.dir/build: polinomio.exe
.PHONY : CMakeFiles/polinomio.dir/build

CMakeFiles/polinomio.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\polinomio.dir\cmake_clean.cmake
.PHONY : CMakeFiles/polinomio.dir/clean

CMakeFiles/polinomio.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\zerox\Documents\CEssentials\arrays\Polinomio C:\Users\zerox\Documents\CEssentials\arrays\Polinomio C:\Users\zerox\Documents\CEssentials\arrays\Polinomio\build C:\Users\zerox\Documents\CEssentials\arrays\Polinomio\build C:\Users\zerox\Documents\CEssentials\arrays\Polinomio\build\CMakeFiles\polinomio.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/polinomio.dir/depend

