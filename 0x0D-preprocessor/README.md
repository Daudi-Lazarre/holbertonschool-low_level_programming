This is the readmefile for today's project: Preprocessors.

//// ASK ABOUT QUIZ QUESTION 14

Task 0
Comments that betty doesn't like.

/* Header guard */
#ifndef Define_macro
/* Introduce the object-like macro to be defined */
#define Define_macro
/* Macro named SIZE defined as 1024 */
#define SIZE 1024

Task 1
/* Header Guard */
#ifndef PI_H
/* Introduce Pi */
#define PI_H
/* Define the macro named Pi with the number */
#define PI 3.14159265359

#endif

Task 2
#include <stdio.h>

/**
 * main - Print the name of the file that it was compiled from
 * Return: 0
 */

/* Void because no input... automatically print */
int main(void)
{
	/* Print the string from the file */
	printf("%s\n", __FILE__);
	return (0);
}

Task 3
//// Found the answer on Google, what does it mean in English?

#ifndef compute_abs_val
#define compute_abs_val

/* Compute absolute value of x */
#define ABS(x) ((x) < 0 ? -(x) : (x))
#endif


Task 4
/* No need for comments, I get this one. */
#ifndef SUM_H
#define SUM_H
#define SUM(x, y) (x + y)

#endif