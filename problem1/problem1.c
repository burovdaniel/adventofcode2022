/*==================================================================
 *                    ADVENT OF CODE PROBLEM 1
 *
 * problem 1 get the max calories
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
	int calorie;
	
	/*open file*/
	if((file = fopen("puzzleInput.txt","r")) == NULL){
		printf("ERROR file not found");
		exit(EXIT_FAILURE);
	}
	
	/*read in lines in file*/
	while(fgets(line,MAXLINE,file) != NULL){
		calorie =	atoi(line); /*convert to int*/	

		printf("%d\n",calorie);
	}

	/*close file*/
	fclose(file);
	return 0;
}

