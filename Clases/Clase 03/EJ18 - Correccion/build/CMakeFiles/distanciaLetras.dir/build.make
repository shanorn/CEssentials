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
CMAKE_SOURCE_DIR = "C:\Users\zerox\Documents\CEssentials\Clases\Clase 03\EJ18 - Correccion"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\zerox\Documents\CEssentials\Clases\Clase 03\EJ18 - Correccion\build"

# Include any dependencies generated for this target.
include CMakeFiles/distanciaLetras.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/distanciaLetras.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/distanciaLetras.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/distanciaLetras.dir/flags.make

CMakeFiles/distanciaLetras.dir/main.c.obj: CMakeFiles/distanciaLetras.dir/flags.make
CMakeFiles/distanciaLetras.dir/main.c.obj: ../main.c
CMakeFiles/distanciaLetras.dir/main.c.obj: CMakeFiles/distanciaLetras.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\zerox\Documents\CEssentials\Clases\Clase 03\EJ18 - Correccion\build\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/distanciaLetras.dir/main.c.obj"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/distanciaLetras.dir/main.c.obj -MF CMakeFiles\distanciaLetras.dir\main.c.obj.d -o CMakeFiles\distanciaLetras.dir\main.c.obj -c "C:\Users\zerox\Documents\CEssentials\Clases\Clase 03\EJ18 - Correccion\main.c"

CMakeFiles/distanciaLetras.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/distanciaLetras.dir/main.c.i"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "C:\Users\zerox\Documents\CEssentials\Clases\Clase 03\EJ18 - Correccion\main.c" > CMakeFiles\distanciaLetras.dir\main.c.i

CMakeFiles/distanciaLetras.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/distanciaLetras.dir/main.c.s"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "C:\Users\zerox\Documents\CEssentials\Clases\Clase 03\EJ18 - Correccion\main.c" -o CMakeFiles\distanciaLetras.dir\main.c.s

# Object files for target distanciaLetras
distanciaLetras_OBJECTS = \
"CMakeFiles/distanciaLetras.dir/main.c.obj"

# External object files for target distanciaLetras
distanciaLetras_EXTERNAL_OBJECTS =

distanciaLetras.exe: CMakeFiles/distanciaLetras.dir/main.c.obj
distanciaLetras.exe: CMakeFiles/distanciaLetras.dir/build.make
distanciaLetras.exe: CMakeFiles/distanciaLetras.dir/linklibs.rsp
distanciaLetras.exe: CMakeFiles/distanciaLetras.dir/objects1.rsp
distanciaLetras.exe: CMakeFiles/distanciaLetras.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\zerox\Documents\CEssentials\Clases\Clase 03\EJ18 - Correccion\build\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable distanciaLetras.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\distanciaLetras.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/distanciaLetras.dir/build: distanciaLetras.exe
.PHONY : CMakeFiles/distanciaLetras.dir/build

CMakeFiles/distanciaLetras.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\distanciaLetras.dir\cmake_clean.cmake
.PHONY : CMakeFiles/distanciaLetras.dir/clean

CMakeFiles/distanciaLetras.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\zerox\Documents\CEssentials\Clases\Clase 03\EJ18 - Correccion" "C:\Users\zerox\Documents\CEssentials\Clases\Clase 03\EJ18 - Correccion" "C:\Users\zerox\Documents\CEssentials\Clases\Clase 03\EJ18 - Correccion\build" "C:\Users\zerox\Documents\CEssentials\Clases\Clase 03\EJ18 - Correccion\build" "C:\Users\zerox\Documents\CEssentials\Clases\Clase 03\EJ18 - Correccion\build\CMakeFiles\distanciaLetras.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/distanciaLetras.dir/depend
