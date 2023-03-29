#include "main.h"

/**
 * print_char - a function that prints a character type
 * @format: given format, used for format specification
 * @idx: current index for the format
 * @args: arguments passed
 * @format_op: format options
 *
 * Return: number of characters printed
 */
int print_char(const char *format, int idx, va_list args,
				format_op_t format_op)
{
	(void)format;
	(void)format_op;
	(void)idx;
	return (_putchar(va_arg(args, int)));
}
