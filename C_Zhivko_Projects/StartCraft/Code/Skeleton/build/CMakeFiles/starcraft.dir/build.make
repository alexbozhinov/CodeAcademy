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
CMAKE_COMMAND = D:\cmake-3.23.0-rc3-windows-x86_64\bin\cmake.exe

# The command to remove a file.
RM = D:\cmake-3.23.0-rc3-windows-x86_64\bin\cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\Lenovo\Desktop\ProjectsGit\StartCraft\Code\Skeleton

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\Lenovo\Desktop\ProjectsGit\StartCraft\Code\Skeleton\build

# Include any dependencies generated for this target.
include CMakeFiles/starcraft.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/starcraft.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/starcraft.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/starcraft.dir/flags.make

CMakeFiles/starcraft.dir/src/main.c.obj: CMakeFiles/starcraft.dir/flags.make
CMakeFiles/starcraft.dir/src/main.c.obj: CMakeFiles/starcraft.dir/includes_C.rsp
CMakeFiles/starcraft.dir/src/main.c.obj: ../src/main.c
CMakeFiles/starcraft.dir/src/main.c.obj: CMakeFiles/starcraft.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Lenovo\Desktop\ProjectsGit\StartCraft\Code\Skeleton\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/starcraft.dir/src/main.c.obj"
	C:\PROGRA~1\MINGW-~1\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/starcraft.dir/src/main.c.obj -MF CMakeFiles\starcraft.dir\src\main.c.obj.d -o CMakeFiles\starcraft.dir\src\main.c.obj -c C:\Users\Lenovo\Desktop\ProjectsGit\StartCraft\Code\Skeleton\src\main.c

CMakeFiles/starcraft.dir/src/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/starcraft.dir/src/main.c.i"
	C:\PROGRA~1\MINGW-~1\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\Lenovo\Desktop\ProjectsGit\StartCraft\Code\Skeleton\src\main.c > CMakeFiles\starcraft.dir\src\main.c.i

CMakeFiles/starcraft.dir/src/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/starcraft.dir/src/main.c.s"
	C:\PROGRA~1\MINGW-~1\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\Lenovo\Desktop\ProjectsGit\StartCraft\Code\Skeleton\src\main.c -o CMakeFiles\starcraft.dir\src\main.c.s

CMakeFiles/starcraft.dir/src/Vector.c.obj: CMakeFiles/starcraft.dir/flags.make
CMakeFiles/starcraft.dir/src/Vector.c.obj: CMakeFiles/starcraft.dir/includes_C.rsp
CMakeFiles/starcraft.dir/src/Vector.c.obj: ../src/Vector.c
CMakeFiles/starcraft.dir/src/Vector.c.obj: CMakeFiles/starcraft.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Lenovo\Desktop\ProjectsGit\StartCraft\Code\Skeleton\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/starcraft.dir/src/Vector.c.obj"
	C:\PROGRA~1\MINGW-~1\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/starcraft.dir/src/Vector.c.obj -MF CMakeFiles\starcraft.dir\src\Vector.c.obj.d -o CMakeFiles\starcraft.dir\src\Vector.c.obj -c C:\Users\Lenovo\Desktop\ProjectsGit\StartCraft\Code\Skeleton\src\Vector.c

CMakeFiles/starcraft.dir/src/Vector.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/starcraft.dir/src/Vector.c.i"
	C:\PROGRA~1\MINGW-~1\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\Lenovo\Desktop\ProjectsGit\StartCraft\Code\Skeleton\src\Vector.c > CMakeFiles\starcraft.dir\src\Vector.c.i

CMakeFiles/starcraft.dir/src/Vector.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/starcraft.dir/src/Vector.c.s"
	C:\PROGRA~1\MINGW-~1\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\Lenovo\Desktop\ProjectsGit\StartCraft\Code\Skeleton\src\Vector.c -o CMakeFiles\starcraft.dir\src\Vector.c.s

