# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.26

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
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2023.2.1\bin\cmake\win\x64\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2023.2.1\bin\cmake\win\x64\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\jackf\OneDrive\Documents\GitHub\SpaceGameHostedOnGitHub

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\jackf\OneDrive\Documents\GitHub\SpaceGameHostedOnGitHub\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/SpaceGameHostedOnGitHub.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/SpaceGameHostedOnGitHub.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/SpaceGameHostedOnGitHub.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/SpaceGameHostedOnGitHub.dir/flags.make

CMakeFiles/SpaceGameHostedOnGitHub.dir/main.cpp.obj: CMakeFiles/SpaceGameHostedOnGitHub.dir/flags.make
CMakeFiles/SpaceGameHostedOnGitHub.dir/main.cpp.obj: C:/Users/jackf/OneDrive/Documents/GitHub/SpaceGameHostedOnGitHub/main.cpp
CMakeFiles/SpaceGameHostedOnGitHub.dir/main.cpp.obj: CMakeFiles/SpaceGameHostedOnGitHub.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\jackf\OneDrive\Documents\GitHub\SpaceGameHostedOnGitHub\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/SpaceGameHostedOnGitHub.dir/main.cpp.obj"
	C:\PROGRA~1\JETBRA~1\CLION2~1.1\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/SpaceGameHostedOnGitHub.dir/main.cpp.obj -MF CMakeFiles\SpaceGameHostedOnGitHub.dir\main.cpp.obj.d -o CMakeFiles\SpaceGameHostedOnGitHub.dir\main.cpp.obj -c C:\Users\jackf\OneDrive\Documents\GitHub\SpaceGameHostedOnGitHub\main.cpp

CMakeFiles/SpaceGameHostedOnGitHub.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SpaceGameHostedOnGitHub.dir/main.cpp.i"
	C:\PROGRA~1\JETBRA~1\CLION2~1.1\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\jackf\OneDrive\Documents\GitHub\SpaceGameHostedOnGitHub\main.cpp > CMakeFiles\SpaceGameHostedOnGitHub.dir\main.cpp.i

CMakeFiles/SpaceGameHostedOnGitHub.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SpaceGameHostedOnGitHub.dir/main.cpp.s"
	C:\PROGRA~1\JETBRA~1\CLION2~1.1\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\jackf\OneDrive\Documents\GitHub\SpaceGameHostedOnGitHub\main.cpp -o CMakeFiles\SpaceGameHostedOnGitHub.dir\main.cpp.s

# Object files for target SpaceGameHostedOnGitHub
SpaceGameHostedOnGitHub_OBJECTS = \
"CMakeFiles/SpaceGameHostedOnGitHub.dir/main.cpp.obj"

# External object files for target SpaceGameHostedOnGitHub
SpaceGameHostedOnGitHub_EXTERNAL_OBJECTS =

SpaceGameHostedOnGitHub.exe: CMakeFiles/SpaceGameHostedOnGitHub.dir/main.cpp.obj
SpaceGameHostedOnGitHub.exe: CMakeFiles/SpaceGameHostedOnGitHub.dir/build.make
SpaceGameHostedOnGitHub.exe: CMakeFiles/SpaceGameHostedOnGitHub.dir/linkLibs.rsp
SpaceGameHostedOnGitHub.exe: CMakeFiles/SpaceGameHostedOnGitHub.dir/objects1.rsp
SpaceGameHostedOnGitHub.exe: CMakeFiles/SpaceGameHostedOnGitHub.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\jackf\OneDrive\Documents\GitHub\SpaceGameHostedOnGitHub\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable SpaceGameHostedOnGitHub.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\SpaceGameHostedOnGitHub.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/SpaceGameHostedOnGitHub.dir/build: SpaceGameHostedOnGitHub.exe
.PHONY : CMakeFiles/SpaceGameHostedOnGitHub.dir/build

CMakeFiles/SpaceGameHostedOnGitHub.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\SpaceGameHostedOnGitHub.dir\cmake_clean.cmake
.PHONY : CMakeFiles/SpaceGameHostedOnGitHub.dir/clean

CMakeFiles/SpaceGameHostedOnGitHub.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\jackf\OneDrive\Documents\GitHub\SpaceGameHostedOnGitHub C:\Users\jackf\OneDrive\Documents\GitHub\SpaceGameHostedOnGitHub C:\Users\jackf\OneDrive\Documents\GitHub\SpaceGameHostedOnGitHub\cmake-build-debug C:\Users\jackf\OneDrive\Documents\GitHub\SpaceGameHostedOnGitHub\cmake-build-debug C:\Users\jackf\OneDrive\Documents\GitHub\SpaceGameHostedOnGitHub\cmake-build-debug\CMakeFiles\SpaceGameHostedOnGitHub.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/SpaceGameHostedOnGitHub.dir/depend

