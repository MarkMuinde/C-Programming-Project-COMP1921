# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 2.8

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The program to use to edit the cache.
CMAKE_EDIT_COMMAND = /usr/bin/ccmake

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/cserv1_a/soc_msc/sc19msmm/Downloads/comp1921

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/cserv1_a/soc_msc/sc19msmm/Downloads/comp1921/build

# Include any dependencies generated for this target.
include CMakeFiles/unit_tests.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/unit_tests.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/unit_tests.dir/flags.make

CMakeFiles/unit_tests.dir/unit_tests.c.o: CMakeFiles/unit_tests.dir/flags.make
CMakeFiles/unit_tests.dir/unit_tests.c.o: ../unit_tests.c
	$(CMAKE_COMMAND) -E cmake_progress_report /home/cserv1_a/soc_msc/sc19msmm/Downloads/comp1921/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building C object CMakeFiles/unit_tests.dir/unit_tests.c.o"
	/usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -o CMakeFiles/unit_tests.dir/unit_tests.c.o   -c /home/cserv1_a/soc_msc/sc19msmm/Downloads/comp1921/unit_tests.c

CMakeFiles/unit_tests.dir/unit_tests.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/unit_tests.dir/unit_tests.c.i"
	/usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -E /home/cserv1_a/soc_msc/sc19msmm/Downloads/comp1921/unit_tests.c > CMakeFiles/unit_tests.dir/unit_tests.c.i

CMakeFiles/unit_tests.dir/unit_tests.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/unit_tests.dir/unit_tests.c.s"
	/usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -S /home/cserv1_a/soc_msc/sc19msmm/Downloads/comp1921/unit_tests.c -o CMakeFiles/unit_tests.dir/unit_tests.c.s

CMakeFiles/unit_tests.dir/unit_tests.c.o.requires:
.PHONY : CMakeFiles/unit_tests.dir/unit_tests.c.o.requires

CMakeFiles/unit_tests.dir/unit_tests.c.o.provides: CMakeFiles/unit_tests.dir/unit_tests.c.o.requires
	$(MAKE) -f CMakeFiles/unit_tests.dir/build.make CMakeFiles/unit_tests.dir/unit_tests.c.o.provides.build
.PHONY : CMakeFiles/unit_tests.dir/unit_tests.c.o.provides

CMakeFiles/unit_tests.dir/unit_tests.c.o.provides.build: CMakeFiles/unit_tests.dir/unit_tests.c.o

CMakeFiles/unit_tests.dir/user.c.o: CMakeFiles/unit_tests.dir/flags.make
CMakeFiles/unit_tests.dir/user.c.o: ../user.c
	$(CMAKE_COMMAND) -E cmake_progress_report /home/cserv1_a/soc_msc/sc19msmm/Downloads/comp1921/build/CMakeFiles $(CMAKE_PROGRESS_2)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building C object CMakeFiles/unit_tests.dir/user.c.o"
	/usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -o CMakeFiles/unit_tests.dir/user.c.o   -c /home/cserv1_a/soc_msc/sc19msmm/Downloads/comp1921/user.c

CMakeFiles/unit_tests.dir/user.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/unit_tests.dir/user.c.i"
	/usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -E /home/cserv1_a/soc_msc/sc19msmm/Downloads/comp1921/user.c > CMakeFiles/unit_tests.dir/user.c.i

CMakeFiles/unit_tests.dir/user.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/unit_tests.dir/user.c.s"
	/usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -S /home/cserv1_a/soc_msc/sc19msmm/Downloads/comp1921/user.c -o CMakeFiles/unit_tests.dir/user.c.s

CMakeFiles/unit_tests.dir/user.c.o.requires:
.PHONY : CMakeFiles/unit_tests.dir/user.c.o.requires

CMakeFiles/unit_tests.dir/user.c.o.provides: CMakeFiles/unit_tests.dir/user.c.o.requires
	$(MAKE) -f CMakeFiles/unit_tests.dir/build.make CMakeFiles/unit_tests.dir/user.c.o.provides.build
.PHONY : CMakeFiles/unit_tests.dir/user.c.o.provides

CMakeFiles/unit_tests.dir/user.c.o.provides.build: CMakeFiles/unit_tests.dir/user.c.o

CMakeFiles/unit_tests.dir/admin.c.o: CMakeFiles/unit_tests.dir/flags.make
CMakeFiles/unit_tests.dir/admin.c.o: ../admin.c
	$(CMAKE_COMMAND) -E cmake_progress_report /home/cserv1_a/soc_msc/sc19msmm/Downloads/comp1921/build/CMakeFiles $(CMAKE_PROGRESS_3)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building C object CMakeFiles/unit_tests.dir/admin.c.o"
	/usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -o CMakeFiles/unit_tests.dir/admin.c.o   -c /home/cserv1_a/soc_msc/sc19msmm/Downloads/comp1921/admin.c

