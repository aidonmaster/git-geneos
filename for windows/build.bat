echo off
rem This file automate the steps to create the binary
rem Generete the obj
rem Make it a library reposi 
rem Link the lib with program
rem Run

gcc -c header.c -o header.o
ar rc libreposi.a header.o
gcc main.c -o main -L. -lreposi
main
