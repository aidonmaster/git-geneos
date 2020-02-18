#include <stdio.h>
#include "header.h"


/*	Buffer of main vector
	This function only copy
	the origin vector to buffer vector

	Change the argument of the printf in show() function ( Draw in terminal )
	There you can choice another character to be showing in terminal

*/
void changeMatrix(char target[], char buffer[], int realSize){
	for (int i = 0; i < realSize; i++){
		target[i] = buffer[i];
	}
}

// Write on the vector
void writeVector(char vector[], int realSize){
	for (int i = 0; i < realSize; i++){
		vector[i] = '0';
	}
}

// Draw in terminal
void show(char vector[], int size){
	// Counter flag
	int cont = 0;
	int realSize = size * size;

	printf("\n");
	// Iterator over 
	for (int i = 0; i < realSize; i++){
		// verify border
		if(cont >= size){
			cont = 0;
			printf("\n");
		}
		// Permute '1' or '0' by ' # ' and '  '
		if (vector[i] == '1') printf(" # ");
		else printf(" - ");

		cont ++;

	}
	printf("\n");

}

// Vector analyzer
void analyze(char vector[], int size){
		// Cell variable
		int cells     = 0;
		int realSize  = size * size;
		int initPoint = size+1;
		int endPoint  = realSize - (size+2);

		char neighbors[8] = {'0','0','0','0','0','0','0','0'};
		char buffer[realSize];

		// write into buffer
		writeVector(buffer, realSize);
		// Show in the screen
		show(vector, size);

		while(1){
			// Verifiy each block of vector
			for (int i = 0; i < realSize; i++){				
				// Cornner limit
				if(i >= initPoint && i <= endPoint){
					// TOP
					neighbors[0] = vector[i - (size + 1)]; // left-top-corner
					neighbors[1] = vector[i - size];	   // top
					neighbors[2] = vector[i - (size - 1)]; // right-top-corner
					// MIddle
					neighbors[3] = vector[i - 1];		   // left
					neighbors[4] = vector[i + 1];		   // right
					// Bottom
					neighbors[5] = vector[i + (size - 1)]; // left-bottom-corner
					neighbors[6] = vector[i + size];	   // bottom
					neighbors[7] = vector[i + (size + 1)]; // right-bottom-corner

					// Count neighbors of the cell
					for (int live = 0; live<8; live++){
						if ( neighbors[live] == '1' ){
							cells += 1;
						}	
					}

					// Applay the rules of John Conway  
					if( cells == 3 ) buffer[i] = '1';
					else if( cells == 2 && vector[i] == '0' ) buffer[i] = '0';
					else if( cells == 2 && vector[i] == '1' ) buffer[i] = '1';
					else buffer[i] = '0';

					cells = 0;

				}// Corner limit ( End if )

			}// Verify block ( End for )

			/*	Call the changeMatrix() function
				to update the main vector 
			*/
			changeMatrix(vector, buffer, realSize);

			// just show on the screen
			show(vector, size);


			// Delay time to show on console
			for(int t = 0; t<30000000; t++);


		}// End while
}