CMakeFiles/unit_tests.dir/admin.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/unit_tests.dir/admin.c.i"
	/usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -E /home/cserv1_a/soc_msc/sc19msmm/Downloads/comp1921/admin.c > CMakeFiles/unit_tests.dir/admin.c.i

CMakeFiles/unit_tests.dir/admin.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/unit_tests.dir/admin.c.s"
	/usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -S /home/cserv1_a/soc_msc/sc19msmm/Downloads/comp1921/admin.c -o CMakeFiles/unit_tests.dir/admin.c.s

CMakeFiles/unit_tests.dir/admin.c.o.requires:
.PHONY : CMakeFiles/unit_tests.dir/admin.c.o.requires

CMakeFiles/unit_tests.dir/admin.c.o.provides: CMakeFiles/unit_tests.dir/admin.c.o.requires
	$(MAKE) -f CMakeFiles/unit_tests.dir/build.make CMakeFiles/unit_tests.dir/admin.c.o.provides.build
.PHONY : CMakeFiles/unit_tests.dir/admin.c.o.provides

CMakeFiles/unit_tests.dir/admin.c.o.provides.build: CMakeFiles/unit_tests.dir/admin.c.o

CMakeFiles/unit_tests.dir/book_management.c.o: CMakeFiles/unit_tests.dir/flags.make
CMakeFiles/unit_tests.dir/book_management.c.o: ../book_management.c
	$(CMAKE_COMMAND) -E cmake_progress_report /home/cserv1_a/soc_msc/sc19msmm/Downloads/comp1921/build/CMakeFiles $(CMAKE_PROGRESS_4)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building C object CMakeFiles/unit_tests.dir/book_management.c.o"
	/usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -o CMakeFiles/unit_tests.dir/book_management.c.o   -c /home/cserv1_a/soc_msc/sc19msmm/Downloads/comp1921/book_management.c

CMakeFiles/unit_tests.dir/book_management.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/unit_tests.dir/book_management.c.i"
	/usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -E /home/cserv1_a/soc_msc/sc19msmm/Downloads/comp1921/book_management.c > CMakeFiles/unit_tests.dir/book_management.c.i

CMakeFiles/unit_tests.dir/book_management.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/unit_tests.dir/book_management.c.s"
	/usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -S /home/cserv1_a/soc_msc/sc19msmm/Downloads/comp1921/book_management.c -o CMakeFiles/unit_tests.dir/book_management.c.s

CMakeFiles/unit_tests.dir/book_management.c.o.requires:
.PHONY : CMakeFiles/unit_tests.dir/book_management.c.o.requires

CMakeFiles/unit_tests.dir/book_management.c.o.provides: CMakeFiles/unit_tests.dir/book_management.c.o.requires
	$(MAKE) -f CMakeFiles/unit_tests.dir/build.make CMakeFiles/unit_tests.dir/book_management.c.o.provides.build
.PHONY : CMakeFiles/unit_tests.dir/book_management.c.o.provides

CMakeFiles/unit_tests.dir/book_management.c.o.provides.build: CMakeFiles/unit_tests.dir/book_management.c.o

CMakeFiles/unit_tests.dir/interface.c.o: CMakeFiles/unit_tests.dir/flags.make
CMakeFiles/unit_tests.dir/interface.c.o: ../interface.c
	$(CMAKE_COMMAND) -E cmake_progress_report /home/cserv1_a/soc_msc/sc19msmm/Downloads/comp1921/build/CMakeFiles $(CMAKE_PROGRESS_5)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building C object CMakeFiles/unit_tests.dir/interface.c.o"
	/usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -o CMakeFiles/unit_tests.dir/interface.c.o   -c /home/cserv1_a/soc_msc/sc19msmm/Downloads/comp1921/interface.c

CMakeFiles/unit_tests.dir/interface.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/unit_tests.dir/interface.c.i"
	/usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -E /home/cserv1_a/soc_msc/sc19msmm/Downloads/comp1921/interface.c > CMakeFiles/unit_tests.dir/interface.c.i

CMakeFiles/unit_tests.dir/interface.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/unit_tests.dir/interface.c.s"
	/usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -S /home/cserv1_a/soc_msc/sc19msmm/Downloads/comp1921/interface.c -o CMakeFiles/unit_tests.dir/interface.c.s

CMakeFiles/unit_tests.dir/interface.c.o.requires:
.PHONY : CMakeFiles/unit_tests.dir/interface.c.o.requires

CMakeFiles/unit_tests.dir/interface.c.o.provides: CMakeFiles/unit_tests.dir/interface.c.o.requires
	$(MAKE) -f CMakeFiles/unit_tests.dir/build.make CMakeFiles/unit_tests.dir/interface.c.o.provides.build
.PHONY : CMakeFiles/unit_tests.dir/interface.c.o.provides