CMakeFiles/starcraft.dir/src/BattleField.c.obj: CMakeFiles/starcraft.dir/flags.make
CMakeFiles/starcraft.dir/src/BattleField.c.obj: CMakeFiles/starcraft.dir/includes_C.rsp
CMakeFiles/starcraft.dir/src/BattleField.c.obj: ../src/BattleField.c
CMakeFiles/starcraft.dir/src/BattleField.c.obj: CMakeFiles/starcraft.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Lenovo\Desktop\ProjectsGit\StartCraft\Code\Skeleton\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/starcraft.dir/src/BattleField.c.obj"
	C:\PROGRA~1\MINGW-~1\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/starcraft.dir/src/BattleField.c.obj -MF CMakeFiles\starcraft.dir\src\BattleField.c.obj.d -o CMakeFiles\starcraft.dir\src\BattleField.c.obj -c C:\Users\Lenovo\Desktop\ProjectsGit\StartCraft\Code\Skeleton\src\BattleField.c

CMakeFiles/starcraft.dir/src/BattleField.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/starcraft.dir/src/BattleField.c.i"
	C:\PROGRA~1\MINGW-~1\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\Lenovo\Desktop\ProjectsGit\StartCraft\Code\Skeleton\src\BattleField.c > CMakeFiles\starcraft.dir\src\BattleField.c.i

CMakeFiles/starcraft.dir/src/BattleField.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/starcraft.dir/src/BattleField.c.s"
	C:\PROGRA~1\MINGW-~1\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\Lenovo\Desktop\ProjectsGit\StartCraft\Code\Skeleton\src\BattleField.c -o CMakeFiles\starcraft.dir\src\BattleField.c.s

CMakeFiles/starcraft.dir/src/BattleCruser.c.obj: CMakeFiles/starcraft.dir/flags.make
CMakeFiles/starcraft.dir/src/BattleCruser.c.obj: CMakeFiles/starcraft.dir/includes_C.rsp
CMakeFiles/starcraft.dir/src/BattleCruser.c.obj: ../src/BattleCruser.c
CMakeFiles/starcraft.dir/src/BattleCruser.c.obj: CMakeFiles/starcraft.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Lenovo\Desktop\ProjectsGit\StartCraft\Code\Skeleton\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building C object CMakeFiles/starcraft.dir/src/BattleCruser.c.obj"
	C:\PROGRA~1\MINGW-~1\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/starcraft.dir/src/BattleCruser.c.obj -MF CMakeFiles\starcraft.dir\src\BattleCruser.c.obj.d -o CMakeFiles\starcraft.dir\src\BattleCruser.c.obj -c C:\Users\Lenovo\Desktop\ProjectsGit\StartCraft\Code\Skeleton\src\BattleCruser.c

CMakeFiles/starcraft.dir/src/BattleCruser.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/starcraft.dir/src/BattleCruser.c.i"
	C:\PROGRA~1\MINGW-~1\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\Lenovo\Desktop\ProjectsGit\StartCraft\Code\Skeleton\src\BattleCruser.c > CMakeFiles\starcraft.dir\src\BattleCruser.c.i

CMakeFiles/starcraft.dir/src/BattleCruser.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/starcraft.dir/src/BattleCruser.c.s"
	C:\PROGRA~1\MINGW-~1\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\Lenovo\Desktop\ProjectsGit\StartCraft\Code\Skeleton\src\BattleCruser.c -o CMakeFiles\starcraft.dir\src\BattleCruser.c.s

CMakeFiles/starcraft.dir/src/Carrier.c.obj: CMakeFiles/starcraft.dir/flags.make
CMakeFiles/starcraft.dir/src/Carrier.c.obj: CMakeFiles/starcraft.dir/includes_C.rsp
CMakeFiles/starcraft.dir/src/Carrier.c.obj: ../src/Carrier.c
CMakeFiles/starcraft.dir/src/Carrier.c.obj: CMakeFiles/starcraft.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Lenovo\Desktop\ProjectsGit\StartCraft\Code\Skeleton\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building C object CMakeFiles/starcraft.dir/src/Carrier.c.obj"
	C:\PROGRA~1\MINGW-~1\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/starcraft.dir/src/Carrier.c.obj -MF CMakeFiles\starcraft.dir\src\Carrier.c.obj.d -o CMakeFiles\starcraft.dir\src\Carrier.c.obj -c C:\Users\Lenovo\Desktop\ProjectsGit\StartCraft\Code\Skeleton\src\Carrier.c

