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
CMAKE_SOURCE_DIR = C:\QT_6\projects\QT\QLabel\QLabel

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\QT_6\projects\QT\QLabel\build-QLabel-Desktop_Qt_6_4_0_MinGW_64_bit-Debug

# Include any dependencies generated for this target.
include CMakeFiles/QLabel.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/QLabel.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/QLabel.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/QLabel.dir/flags.make

QLabel_autogen/EWIEGA46WW/qrc_resource.cpp: C:/QT_6/projects/QT/QLabel/QLabel/resource.qrc
QLabel_autogen/EWIEGA46WW/qrc_resource.cpp: CMakeFiles/QLabel_autogen.dir/AutoRcc_resource_EWIEGA46WW_Info.json
QLabel_autogen/EWIEGA46WW/qrc_resource.cpp: C:/QT_6/projects/QT/QLabel/QLabel/images/minions.png
QLabel_autogen/EWIEGA46WW/qrc_resource.cpp: C:/QT_6/6.4.0/mingw_64/./bin/rcc.exe
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=C:\QT_6\projects\QT\QLabel\build-QLabel-Desktop_Qt_6_4_0_MinGW_64_bit-Debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Automatic RCC for resource.qrc"
	"C:\Program Files\CMake\bin\cmake.exe" -E cmake_autorcc C:/QT_6/projects/QT/QLabel/build-QLabel-Desktop_Qt_6_4_0_MinGW_64_bit-Debug/CMakeFiles/QLabel_autogen.dir/AutoRcc_resource_EWIEGA46WW_Info.json Debug

CMakeFiles/QLabel.dir/QLabel_autogen/mocs_compilation.cpp.obj: CMakeFiles/QLabel.dir/flags.make
CMakeFiles/QLabel.dir/QLabel_autogen/mocs_compilation.cpp.obj: CMakeFiles/QLabel.dir/includes_CXX.rsp
CMakeFiles/QLabel.dir/QLabel_autogen/mocs_compilation.cpp.obj: QLabel_autogen/mocs_compilation.cpp
CMakeFiles/QLabel.dir/QLabel_autogen/mocs_compilation.cpp.obj: CMakeFiles/QLabel.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\QT_6\projects\QT\QLabel\build-QLabel-Desktop_Qt_6_4_0_MinGW_64_bit-Debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/QLabel.dir/QLabel_autogen/mocs_compilation.cpp.obj"
	C:\QT_6\Tools\mingw1120_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/QLabel.dir/QLabel_autogen/mocs_compilation.cpp.obj -MF CMakeFiles\QLabel.dir\QLabel_autogen\mocs_compilation.cpp.obj.d -o CMakeFiles\QLabel.dir\QLabel_autogen\mocs_compilation.cpp.obj -c C:\QT_6\projects\QT\QLabel\build-QLabel-Desktop_Qt_6_4_0_MinGW_64_bit-Debug\QLabel_autogen\mocs_compilation.cpp

CMakeFiles/QLabel.dir/QLabel_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/QLabel.dir/QLabel_autogen/mocs_compilation.cpp.i"
	C:\QT_6\Tools\mingw1120_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\QT_6\projects\QT\QLabel\build-QLabel-Desktop_Qt_6_4_0_MinGW_64_bit-Debug\QLabel_autogen\mocs_compilation.cpp > CMakeFiles\QLabel.dir\QLabel_autogen\mocs_compilation.cpp.i

CMakeFiles/QLabel.dir/QLabel_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/QLabel.dir/QLabel_autogen/mocs_compilation.cpp.s"
	C:\QT_6\Tools\mingw1120_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\QT_6\projects\QT\QLabel\build-QLabel-Desktop_Qt_6_4_0_MinGW_64_bit-Debug\QLabel_autogen\mocs_compilation.cpp -o CMakeFiles\QLabel.dir\QLabel_autogen\mocs_compilation.cpp.s

