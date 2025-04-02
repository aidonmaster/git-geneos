# Game of Life

The game of life is a simulator of the life cellular.
The rules are simple
If a cell has more than 3 or fewer than 2 neighbors, they die
Now, if they have exctly 2 neighbors, so they keeps your state
And if they has exctly 3 neighbors, the magic happens, one cell is
generated. that is whay the name this algorithtm is game of life

Make a fork, download, contribute or only read this source code.
The method whoe i use in this code, was the simple array, and the algorithm
to read each block in vector is explained on video in this not listed link
https://www.youtube.com/playlist?list=PL8Z62A8AhAzQHmBUqBc0v4bf1KMQeZpCM

The content is in portuguese, you can to activate the translate on
youtube if applicable.

Tanks for visiting my GITHUB !


# TIPS
The file 'build' is to make the binary automatically, if you prefer can to creat step by step, remember to create the '.o' the '.a' the binary and linker. For to execute the 'build' use this comand on bash or MSDOS:

# on linux

	Make automaticaly:
	    sh build
	make manual:
	    1º gcc -c header.c -o header.o
	    2º ar rc libreposi.a header.o
	    3º gcc main.c -o main -L. -lreposi
	    4º ./main

# on windows

	Automaticaly:
	    build
	Manual:
	    1º gcc -c header.c -o header.o
	    2º ar rc libreposi.a header.o
	    3º gcc main.c -o main -L. -lreposi
	    4º main
