# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.14

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


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
CMAKE_COMMAND = /cygdrive/c/Users/HP/.CLion2019.2/system/cygwin_cmake/bin/cmake.exe

# The command to remove a file.
RM = /cygdrive/c/Users/HP/.CLion2019.2/system/cygwin_cmake/bin/cmake.exe -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /cygdrive/c/Users/HP/CLionProjects/Blogpost

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /cygdrive/c/Users/HP/CLionProjects/Blogpost/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Blogpost.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Blogpost.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Blogpost.dir/flags.make

CMakeFiles/Blogpost.dir/main.cpp.o: CMakeFiles/Blogpost.dir/flags.make
CMakeFiles/Blogpost.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/c/Users/HP/CLionProjects/Blogpost/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Blogpost.dir/main.cpp.o"
	/usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Blogpost.dir/main.cpp.o -c /cygdrive/c/Users/HP/CLionProjects/Blogpost/main.cpp

CMakeFiles/Blogpost.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Blogpost.dir/main.cpp.i"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /cygdrive/c/Users/HP/CLionProjects/Blogpost/main.cpp > CMakeFiles/Blogpost.dir/main.cpp.i

CMakeFiles/Blogpost.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Blogpost.dir/main.cpp.s"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /cygdrive/c/Users/HP/CLionProjects/Blogpost/main.cpp -o CMakeFiles/Blogpost.dir/main.cpp.s

CMakeFiles/Blogpost.dir/BlogPost.cpp.o: CMakeFiles/Blogpost.dir/flags.make
CMakeFiles/Blogpost.dir/BlogPost.cpp.o: ../BlogPost.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/c/Users/HP/CLionProjects/Blogpost/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Blogpost.dir/BlogPost.cpp.o"
	/usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Blogpost.dir/BlogPost.cpp.o -c /cygdrive/c/Users/HP/CLionProjects/Blogpost/BlogPost.cpp

CMakeFiles/Blogpost.dir/BlogPost.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Blogpost.dir/BlogPost.cpp.i"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /cygdrive/c/Users/HP/CLionProjects/Blogpost/BlogPost.cpp > CMakeFiles/Blogpost.dir/BlogPost.cpp.i

CMakeFiles/Blogpost.dir/BlogPost.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Blogpost.dir/BlogPost.cpp.s"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /cygdrive/c/Users/HP/CLionProjects/Blogpost/BlogPost.cpp -o CMakeFiles/Blogpost.dir/BlogPost.cpp.s

# Object files for target Blogpost
Blogpost_OBJECTS = \
"CMakeFiles/Blogpost.dir/main.cpp.o" \
"CMakeFiles/Blogpost.dir/BlogPost.cpp.o"

# External object files for target Blogpost
Blogpost_EXTERNAL_OBJECTS =

Blogpost.exe: CMakeFiles/Blogpost.dir/main.cpp.o
Blogpost.exe: CMakeFiles/Blogpost.dir/BlogPost.cpp.o
Blogpost.exe: CMakeFiles/Blogpost.dir/build.make
Blogpost.exe: CMakeFiles/Blogpost.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/cygdrive/c/Users/HP/CLionProjects/Blogpost/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable Blogpost.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Blogpost.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Blogpost.dir/build: Blogpost.exe

.PHONY : CMakeFiles/Blogpost.dir/build

CMakeFiles/Blogpost.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Blogpost.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Blogpost.dir/clean

CMakeFiles/Blogpost.dir/depend:
	cd /cygdrive/c/Users/HP/CLionProjects/Blogpost/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /cygdrive/c/Users/HP/CLionProjects/Blogpost /cygdrive/c/Users/HP/CLionProjects/Blogpost /cygdrive/c/Users/HP/CLionProjects/Blogpost/cmake-build-debug /cygdrive/c/Users/HP/CLionProjects/Blogpost/cmake-build-debug /cygdrive/c/Users/HP/CLionProjects/Blogpost/cmake-build-debug/CMakeFiles/Blogpost.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Blogpost.dir/depend
