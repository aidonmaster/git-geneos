echo off

gcc -c header.c -o header.o
ar rc libreposi.a header.o
gcc main.c -o main -L. -lreposi
./main