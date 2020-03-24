@ECHO OFF
TITLE Parse parse.c
call gcc parse.c -o Html.exe
Echo Erstelle Exe für HTML
PAUSE
EXIT

Das ist ein Kommentar:

Um diese Datei ausführen zu können, muss MinGW auf dem 
Windows Rechner installiert sein. Eine schöne Anleitung findet man
unter https://www.wikihow.com/Compile-a-C-Program-Using-the-GNU-Compiler-(GCC)

Diese Datei erstellt nur das Programm Html.exe aus der Datei parse.c