#include "main.h"

/**
 * print_hex - a function that prints hex type
 * @format: given format, used for format specification
 * @idx: pointer to current index for the format
 * @args: arguments passed
 *
 * Return: number of characters printed
 */
int print_hex(const char *format, int *idx, va_list args)
{
	unsigned int num = va_arg(args, int);

	(*idx)++;
	return (write_hex(*format, num));
}
