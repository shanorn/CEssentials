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
CMAKE_SOURCE_DIR = "C:\Users\zerox\Documents\CEssentials\strings\EJ20 Cadena contenida"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\zerox\Documents\CEssentials\strings\EJ20 Cadena contenida\build"

# Include any dependencies generated for this target.
include CMakeFiles/contenida.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/contenida.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/contenida.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/contenida.dir/flags.make

CMakeFiles/contenida.dir/main.c.obj: CMakeFiles/contenida.dir/flags.make
CMakeFiles/contenida.dir/main.c.obj: ../main.c
CMakeFiles/contenida.dir/main.c.obj: CMakeFiles/contenida.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\zerox\Documents\CEssentials\strings\EJ20 Cadena contenida\build\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/contenida.dir/main.c.obj"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/contenida.dir/main.c.obj -MF CMakeFiles\contenida.dir\main.c.obj.d -o CMakeFiles\contenida.dir\main.c.obj -c "C:\Users\zerox\Documents\CEssentials\strings\EJ20 Cadena contenida\main.c"

CMakeFiles/contenida.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/contenida.dir/main.c.i"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "C:\Users\zerox\Documents\CEssentials\strings\EJ20 Cadena contenida\main.c" > CMakeFiles\contenida.dir\main.c.i

CMakeFiles/contenida.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/contenida.dir/main.c.s"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "C:\Users\zerox\Documents\CEssentials\strings\EJ20 Cadena contenida\main.c" -o CMakeFiles\contenida.dir\main.c.s

# Object files for target contenida
contenida_OBJECTS = \
"CMakeFiles/contenida.dir/main.c.obj"

# External object files for target contenida
contenida_EXTERNAL_OBJECTS =

contenida.exe: CMakeFiles/contenida.dir/main.c.obj
contenida.exe: CMakeFiles/contenida.dir/build.make
contenida.exe: CMakeFiles/contenida.dir/linklibs.rsp
contenida.exe: CMakeFiles/contenida.dir/objects1.rsp
contenida.exe: CMakeFiles/contenida.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\zerox\Documents\CEssentials\strings\EJ20 Cadena contenida\build\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable contenida.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\contenida.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/contenida.dir/build: contenida.exe
.PHONY : CMakeFiles/contenida.dir/build

CMakeFiles/contenida.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\contenida.dir\cmake_clean.cmake
.PHONY : CMakeFiles/contenida.dir/clean

CMakeFiles/contenida.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\zerox\Documents\CEssentials\strings\EJ20 Cadena contenida" "C:\Users\zerox\Documents\CEssentials\strings\EJ20 Cadena contenida" "C:\Users\zerox\Documents\CEssentials\strings\EJ20 Cadena contenida\build" "C:\Users\zerox\Documents\CEssentials\strings\EJ20 Cadena contenida\build" "C:\Users\zerox\Documents\CEssentials\strings\EJ20 Cadena contenida\build\CMakeFiles\contenida.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/contenida.dir/depend