CMakeFiles/QLabel.dir/main.cpp.obj: CMakeFiles/QLabel.dir/flags.make
CMakeFiles/QLabel.dir/main.cpp.obj: CMakeFiles/QLabel.dir/includes_CXX.rsp
CMakeFiles/QLabel.dir/main.cpp.obj: C:/QT_6/projects/QT/QLabel/QLabel/main.cpp
CMakeFiles/QLabel.dir/main.cpp.obj: CMakeFiles/QLabel.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\QT_6\projects\QT\QLabel\build-QLabel-Desktop_Qt_6_4_0_MinGW_64_bit-Debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/QLabel.dir/main.cpp.obj"
	C:\QT_6\Tools\mingw1120_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/QLabel.dir/main.cpp.obj -MF CMakeFiles\QLabel.dir\main.cpp.obj.d -o CMakeFiles\QLabel.dir\main.cpp.obj -c C:\QT_6\projects\QT\QLabel\QLabel\main.cpp

CMakeFiles/QLabel.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/QLabel.dir/main.cpp.i"
	C:\QT_6\Tools\mingw1120_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\QT_6\projects\QT\QLabel\QLabel\main.cpp > CMakeFiles\QLabel.dir\main.cpp.i

CMakeFiles/QLabel.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/QLabel.dir/main.cpp.s"
	C:\QT_6\Tools\mingw1120_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\QT_6\projects\QT\QLabel\QLabel\main.cpp -o CMakeFiles\QLabel.dir\main.cpp.s

CMakeFiles/QLabel.dir/widget.cpp.obj: CMakeFiles/QLabel.dir/flags.make
CMakeFiles/QLabel.dir/widget.cpp.obj: CMakeFiles/QLabel.dir/includes_CXX.rsp
CMakeFiles/QLabel.dir/widget.cpp.obj: C:/QT_6/projects/QT/QLabel/QLabel/widget.cpp
CMakeFiles/QLabel.dir/widget.cpp.obj: CMakeFiles/QLabel.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\QT_6\projects\QT\QLabel\build-QLabel-Desktop_Qt_6_4_0_MinGW_64_bit-Debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/QLabel.dir/widget.cpp.obj"
	C:\QT_6\Tools\mingw1120_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/QLabel.dir/widget.cpp.obj -MF CMakeFiles\QLabel.dir\widget.cpp.obj.d -o CMakeFiles\QLabel.dir\widget.cpp.obj -c C:\QT_6\projects\QT\QLabel\QLabel\widget.cpp

CMakeFiles/QLabel.dir/widget.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/QLabel.dir/widget.cpp.i"
	C:\QT_6\Tools\mingw1120_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\QT_6\projects\QT\QLabel\QLabel\widget.cpp > CMakeFiles\QLabel.dir\widget.cpp.i

CMakeFiles/QLabel.dir/widget.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/QLabel.dir/widget.cpp.s"
	C:\QT_6\Tools\mingw1120_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\QT_6\projects\QT\QLabel\QLabel\widget.cpp -o CMakeFiles\QLabel.dir\widget.cpp.s

CMakeFiles/QLabel.dir/QLabel_autogen/EWIEGA46WW/qrc_resource.cpp.obj: CMakeFiles/QLabel.dir/flags.make
CMakeFiles/QLabel.dir/QLabel_autogen/EWIEGA46WW/qrc_resource.cpp.obj: CMakeFiles/QLabel.dir/includes_CXX.rsp
CMakeFiles/QLabel.dir/QLabel_autogen/EWIEGA46WW/qrc_resource.cpp.obj: QLabel_autogen/EWIEGA46WW/qrc_resource.cpp
CMakeFiles/QLabel.dir/QLabel_autogen/EWIEGA46WW/qrc_resource.cpp.obj: CMakeFiles/QLabel.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\QT_6\projects\QT\QLabel\build-QLabel-Desktop_Qt_6_4_0_MinGW_64_bit-Debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/QLabel.dir/QLabel_autogen/EWIEGA46WW/qrc_resource.cpp.obj"
	C:\QT_6\Tools\mingw1120_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/QLabel.dir/QLabel_autogen/EWIEGA46WW/qrc_resource.cpp.obj -MF CMakeFiles\QLabel.dir\QLabel_autogen\EWIEGA46WW\qrc_resource.cpp.obj.d -o CMakeFiles\QLabel.dir\QLabel_autogen\EWIEGA46WW\qrc_resource.cpp.obj -c C:\QT_6\projects\QT\QLabel\build-QLabel-Desktop_Qt_6_4_0_MinGW_64_bit-Debug\QLabel_autogen\EWIEGA46WW\qrc_resource.cpp

