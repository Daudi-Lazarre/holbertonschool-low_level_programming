#include "holberton.h"
/**
 * _pow - integer that to the nth power
 * @a: conversion variable
 * @b: exponent
 * Return: the result
 */
unsigned int _pow(unsigned int a, unsigned int b)
{
	unsigned int i;
	unsigned int res = 1;

	if (b == 0)
	{
		return (1);
	}
	for (i = 1; i <= b; i++)
	{
		res = res * a;
	}
	return (res);
}

/**
 * binary_to_uint - binary to unsigned int
 * @b: Binary string
 * Return: the result
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int binaryLength;
	unsigned int iterate;
	unsigned int result = 0;
	unsigned int power;

	if (binaryLength == NULL)
		return (0);
	for (binaryLength = 0; b[binaryLength]; binaryLength++)
		continue;
	power = binaryLength - 1;
	for (iterate = 0; iterate < binaryLength; iterate++)
	{
		if (b[iterate] == '1')
		{
			result = result + _pow(2, power);
		}
		else if (b[iterate] != '0')
		{
			return (0);
		}
		power--;
	}
	return (result);
}
