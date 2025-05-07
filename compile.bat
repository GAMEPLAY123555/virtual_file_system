@ECHO off
CD src
G++ -I./include folder.cc node.cc tree.cc main.cc -o ../bin/software.exe
pause