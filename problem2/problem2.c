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
/*returns the points based on your choice*/
int choice_points(char choice);

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
		printf("%d ",choice_points(line[2]));
		printf("%c\n",line[2]);
	}


	/*close file*/
	fclose(file);
	return 0;



	return 0;
}
/*
 *  1st column A = rock, B = paper, C = scissors
 *  2nd column X = rock, Y = paper, Z = scissors -- your choice
 *	Points,
 *	rock = 1, paper = 2, scissors = 3						 -- for your choice
 *	lost = 0, draw  = 3, win      = 6
 */

/*returns the points based on your choice*/
int choice_points(char choice)
{
	switch(choice)
	{
		case 'X':
			return 1;
		case 'Y':
			return 2;
		case 'Z':
			return 3;
	}
	return 0;
}
