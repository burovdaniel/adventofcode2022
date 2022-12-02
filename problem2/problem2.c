/*==================================================================
 *                     ADVENT OF CODE PROBLEM 2
 *
 * problem 1 rock paper siscors tournament
 *==================================================================*/

/*==================================================================
 * Systems header files
 *==================================================================*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>


/*==================================================================
 * Constant definitions
 *==================================================================*/
#define MAXLINE 256

/*==================================================================
 * Function definitions
 *==================================================================*/

int main(void)
{
	FILE *file;
	char line[MAXLINE];

	/*open file*/
	if((file = fopen("puzzleInput.txt","r")) == NULL){
		printf("ERROR file not found");
		exit(EXIT_FAILURE);
	}
	
	/*read in lines in file*/
	while(fgets(line,MAXLINE,file) != NULL){
		printf("%s",line);
	}


	/*close file*/
	fclose(file);
	return 0;



	return 0;
}

