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
CMAKE_SOURCE_DIR = /cygdrive/c/Users/HP/CLionProjects/PetrolStation

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /cygdrive/c/Users/HP/CLionProjects/PetrolStation/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/PetrolStation.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/PetrolStation.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/PetrolStation.dir/flags.make

CMakeFiles/PetrolStation.dir/main.cpp.o: CMakeFiles/PetrolStation.dir/flags.make
CMakeFiles/PetrolStation.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/c/Users/HP/CLionProjects/PetrolStation/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/PetrolStation.dir/main.cpp.o"
	/usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/PetrolStation.dir/main.cpp.o -c /cygdrive/c/Users/HP/CLionProjects/PetrolStation/main.cpp

CMakeFiles/PetrolStation.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/PetrolStation.dir/main.cpp.i"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /cygdrive/c/Users/HP/CLionProjects/PetrolStation/main.cpp > CMakeFiles/PetrolStation.dir/main.cpp.i

CMakeFiles/PetrolStation.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/PetrolStation.dir/main.cpp.s"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /cygdrive/c/Users/HP/CLionProjects/PetrolStation/main.cpp -o CMakeFiles/PetrolStation.dir/main.cpp.s

CMakeFiles/PetrolStation.dir/Station.cpp.o: CMakeFiles/PetrolStation.dir/flags.make
CMakeFiles/PetrolStation.dir/Station.cpp.o: ../Station.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/c/Users/HP/CLionProjects/PetrolStation/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/PetrolStation.dir/Station.cpp.o"
	/usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/PetrolStation.dir/Station.cpp.o -c /cygdrive/c/Users/HP/CLionProjects/PetrolStation/Station.cpp

CMakeFiles/PetrolStation.dir/Station.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/PetrolStation.dir/Station.cpp.i"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /cygdrive/c/Users/HP/CLionProjects/PetrolStation/Station.cpp > CMakeFiles/PetrolStation.dir/Station.cpp.i

CMakeFiles/PetrolStation.dir/Station.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/PetrolStation.dir/Station.cpp.s"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /cygdrive/c/Users/HP/CLionProjects/PetrolStation/Station.cpp -o CMakeFiles/PetrolStation.dir/Station.cpp.s

CMakeFiles/PetrolStation.dir/Car.cpp.o: CMakeFiles/PetrolStation.dir/flags.make
CMakeFiles/PetrolStation.dir/Car.cpp.o: ../Car.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/c/Users/HP/CLionProjects/PetrolStation/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/PetrolStation.dir/Car.cpp.o"
	/usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/PetrolStation.dir/Car.cpp.o -c /cygdrive/c/Users/HP/CLionProjects/PetrolStation/Car.cpp

CMakeFiles/PetrolStation.dir/Car.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/PetrolStation.dir/Car.cpp.i"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /cygdrive/c/Users/HP/CLionProjects/PetrolStation/Car.cpp > CMakeFiles/PetrolStation.dir/Car.cpp.i

CMakeFiles/PetrolStation.dir/Car.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/PetrolStation.dir/Car.cpp.s"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /cygdrive/c/Users/HP/CLionProjects/PetrolStation/Car.cpp -o CMakeFiles/PetrolStation.dir/Car.cpp.s

# Object files for target PetrolStation
PetrolStation_OBJECTS = \
"CMakeFiles/PetrolStation.dir/main.cpp.o" \
"CMakeFiles/PetrolStation.dir/Station.cpp.o" \
"CMakeFiles/PetrolStation.dir/Car.cpp.o"

# External object files for target PetrolStation
PetrolStation_EXTERNAL_OBJECTS =

PetrolStation.exe: CMakeFiles/PetrolStation.dir/main.cpp.o
PetrolStation.exe: CMakeFiles/PetrolStation.dir/Station.cpp.o
PetrolStation.exe: CMakeFiles/PetrolStation.dir/Car.cpp.o
PetrolStation.exe: CMakeFiles/PetrolStation.dir/build.make
PetrolStation.exe: CMakeFiles/PetrolStation.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/cygdrive/c/Users/HP/CLionProjects/PetrolStation/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable PetrolStation.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/PetrolStation.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/PetrolStation.dir/build: PetrolStation.exe

.PHONY : CMakeFiles/PetrolStation.dir/build

CMakeFiles/PetrolStation.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/PetrolStation.dir/cmake_clean.cmake
.PHONY : CMakeFiles/PetrolStation.dir/clean

CMakeFiles/PetrolStation.dir/depend:
	cd /cygdrive/c/Users/HP/CLionProjects/PetrolStation/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /cygdrive/c/Users/HP/CLionProjects/PetrolStation /cygdrive/c/Users/HP/CLionProjects/PetrolStation /cygdrive/c/Users/HP/CLionProjects/PetrolStation/cmake-build-debug /cygdrive/c/Users/HP/CLionProjects/PetrolStation/cmake-build-debug /cygdrive/c/Users/HP/CLionProjects/PetrolStation/cmake-build-debug/CMakeFiles/PetrolStation.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/PetrolStation.dir/depend

