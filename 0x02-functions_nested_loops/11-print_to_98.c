#include "stdio.h"
/**
* print_to_98 - Exactly as it sounds
* @n: the number... I'm almost done :D
* Return: void
*/
void print_to_98(int n)
{

	if (n > 98)
	{
/*
* When n is greater than 98
* Increment by negative one
* ... and print the number wit the comma and space
* In retrospect, using putchar to do that was
* ... incredibly tedious.
* Opposite for the next line;
* increment with plus one for numbers less than 98
* Why do you do this to me, Holberton?
* I'll probably be thanking you in two years.
*Give it time.
*/
		for (; n > 98; n--)
		{
			printf("%d, ", n);
		}
	}
		for (; n < 98; n++)
		{
			printf("%d, ", n);
		}
		printf("98\n");
}
