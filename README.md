# Frogger
First year C++ Frogger recreation assignment.
I haven't gotten around to making a premake.lua file or .bat for this project's properties yet.

A x86 project, required properties:
C/C++ -> General -> Additional Include Directories = "$(SolutionDir)\External Libraries\SFML\include"
Linker -> General -> Additional Library Directories = "$(SolutionDir)\External Libraries\SFML\lib"

Linker -> Input -> Additional Dependencies (Debug) =
sfml-graphics-d.lib;sfml-window-d.lib;sfml-audio-d.lib;sfml-network-d.lib;sfml-system-d.lib;kernel32.lib;user32.lib;gdi32.lib;winspool.lib;comdlg32.lib;advapi32.lib;shell32.lib;ole32.lib;oleaut32.lib;uuid.lib;odbc32.lib;odbccp32.lib

Linker -> Input -> Additional Dependencies (Release) =
sfml-graphics.lib;sfml-window.lib;sfml-audio.lib;sfml-network.lib;sfml-system.lib;kernel32.lib;user32.lib;gdi32.lib;winspool.lib;comdlg32.lib;advapi32.lib;shell32.lib;ole32.lib;oleaut32.lib;uuid.lib;odbc32.lib;odbccp32.lib