CMakeFiles/QLabel.dir/QLabel_autogen/EWIEGA46WW/qrc_resource.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/QLabel.dir/QLabel_autogen/EWIEGA46WW/qrc_resource.cpp.i"
	C:\QT_6\Tools\mingw1120_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\QT_6\projects\QT\QLabel\build-QLabel-Desktop_Qt_6_4_0_MinGW_64_bit-Debug\QLabel_autogen\EWIEGA46WW\qrc_resource.cpp > CMakeFiles\QLabel.dir\QLabel_autogen\EWIEGA46WW\qrc_resource.cpp.i

CMakeFiles/QLabel.dir/QLabel_autogen/EWIEGA46WW/qrc_resource.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/QLabel.dir/QLabel_autogen/EWIEGA46WW/qrc_resource.cpp.s"
	C:\QT_6\Tools\mingw1120_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\QT_6\projects\QT\QLabel\build-QLabel-Desktop_Qt_6_4_0_MinGW_64_bit-Debug\QLabel_autogen\EWIEGA46WW\qrc_resource.cpp -o CMakeFiles\QLabel.dir\QLabel_autogen\EWIEGA46WW\qrc_resource.cpp.s

# Object files for target QLabel
QLabel_OBJECTS = \
"CMakeFiles/QLabel.dir/QLabel_autogen/mocs_compilation.cpp.obj" \
"CMakeFiles/QLabel.dir/main.cpp.obj" \
"CMakeFiles/QLabel.dir/widget.cpp.obj" \
"CMakeFiles/QLabel.dir/QLabel_autogen/EWIEGA46WW/qrc_resource.cpp.obj"

# External object files for target QLabel
QLabel_EXTERNAL_OBJECTS =

QLabel.exe: CMakeFiles/QLabel.dir/QLabel_autogen/mocs_compilation.cpp.obj
QLabel.exe: CMakeFiles/QLabel.dir/main.cpp.obj
QLabel.exe: CMakeFiles/QLabel.dir/widget.cpp.obj
QLabel.exe: CMakeFiles/QLabel.dir/QLabel_autogen/EWIEGA46WW/qrc_resource.cpp.obj
QLabel.exe: CMakeFiles/QLabel.dir/build.make
QLabel.exe: C:/QT_6/6.4.0/mingw_64/lib/libQt6Widgets.a
QLabel.exe: C:/QT_6/6.4.0/mingw_64/lib/libQt6Gui.a
QLabel.exe: C:/QT_6/6.4.0/mingw_64/lib/libQt6Core.a
QLabel.exe: C:/QT_6/6.4.0/mingw_64/lib/libQt6EntryPoint.a
QLabel.exe: CMakeFiles/QLabel.dir/linklibs.rsp
QLabel.exe: CMakeFiles/QLabel.dir/objects1.rsp
QLabel.exe: CMakeFiles/QLabel.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\QT_6\projects\QT\QLabel\build-QLabel-Desktop_Qt_6_4_0_MinGW_64_bit-Debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Linking CXX executable QLabel.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\QLabel.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/QLabel.dir/build: QLabel.exe
.PHONY : CMakeFiles/QLabel.dir/build

CMakeFiles/QLabel.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\QLabel.dir\cmake_clean.cmake
.PHONY : CMakeFiles/QLabel.dir/clean

CMakeFiles/QLabel.dir/depend: QLabel_autogen/EWIEGA46WW/qrc_resource.cpp
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\QT_6\projects\QT\QLabel\QLabel C:\QT_6\projects\QT\QLabel\QLabel C:\QT_6\projects\QT\QLabel\build-QLabel-Desktop_Qt_6_4_0_MinGW_64_bit-Debug C:\QT_6\projects\QT\QLabel\build-QLabel-Desktop_Qt_6_4_0_MinGW_64_bit-Debug C:\QT_6\projects\QT\QLabel\build-QLabel-Desktop_Qt_6_4_0_MinGW_64_bit-Debug\CMakeFiles\QLabel.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/QLabel.dir/depend

