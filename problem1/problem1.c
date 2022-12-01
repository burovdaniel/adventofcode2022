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
int bigger(int a, int b);

int main(void)
{
	FILE *file;
	char line[MAXLINE];
	int calorie;
	int calorieSum,calorieLargest;

	/*open file*/
	if((file = fopen("puzzleInput.txt","r")) == NULL){
		printf("ERROR file not found");
		exit(EXIT_FAILURE);
	}
	
	/*read in lines in file*/
	while(fgets(line,MAXLINE,file) != NULL){
		calorie =	atoi(line); 															 /*convert to int*/	

		/*adding the calories till break*/
		if  (calorie !=0){calorieSum += calorie;}
		else{
			calorieLargest = bigger(calorieSum,calorieLargest);/*get the biggest value*/
			calorieSum = 0;																		 /*reset*/
		}
		/*notes igores values before end of file*/
	}

	/*print the final value*/
	printf("Largest calorie is %d",calorieLargest);

	/*close file*/
	fclose(file);
	return 0;
}

int bigger(int a, int b)
{
	if  (a>b){return a;}
	else{return b;}
}
