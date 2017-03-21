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
void MaxMin(int num, int vals[], int * min, int * max);

/* Main Program */
int main(int argc, char *argv[])
{
	int max, min,randd[SIZE];
	MaxMin ( SIZE, randd, &min, &max);

	return 0;
}


/* Function Definitions */

void MaxMin(int num, int vals[], int * min, int * max)
{
	//assume the first element as maximum and minimum
	//Hugo made mention of something like this using a tunnel reference
	//use the loop to find the max and min through the array
	srand((unsigned)time(NULL));

	*max = vals[0];
	*min = vals[0];

	printf("The list is:\n");
	for (int i = 0; i < SIZE; i++)
	{
		vals[i] = 10 + (int) (rand() % (100- 10 + 1));//range from 10 - 100//
		printf(" %d\n ", vals[i]);

		if (vals[i] > *max)
		{
			*max = vals[i];
		}
		else if (vals[i] < *min)
		{
			*min = vals[i];
		}
	}
	printf("The maximum value is %d\n", *max);
	printf("The minimum value is %d\n", *min);

	return;
}
