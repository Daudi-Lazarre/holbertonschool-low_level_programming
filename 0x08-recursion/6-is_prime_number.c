#include "holberton.h"

/**
 * prime_number - Tests for factors of n
 * @n: Potential prime integer
 * @check: Checks for primer
 * Return: 1 if is_prime is prime, 0 if is_prime is composite (not prime)
 */

int prime_number(int n, int check)
{
	if (n == check)
		return (1);

	if (n % check == 0)
		return (0);

	return (prime_number(n, check + 1));
}

/**
 * is_prime_number - checks if n is a prime number
 * @n: Checc for value
 * Return: 1 for prime, 0 if not
 */

int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	return (prime_number(n, 2));
}
