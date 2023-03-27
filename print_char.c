#include "main.h"

/**
 * print_char - a function that prints a character type
 * @format: given format, used for format specification
 * @idx: pointer to current index for the format
 * @args: arguments passed
 *
 * Return: number of characters printed
 */
int print_char(const char *format, int *idx, va_list args)
{
	(void)format;
	(*idx)++;
	return (_putchar(va_arg(args, int)));
}
