#include "holberton.h"
/**
 * get_bit - get bit
 * @n: number
 * @index: index
 * Return: -1,0,1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);
	return ((n >> index) & 1);
}