CMakeFiles/unit_tests.dir/interface.c.o.provides.build: CMakeFiles/unit_tests.dir/interface.c.o

CMakeFiles/unit_tests.dir/unity.c.o: CMakeFiles/unit_tests.dir/flags.make
CMakeFiles/unit_tests.dir/unity.c.o: ../unity.c
	$(CMAKE_COMMAND) -E cmake_progress_report /home/cserv1_a/soc_msc/sc19msmm/Downloads/comp1921/build/CMakeFiles $(CMAKE_PROGRESS_6)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building C object CMakeFiles/unit_tests.dir/unity.c.o"
	/usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -o CMakeFiles/unit_tests.dir/unity.c.o   -c /home/cserv1_a/soc_msc/sc19msmm/Downloads/comp1921/unity.c

CMakeFiles/unit_tests.dir/unity.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/unit_tests.dir/unity.c.i"
	/usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -E /home/cserv1_a/soc_msc/sc19msmm/Downloads/comp1921/unity.c > CMakeFiles/unit_tests.dir/unity.c.i

CMakeFiles/unit_tests.dir/unity.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/unit_tests.dir/unity.c.s"
	/usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -S /home/cserv1_a/soc_msc/sc19msmm/Downloads/comp1921/unity.c -o CMakeFiles/unit_tests.dir/unity.c.s

CMakeFiles/unit_tests.dir/unity.c.o.requires:
.PHONY : CMakeFiles/unit_tests.dir/unity.c.o.requires

CMakeFiles/unit_tests.dir/unity.c.o.provides: CMakeFiles/unit_tests.dir/unity.c.o.requires
	$(MAKE) -f CMakeFiles/unit_tests.dir/build.make CMakeFiles/unit_tests.dir/unity.c.o.provides.build
.PHONY : CMakeFiles/unit_tests.dir/unity.c.o.provides

CMakeFiles/unit_tests.dir/unity.c.o.provides.build: CMakeFiles/unit_tests.dir/unity.c.o

# Object files for target unit_tests
unit_tests_OBJECTS = \
"CMakeFiles/unit_tests.dir/unit_tests.c.o" \
"CMakeFiles/unit_tests.dir/user.c.o" \
"CMakeFiles/unit_tests.dir/admin.c.o" \
"CMakeFiles/unit_tests.dir/book_management.c.o" \
"CMakeFiles/unit_tests.dir/interface.c.o" \
"CMakeFiles/unit_tests.dir/unity.c.o"

# External object files for target unit_tests
unit_tests_EXTERNAL_OBJECTS =

unit_tests: CMakeFiles/unit_tests.dir/unit_tests.c.o
unit_tests: CMakeFiles/unit_tests.dir/user.c.o
unit_tests: CMakeFiles/unit_tests.dir/admin.c.o
unit_tests: CMakeFiles/unit_tests.dir/book_management.c.o
unit_tests: CMakeFiles/unit_tests.dir/interface.c.o
unit_tests: CMakeFiles/unit_tests.dir/unity.c.o
unit_tests: CMakeFiles/unit_tests.dir/build.make
unit_tests: CMakeFiles/unit_tests.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking C executable unit_tests"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/unit_tests.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/unit_tests.dir/build: unit_tests
.PHONY : CMakeFiles/unit_tests.dir/build

CMakeFiles/unit_tests.dir/requires: CMakeFiles/unit_tests.dir/unit_tests.c.o.requires
CMakeFiles/unit_tests.dir/requires: CMakeFiles/unit_tests.dir/user.c.o.requires
CMakeFiles/unit_tests.dir/requires: CMakeFiles/unit_tests.dir/admin.c.o.requires
CMakeFiles/unit_tests.dir/requires: CMakeFiles/unit_tests.dir/book_management.c.o.requires
CMakeFiles/unit_tests.dir/requires: CMakeFiles/unit_tests.dir/interface.c.o.requires
CMakeFiles/unit_tests.dir/requires: CMakeFiles/unit_tests.dir/unity.c.o.requires
.PHONY : CMakeFiles/unit_tests.dir/requires

CMakeFiles/unit_tests.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/unit_tests.dir/cmake_clean.cmake
.PHONY : CMakeFiles/unit_tests.dir/clean

CMakeFiles/unit_tests.dir/depend:
	cd /home/cserv1_a/soc_msc/sc19msmm/Downloads/comp1921/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/cserv1_a/soc_msc/sc19msmm/Downloads/comp1921 /home/cserv1_a/soc_msc/sc19msmm/Downloads/comp1921 /home/cserv1_a/soc_msc/sc19msmm/Downloads/comp1921/build /home/cserv1_a/soc_msc/sc19msmm/Downloads/comp1921/build /home/cserv1_a/soc_msc/sc19msmm/Downloads/comp1921/build/CMakeFiles/unit_tests.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/unit_tests.dir/depend