CMakeFiles/starcraft.dir/src/Carrier.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/starcraft.dir/src/Carrier.c.i"
	C:\PROGRA~1\MINGW-~1\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\Lenovo\Desktop\ProjectsGit\StartCraft\Code\Skeleton\src\Carrier.c > CMakeFiles\starcraft.dir\src\Carrier.c.i

CMakeFiles/starcraft.dir/src/Carrier.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/starcraft.dir/src/Carrier.c.s"
	C:\PROGRA~1\MINGW-~1\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\Lenovo\Desktop\ProjectsGit\StartCraft\Code\Skeleton\src\Carrier.c -o CMakeFiles\starcraft.dir\src\Carrier.c.s

CMakeFiles/starcraft.dir/src/Phoenix.c.obj: CMakeFiles/starcraft.dir/flags.make
CMakeFiles/starcraft.dir/src/Phoenix.c.obj: CMakeFiles/starcraft.dir/includes_C.rsp
CMakeFiles/starcraft.dir/src/Phoenix.c.obj: ../src/Phoenix.c
CMakeFiles/starcraft.dir/src/Phoenix.c.obj: CMakeFiles/starcraft.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Lenovo\Desktop\ProjectsGit\StartCraft\Code\Skeleton\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building C object CMakeFiles/starcraft.dir/src/Phoenix.c.obj"
	C:\PROGRA~1\MINGW-~1\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/starcraft.dir/src/Phoenix.c.obj -MF CMakeFiles\starcraft.dir\src\Phoenix.c.obj.d -o CMakeFiles\starcraft.dir\src\Phoenix.c.obj -c C:\Users\Lenovo\Desktop\ProjectsGit\StartCraft\Code\Skeleton\src\Phoenix.c

CMakeFiles/starcraft.dir/src/Phoenix.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/starcraft.dir/src/Phoenix.c.i"
	C:\PROGRA~1\MINGW-~1\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\Lenovo\Desktop\ProjectsGit\StartCraft\Code\Skeleton\src\Phoenix.c > CMakeFiles\starcraft.dir\src\Phoenix.c.i

CMakeFiles/starcraft.dir/src/Phoenix.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/starcraft.dir/src/Phoenix.c.s"
	C:\PROGRA~1\MINGW-~1\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\Lenovo\Desktop\ProjectsGit\StartCraft\Code\Skeleton\src\Phoenix.c -o CMakeFiles\starcraft.dir\src\Phoenix.c.s

CMakeFiles/starcraft.dir/src/ProtossShip.c.obj: CMakeFiles/starcraft.dir/flags.make
CMakeFiles/starcraft.dir/src/ProtossShip.c.obj: CMakeFiles/starcraft.dir/includes_C.rsp
CMakeFiles/starcraft.dir/src/ProtossShip.c.obj: ../src/ProtossShip.c
CMakeFiles/starcraft.dir/src/ProtossShip.c.obj: CMakeFiles/starcraft.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Lenovo\Desktop\ProjectsGit\StartCraft\Code\Skeleton\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building C object CMakeFiles/starcraft.dir/src/ProtossShip.c.obj"
	C:\PROGRA~1\MINGW-~1\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/starcraft.dir/src/ProtossShip.c.obj -MF CMakeFiles\starcraft.dir\src\ProtossShip.c.obj.d -o CMakeFiles\starcraft.dir\src\ProtossShip.c.obj -c C:\Users\Lenovo\Desktop\ProjectsGit\StartCraft\Code\Skeleton\src\ProtossShip.c

CMakeFiles/starcraft.dir/src/ProtossShip.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/starcraft.dir/src/ProtossShip.c.i"
	C:\PROGRA~1\MINGW-~1\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\Lenovo\Desktop\ProjectsGit\StartCraft\Code\Skeleton\src\ProtossShip.c > CMakeFiles\starcraft.dir\src\ProtossShip.c.i

CMakeFiles/starcraft.dir/src/ProtossShip.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/starcraft.dir/src/ProtossShip.c.s"
	C:\PROGRA~1\MINGW-~1\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\Lenovo\Desktop\ProjectsGit\StartCraft\Code\Skeleton\src\ProtossShip.c -o CMakeFiles\starcraft.dir\src\ProtossShip.c.s

