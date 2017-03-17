/*
 * =====================================================================================
 *
 *       Filename:  JavaTheOrc_Hw7_Task2.c
 *       	Usage:  ./JavaTheOrc_Hw7_Task2.c
 *    Description:  TASK 2 , dont forget we need to run math with is
 *
 *        Version:  1.0
 *        Created:  03/17/2017 01:52:03 PM
 *       Compiler:  gcc -Wall -Werror -lm
 *         Author:  Chikere-Njoku Chibuike (), cchikerenjoku@mail.weber.edu
 * =====================================================================================
 */
#include <stdio.h>		/* For Standard I/O*/
#include <stdlib.h>
#include <math.h>
#include <time.h>

#define SIZE 10
/* Function Prototypes */
void MaxMin( int num, int vals[], int * min, int * max);

/* Main Program */
int main(int argc, char *argv[])
{
	int max, min, randd[SIZE];
	MaxMin ( SIZE, randd, &min, &max);

	return 0;
}


/* Function Definitions */


void MaxMin( int num, int vals[], int * min, int * max)
{
	srand(time(NULL));
	for ( int i = 0; i < num ; i ++)
	{	
		vals[i] = rand();
		printf(" %d\n ", vals[i]);
	}
	return;
}
