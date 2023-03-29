#include "main.h"

/**
 * print_hex - a function that prints hex type
 * @format: given format, used for format specification
 * @idx: current index for the format
 * @args: arguments passed
 * @format_op: format options
 *
 * Return: number of characters printed
 */
int print_hex(const char *format, int idx, va_list args,
				format_op_t format_op)
{
	int printed_chars = 0;
	char specifier = format[idx];
	unsigned int num = va_arg(args, int);

	if (format_op.hash && num != 0)
		printed_chars += _putchar('0') + _putchar(specifier);
	printed_chars += write_hex(specifier, num);
	return (printed_chars);
}
