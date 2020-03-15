# cpp-Kurs-code

## Github Repository anlegen

Repository = cpp-Kurs-code 

    echo "# cpp-Kurs-code" >> README.md
    git init
    git add README.md
    git commit -m "first commit"
    git remote add origin https://github.com/ju1-eu/cpp-Kurs-code.git
    git push -u origin master

## Github Repository clonen

    git clone https://github.com/ju1-eu/cpp-Kurs-code.git 
    git status
    git log
    #git init
    git add .
    git commit -a
    git pull
    git push

## IDE - Visual Studio 2019

Download: <https://visualstudio.microsoft.com/de/vs/>
	
	Neues Projekt erstellen / Leeres Projekt
		- Projektname: 1-Grundlagen
		- Ort: "C:\daten\projekte\c\C++Kurs\prj\"
		- Name Projektmappe: cpp-Kurs-code
	
    Projektmappe
        - Projektmappe erstellen
        - Projektmappe bereinigen

    Datei / Neu / Projekt / Leeres Projekt 
            - Projektname: 1-Grundlagen
            - Ort: "C:\daten\projekte\c\C++Kurs\prj\"
    Projektmappe
		Projekt auswahl / Quellcodedateien / Hinzufügen / 
            - Neues Element       (C++ Datei)
            - Vorhandenes Element (C++ Datei)
	
	Nur eine Ma1in-Funktion!
		- Code auskommentieren: (Strg + K, Strg + C)
		- Kommentar entfernen:  (Strg + K, Strg + U)
	
	Projektmappe
		Projekt auswahl / Als Startprojekt festlegen

## Editor - Visual Studio Code

Download: <https://code.visualstudio.com/?wt.mc_id=DX_841432>

## GCC C++ compiler

Visual Studio Code to use the GCC C++ compiler 

<https://code.visualstudio.com/docs/cpp/config-mingw>

### Software

- Visual Studio Code: <https://code.visualstudio.com/download>
- Visual Studio 2019 (Windows): <https://visualstudio.microsoft.com/de/vs/>
- C/C++ extension for VS Code (Ctrl+Shift+X): C/C++
- Mingw-w64: <https://sourceforge.net/>
- Windows PATH -> Compiler-Pfad: "c:\mingw-w64\x86_64-8.1.0-win32-seh-rt_v6-rev0\mingw64\bin"

### Check your MinGW installation

    g++ --version
    gcc --version
    gdb --version

### Create Hello World

    mkdir helloworld
    cd helloworld
    code .

    .vscode (workspace)
        tasks.json (build instructions)
        launch.json (debugger settings)
        c_cpp_properties.json (compiler path and IntelliSense settings)
	
    // Datei helloworld.cpp
    #include <iostream>
    #include <vector>
    #include <string>

    using namespace std;

    int main(){
        vector<string> msg {"Hello", "C++", "World", "from", "VS Code", "and the C++ extension!"};

        for (const string& word : msg){
            cout << word << " ";
        }
        cout << endl;
    }

### Build helloworld.cpp (Ctrl+Shift+B)

    # Datei .vscode/tasks.json

    {
    "version": "2.0.0",
    "tasks": [
        {
        "type": "shell",
        "label": "g++.exe build active file",
        "command": "C:\\mingw-w64\\i686-8.1.0-posix-dwarf-rt_v6-rev0\\mingw32\\bin\\g++.exe",
        "args": ["-g", "${file}", "-o", "${fileDirname}\\${fileBasenameNoExtension}.exe"],
        "options": {
            "cwd": "C:\\mingw-w64\\i686-8.1.0-posix-dwarf-rt_v6-rev0\\mingw32\\bin"
        },
        "problemMatcher": ["$gcc"],
        "group": {
            "kind": "build",
            "isDefault": true
        }
        }
    ]
    }

### Debug (F5) - Debugging starten

    # Datei .vscode/launch.json

    {
    "version": "0.2.0",
    "configurations": [
        {
        "name": "g++.exe build and debug active file",
        "type": "cppdbg",
        "request": "launch",
        "program": "${fileDirname}\\${fileBasenameNoExtension}.exe",
        "args": [],
        "stopAtEntry": false,
        "cwd": "${workspaceFolder}",
        "environment": [],
        "externalConsole": false,
        "MIMode": "gdb",
        "miDebuggerPath": "C:\\mingw-w64\\i686-8.1.0-posix-dwarf-rt_v6-rev0\\mingw32\\bin\\gdb.exe",
        "setupCommands": [
            {
            "description": "Enable pretty-printing for gdb",
            "text": "-enable-pretty-printing",
            "ignoreFailures": true
            }
        ],
        "preLaunchTask": "g++.exe build active file"
        }
    ]
    }

### C/C++ configurations (Ctrl+Shift+P) 

    # Datei .vscode/c_cpp_properties.json
    {
    "configurations": [
        {
        "name": "Win32",
        "includePath": ["${workspaceFolder}/**"],
        "defines": ["_DEBUG", "UNICODE", "_UNICODE"],
        "compilerPath": "C:\\mingw-w64\\i686-8.1.0-posix-dwarf-rt_v6-rev0\\mingw32\\bin\\gcc.exe",
        "cStandard": "c11",
        "cppStandard": "c++17",
        "intelliSenseMode": "clang-x86"
        }
    ],
    "version": 4
    }
