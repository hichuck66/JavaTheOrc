/*
 * =====================================================================================
 *
 *       Filename:  JavaTheOrc_Hw7_Task1.c
 *       	Usage:  ./JavaTheOrc_Hw7_Task1.c
 *    Description:  TASK 1
 *
 *        Version:  1.0
 *        Created:  03/17/2017 01:49:29 PM
 *       Compiler:  gcc -Wall -Werror
 *         Author:  Chikere-Njoku Chibuike (), cchikerenjoku@mail.weber.edu
 * =====================================================================================
 */
#include <stdio.h>		/* For Standard I/O*/
#include <stdlib.h>
#define LEN 5

/* Function Prototypes */
void copy_arr (double ar1[], const double ar2[], int n);
void copy_ptr (double *ar1, const double *ar2, int n);
void copy_ptrs (double *ar1, const double *start, const double * end);

/* Main Program */
int main(int argc, char *argv[])
{

	double source[LEN] = {1.1, 2.2, 3.3, 4.4, 5.5};
	double target1[LEN];
	double target2[LEN];
	double target3[LEN];
//	double target3[LEN];

	// this is a test
	copy_arr ( target1, source, LEN);
	copy_ptr ( target2, source, LEN);
	copy_ptrs ( target3, source, source[LEN]);
	return 0;
}


/* Function Definitions */


void copy_arr (double ar1[], const double ar2[], int n)
{	
	for (int i = 0; i < LEN; i++)
	{
		ar1[i] = ar2[i];
		printf("source array:[%lf]\n", ar1[i]);
	}
	return;
}

void copy_ptr (double *ar1, const double *ar2, int n)
{	
	for (int i = 0; i < LEN; i++)
	{
		*(ar1) = *(ar2);
		printf("source array:[%lf]\n", *ar1++);
		ar1++;
		ar2++;
	}
	return;
}


void copy_ptrs (double *ar1, const double *start, const double * end)
{
	while (*start < *end)
	{
		*(ar1) = *(start);
		printf("source array:[%lf]\n", *start++);
		start++;

	}
	return;

}
