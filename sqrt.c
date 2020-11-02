/* This program computes the square root of a
positive number. 
Utkarsh Jain
Roll no: B17029
Hi
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char* argv[]) {
		
	if (argc != 2) {
		printf("DEBUG");
		printf("Usage: sqrt input\n\n");
		exit(-1);
	}

	int input = atoi(argv[1]);
	if(input < 0) {
		printf("DEBUG");
		printf("Sqrt root of %d is %f i\n",input, sqrt(abs(input)));
		return(0);
	}
	printf("DEBUG");
	printf("Sqrt of %d is %f\n",input,sqrt(input));
	return(0);
	printf("DEBUG");
	printf("End of program. Exiting.");
} // end main
