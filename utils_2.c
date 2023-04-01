#include "main.h"

/**
 * digit_part - get digits part
 * @n: number to find the digit part for
 *
 * Return: digit count
 */
unsigned int digit_part(unsigned int n)
{
	unsigned int part = 1;

	for ( ; n > 9; n /= 10)
		part *= 10;
	return (part);
}

/**
 * _abs - get absolute value of a number
 * @n: number
 *
 * Return: 0 for zero, +ve n for any n
 */
unsigned int _abs(long n)
{
	if (n >= 0)
		return (n);
	return ((unsigned int)(-1 * n));
}