CMakeFiles/starcraft.dir/src/ShipBase.c.obj: CMakeFiles/starcraft.dir/flags.make
CMakeFiles/starcraft.dir/src/ShipBase.c.obj: CMakeFiles/starcraft.dir/includes_C.rsp
CMakeFiles/starcraft.dir/src/ShipBase.c.obj: ../src/ShipBase.c
CMakeFiles/starcraft.dir/src/ShipBase.c.obj: CMakeFiles/starcraft.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Lenovo\Desktop\ProjectsGit\StartCraft\Code\Skeleton\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building C object CMakeFiles/starcraft.dir/src/ShipBase.c.obj"
	C:\PROGRA~1\MINGW-~1\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/starcraft.dir/src/ShipBase.c.obj -MF CMakeFiles\starcraft.dir\src\ShipBase.c.obj.d -o CMakeFiles\starcraft.dir\src\ShipBase.c.obj -c C:\Users\Lenovo\Desktop\ProjectsGit\StartCraft\Code\Skeleton\src\ShipBase.c

CMakeFiles/starcraft.dir/src/ShipBase.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/starcraft.dir/src/ShipBase.c.i"
	C:\PROGRA~1\MINGW-~1\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\Lenovo\Desktop\ProjectsGit\StartCraft\Code\Skeleton\src\ShipBase.c > CMakeFiles\starcraft.dir\src\ShipBase.c.i

CMakeFiles/starcraft.dir/src/ShipBase.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/starcraft.dir/src/ShipBase.c.s"
	C:\PROGRA~1\MINGW-~1\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\Lenovo\Desktop\ProjectsGit\StartCraft\Code\Skeleton\src\ShipBase.c -o CMakeFiles\starcraft.dir\src\ShipBase.c.s

CMakeFiles/starcraft.dir/src/TerranShip.c.obj: CMakeFiles/starcraft.dir/flags.make
CMakeFiles/starcraft.dir/src/TerranShip.c.obj: CMakeFiles/starcraft.dir/includes_C.rsp
CMakeFiles/starcraft.dir/src/TerranShip.c.obj: ../src/TerranShip.c
CMakeFiles/starcraft.dir/src/TerranShip.c.obj: CMakeFiles/starcraft.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Lenovo\Desktop\ProjectsGit\StartCraft\Code\Skeleton\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building C object CMakeFiles/starcraft.dir/src/TerranShip.c.obj"
	C:\PROGRA~1\MINGW-~1\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/starcraft.dir/src/TerranShip.c.obj -MF CMakeFiles\starcraft.dir\src\TerranShip.c.obj.d -o CMakeFiles\starcraft.dir\src\TerranShip.c.obj -c C:\Users\Lenovo\Desktop\ProjectsGit\StartCraft\Code\Skeleton\src\TerranShip.c

CMakeFiles/starcraft.dir/src/TerranShip.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/starcraft.dir/src/TerranShip.c.i"
	C:\PROGRA~1\MINGW-~1\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\Lenovo\Desktop\ProjectsGit\StartCraft\Code\Skeleton\src\TerranShip.c > CMakeFiles\starcraft.dir\src\TerranShip.c.i

CMakeFiles/starcraft.dir/src/TerranShip.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/starcraft.dir/src/TerranShip.c.s"
	C:\PROGRA~1\MINGW-~1\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\Lenovo\Desktop\ProjectsGit\StartCraft\Code\Skeleton\src\TerranShip.c -o CMakeFiles\starcraft.dir\src\TerranShip.c.s

CMakeFiles/starcraft.dir/src/Viking.c.obj: CMakeFiles/starcraft.dir/flags.make
CMakeFiles/starcraft.dir/src/Viking.c.obj: CMakeFiles/starcraft.dir/includes_C.rsp
CMakeFiles/starcraft.dir/src/Viking.c.obj: ../src/Viking.c
CMakeFiles/starcraft.dir/src/Viking.c.obj: CMakeFiles/starcraft.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Lenovo\Desktop\ProjectsGit\StartCraft\Code\Skeleton\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building C object CMakeFiles/starcraft.dir/src/Viking.c.obj"
	C:\PROGRA~1\MINGW-~1\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/starcraft.dir/src/Viking.c.obj -MF CMakeFiles\starcraft.dir\src\Viking.c.obj.d -o CMakeFiles\starcraft.dir\src\Viking.c.obj -c C:\Users\Lenovo\Desktop\ProjectsGit\StartCraft\Code\Skeleton\src\Viking.c

