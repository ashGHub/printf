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
unsigned int _abs(int n)
{
	if (n >= 0)
		return (n);
	if (n == INT_MIN)
		return ((unsigned int)n);
	return (-n);
}

/**
 * print_number - prints an integer
 * @n: integer to be printed
 *
 * Return: number of printed characters
 */
int print_number(int n)
{
	unsigned int p, n1 = _abs(n);
	int printed = 0, printed_chars = 0;
	short is_negative = n < 0;

	if (is_negative)
		printed = _putchar('-');
	if (printed == -1)
		return (-1);
	printed_chars += printed;
	for (p = digit_part(n1); p != 0; p /= 10)
	{
		printed = _putchar((n1 / p) % 10 + '0');
		if (printed == -1)
			return (-1);
		printed_chars += printed;
	}
	return (printed_chars);
}

/**
 * print_integer - a function that prints a integerger type
 * @format: given format, used for format specification
 * @idx: pointer to current index for the format
 * @args: arguments passed
 *
 * Return: number of characters printed
 */
int print_integer(const char *format, int *idx, va_list args)
{
	int d = va_arg(args, int);

	(void)format;
	(*idx)++;
	return (print_number(d));
}
