/* This program computes the square root of a
positive number. 
Name: Utkarsh Jain
Roll no: B17029
Hi
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char* argv[]) {
	
	if (argc != 2) {
		printf("Usage: sqrt input\n\n");
		exit(-1);
	}

	int input = atoi(argv[1]);
	printf("Sqrt of %d is %f\n",input,sqrt(input));
	return(0);
	
	printf("End of program. Exiting.");
} // end main