CMakeFiles/starcraft.dir/src/Viking.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/starcraft.dir/src/Viking.c.i"
	C:\PROGRA~1\MINGW-~1\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\Lenovo\Desktop\ProjectsGit\StartCraft\Code\Skeleton\src\Viking.c > CMakeFiles\starcraft.dir\src\Viking.c.i

CMakeFiles/starcraft.dir/src/Viking.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/starcraft.dir/src/Viking.c.s"
	C:\PROGRA~1\MINGW-~1\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\Lenovo\Desktop\ProjectsGit\StartCraft\Code\Skeleton\src\Viking.c -o CMakeFiles\starcraft.dir\src\Viking.c.s

# Object files for target starcraft
starcraft_OBJECTS = \
"CMakeFiles/starcraft.dir/src/main.c.obj" \
"CMakeFiles/starcraft.dir/src/Vector.c.obj" \
"CMakeFiles/starcraft.dir/src/BattleField.c.obj" \
"CMakeFiles/starcraft.dir/src/BattleCruser.c.obj" \
"CMakeFiles/starcraft.dir/src/Carrier.c.obj" \
"CMakeFiles/starcraft.dir/src/Phoenix.c.obj" \
"CMakeFiles/starcraft.dir/src/ProtossShip.c.obj" \
"CMakeFiles/starcraft.dir/src/ShipBase.c.obj" \
"CMakeFiles/starcraft.dir/src/TerranShip.c.obj" \
"CMakeFiles/starcraft.dir/src/Viking.c.obj"

# External object files for target starcraft
starcraft_EXTERNAL_OBJECTS =

starcraft.exe: CMakeFiles/starcraft.dir/src/main.c.obj
starcraft.exe: CMakeFiles/starcraft.dir/src/Vector.c.obj
starcraft.exe: CMakeFiles/starcraft.dir/src/BattleField.c.obj
starcraft.exe: CMakeFiles/starcraft.dir/src/BattleCruser.c.obj
starcraft.exe: CMakeFiles/starcraft.dir/src/Carrier.c.obj
starcraft.exe: CMakeFiles/starcraft.dir/src/Phoenix.c.obj
starcraft.exe: CMakeFiles/starcraft.dir/src/ProtossShip.c.obj
starcraft.exe: CMakeFiles/starcraft.dir/src/ShipBase.c.obj
starcraft.exe: CMakeFiles/starcraft.dir/src/TerranShip.c.obj
starcraft.exe: CMakeFiles/starcraft.dir/src/Viking.c.obj
starcraft.exe: CMakeFiles/starcraft.dir/build.make
starcraft.exe: CMakeFiles/starcraft.dir/linklibs.rsp
starcraft.exe: CMakeFiles/starcraft.dir/objects1.rsp
starcraft.exe: CMakeFiles/starcraft.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\Lenovo\Desktop\ProjectsGit\StartCraft\Code\Skeleton\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Linking C executable starcraft.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\starcraft.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/starcraft.dir/build: starcraft.exe
.PHONY : CMakeFiles/starcraft.dir/build

CMakeFiles/starcraft.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\starcraft.dir\cmake_clean.cmake
.PHONY : CMakeFiles/starcraft.dir/clean

CMakeFiles/starcraft.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\Lenovo\Desktop\ProjectsGit\StartCraft\Code\Skeleton C:\Users\Lenovo\Desktop\ProjectsGit\StartCraft\Code\Skeleton C:\Users\Lenovo\Desktop\ProjectsGit\StartCraft\Code\Skeleton\build C:\Users\Lenovo\Desktop\ProjectsGit\StartCraft\Code\Skeleton\build C:\Users\Lenovo\Desktop\ProjectsGit\StartCraft\Code\Skeleton\build\CMakeFiles\starcraft.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/starcraft.dir/depend
