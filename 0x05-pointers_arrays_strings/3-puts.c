#include "holberton.h"

/**
* _puts - Let me check the man to make the plan.
* @str: String
* Return: Nothingness. Fake. Deep.
*/

void _puts(char *str)
{
	/* Write a function that prints a string */
	/* Lol watch me */
	/* Changed this from 5 to 0 and it works */
	/* String must start at zero... that's why */
	int a = 0;

	/* while loop because simplicity */
	/* only printing out something if true */
	/* Not sure why to separate the asterisk */
	/* PEMDAS: makes sure that the int is added FIRST */
	while (*(str + a))
	{
		_putchar(*(str + a));
		a++;
	}
	_putchar(10);
}
