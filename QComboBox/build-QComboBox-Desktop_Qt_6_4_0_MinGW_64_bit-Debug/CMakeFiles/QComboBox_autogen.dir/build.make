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
CMAKE_COMMAND = "C:\Program Files\CMake\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\CMake\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\QT_6\projects\QT\QComboBox\QComboBox

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\QT_6\projects\QT\QComboBox\build-QComboBox-Desktop_Qt_6_4_0_MinGW_64_bit-Debug

# Utility rule file for QComboBox_autogen.

# Include any custom commands dependencies for this target.
include CMakeFiles/QComboBox_autogen.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/QComboBox_autogen.dir/progress.make

CMakeFiles/QComboBox_autogen:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=C:\QT_6\projects\QT\QComboBox\build-QComboBox-Desktop_Qt_6_4_0_MinGW_64_bit-Debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Automatic MOC and UIC for target QComboBox"
	"C:\Program Files\CMake\bin\cmake.exe" -E cmake_autogen C:/QT_6/projects/QT/QComboBox/build-QComboBox-Desktop_Qt_6_4_0_MinGW_64_bit-Debug/CMakeFiles/QComboBox_autogen.dir/AutogenInfo.json Debug

QComboBox_autogen: CMakeFiles/QComboBox_autogen
QComboBox_autogen: CMakeFiles/QComboBox_autogen.dir/build.make
.PHONY : QComboBox_autogen

# Rule to build all files generated by this target.
CMakeFiles/QComboBox_autogen.dir/build: QComboBox_autogen
.PHONY : CMakeFiles/QComboBox_autogen.dir/build

CMakeFiles/QComboBox_autogen.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\QComboBox_autogen.dir\cmake_clean.cmake
.PHONY : CMakeFiles/QComboBox_autogen.dir/clean

CMakeFiles/QComboBox_autogen.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\QT_6\projects\QT\QComboBox\QComboBox C:\QT_6\projects\QT\QComboBox\QComboBox C:\QT_6\projects\QT\QComboBox\build-QComboBox-Desktop_Qt_6_4_0_MinGW_64_bit-Debug C:\QT_6\projects\QT\QComboBox\build-QComboBox-Desktop_Qt_6_4_0_MinGW_64_bit-Debug C:\QT_6\projects\QT\QComboBox\build-QComboBox-Desktop_Qt_6_4_0_MinGW_64_bit-Debug\CMakeFiles\QComboBox_autogen.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/QComboBox_autogen.dir/depend

