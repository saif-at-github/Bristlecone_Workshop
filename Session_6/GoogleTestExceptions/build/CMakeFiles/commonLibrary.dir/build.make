# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.25

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

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /home/saifulla/Downloads/cmake-3.25.1-linux-x86_64/bin/cmake

# The command to remove a file.
RM = /home/saifulla/Downloads/cmake-3.25.1-linux-x86_64/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/saifulla/Git/Bristlecone_Workshop/Session_6/GoogleTestExceptions

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/saifulla/Git/Bristlecone_Workshop/Session_6/GoogleTestExceptions/build

# Include any dependencies generated for this target.
include CMakeFiles/commonLibrary.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/commonLibrary.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/commonLibrary.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/commonLibrary.dir/flags.make

CMakeFiles/commonLibrary.dir/LibraryCode.cpp.o: CMakeFiles/commonLibrary.dir/flags.make
CMakeFiles/commonLibrary.dir/LibraryCode.cpp.o: /home/saifulla/Git/Bristlecone_Workshop/Session_6/GoogleTestExceptions/LibraryCode.cpp
CMakeFiles/commonLibrary.dir/LibraryCode.cpp.o: CMakeFiles/commonLibrary.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/saifulla/Git/Bristlecone_Workshop/Session_6/GoogleTestExceptions/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/commonLibrary.dir/LibraryCode.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/commonLibrary.dir/LibraryCode.cpp.o -MF CMakeFiles/commonLibrary.dir/LibraryCode.cpp.o.d -o CMakeFiles/commonLibrary.dir/LibraryCode.cpp.o -c /home/saifulla/Git/Bristlecone_Workshop/Session_6/GoogleTestExceptions/LibraryCode.cpp

CMakeFiles/commonLibrary.dir/LibraryCode.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/commonLibrary.dir/LibraryCode.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/saifulla/Git/Bristlecone_Workshop/Session_6/GoogleTestExceptions/LibraryCode.cpp > CMakeFiles/commonLibrary.dir/LibraryCode.cpp.i

CMakeFiles/commonLibrary.dir/LibraryCode.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/commonLibrary.dir/LibraryCode.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/saifulla/Git/Bristlecone_Workshop/Session_6/GoogleTestExceptions/LibraryCode.cpp -o CMakeFiles/commonLibrary.dir/LibraryCode.cpp.s

# Object files for target commonLibrary
commonLibrary_OBJECTS = \
"CMakeFiles/commonLibrary.dir/LibraryCode.cpp.o"

# External object files for target commonLibrary
commonLibrary_EXTERNAL_OBJECTS =

libcommonLibrary.a: CMakeFiles/commonLibrary.dir/LibraryCode.cpp.o
libcommonLibrary.a: CMakeFiles/commonLibrary.dir/build.make
libcommonLibrary.a: CMakeFiles/commonLibrary.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/saifulla/Git/Bristlecone_Workshop/Session_6/GoogleTestExceptions/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libcommonLibrary.a"
	$(CMAKE_COMMAND) -P CMakeFiles/commonLibrary.dir/cmake_clean_target.cmake
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/commonLibrary.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/commonLibrary.dir/build: libcommonLibrary.a
.PHONY : CMakeFiles/commonLibrary.dir/build

CMakeFiles/commonLibrary.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/commonLibrary.dir/cmake_clean.cmake
.PHONY : CMakeFiles/commonLibrary.dir/clean

CMakeFiles/commonLibrary.dir/depend:
	cd /home/saifulla/Git/Bristlecone_Workshop/Session_6/GoogleTestExceptions/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/saifulla/Git/Bristlecone_Workshop/Session_6/GoogleTestExceptions /home/saifulla/Git/Bristlecone_Workshop/Session_6/GoogleTestExceptions /home/saifulla/Git/Bristlecone_Workshop/Session_6/GoogleTestExceptions/build /home/saifulla/Git/Bristlecone_Workshop/Session_6/GoogleTestExceptions/build /home/saifulla/Git/Bristlecone_Workshop/Session_6/GoogleTestExceptions/build/CMakeFiles/commonLibrary.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/commonLibrary.dir/depend

