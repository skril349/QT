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
CMAKE_SOURCE_DIR = C:\QT_6\projects\QT\QWidgetApp\QWidgetApp

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\QT_6\projects\QT\QWidgetApp\build-QWidgetApp-Desktop_Qt_6_4_0_MinGW_64_bit-Debug

# Utility rule file for QWidgetApp_autogen.

# Include any custom commands dependencies for this target.
include CMakeFiles/QWidgetApp_autogen.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/QWidgetApp_autogen.dir/progress.make

CMakeFiles/QWidgetApp_autogen:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=C:\QT_6\projects\QT\QWidgetApp\build-QWidgetApp-Desktop_Qt_6_4_0_MinGW_64_bit-Debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Automatic MOC and UIC for target QWidgetApp"
	"C:\Program Files\CMake\bin\cmake.exe" -E cmake_autogen C:/QT_6/projects/QT/QWidgetApp/build-QWidgetApp-Desktop_Qt_6_4_0_MinGW_64_bit-Debug/CMakeFiles/QWidgetApp_autogen.dir/AutogenInfo.json Debug

QWidgetApp_autogen: CMakeFiles/QWidgetApp_autogen
QWidgetApp_autogen: CMakeFiles/QWidgetApp_autogen.dir/build.make
.PHONY : QWidgetApp_autogen

# Rule to build all files generated by this target.
CMakeFiles/QWidgetApp_autogen.dir/build: QWidgetApp_autogen
.PHONY : CMakeFiles/QWidgetApp_autogen.dir/build

CMakeFiles/QWidgetApp_autogen.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\QWidgetApp_autogen.dir\cmake_clean.cmake
.PHONY : CMakeFiles/QWidgetApp_autogen.dir/clean

CMakeFiles/QWidgetApp_autogen.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\QT_6\projects\QT\QWidgetApp\QWidgetApp C:\QT_6\projects\QT\QWidgetApp\QWidgetApp C:\QT_6\projects\QT\QWidgetApp\build-QWidgetApp-Desktop_Qt_6_4_0_MinGW_64_bit-Debug C:\QT_6\projects\QT\QWidgetApp\build-QWidgetApp-Desktop_Qt_6_4_0_MinGW_64_bit-Debug C:\QT_6\projects\QT\QWidgetApp\build-QWidgetApp-Desktop_Qt_6_4_0_MinGW_64_bit-Debug\CMakeFiles\QWidgetApp_autogen.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/QWidgetApp_autogen.dir/depend

