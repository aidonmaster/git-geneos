#include <stdio.h>
#include "header.h"
#include <stdlib.h>


/*
Developed by Yago P. Messias 
email - aidondeveloper@gmail.com

This example is about the life game created by John Conway
Basic simulation of cells life 

*Rules:
	Value greater than 3, the cell die	
	if neighbors cells == 3 - Create a new cell or keep current state
	if neighbors cells == 2 - only Keep current state
	Value fewer than 2, cells die too

	Based this, I created that code for show you an example in real form.

					 #########
######################  OBS  ###########################
					 #########
To the best visualization, this code should to run with terminal in full screen
If you wnat execult in resizable screen change the value on the LINE constant and the
line in vector, both must be consistent
*/

#define LINE 58

int main(void){

	char vector[ LINE * LINE ];

	for (int i = 0; i < LINE*LINE; i++)
	{
		vector[i] = rand() % 2 == 0 ? '0' : '1';
	}


	analyze(vector, LINE);

	return  0;
}