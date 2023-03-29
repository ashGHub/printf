#include "main.h"

/**
 * hex_apply_flag_option - a function that applies flag options to integers
 * @num: number to check before applying option
 * @specifier: hex type, small or captial
 * @format_op: format options
 *
 * Return: number of printed characters
 */
int hex_apply_flag_option(unsigned int num, char specifier,
							format_op_t format_op)
{
	int printed_chars = 0;

	if (format_op.hash && num != 0)
		printed_chars += _putchar('0') + _putchar(specifier);
	return (printed_chars);
}

/**
 * hex_apply_length_option - a function that applys length modifier option
 * @n: number to convert to the supported length
 * @format_op: format options
 *
 * Return: converted number
*/
unsigned int hex_apply_length_option(unsigned int n, format_op_t format_op)
{
	if (format_op._short)
		return ((unsigned short)n);
	if (format_op._long)
		return ((unsigned long)n);
	return (n);
}

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

	num = hex_apply_length_option(num, format_op);
	printed_chars += hex_apply_flag_option(num, specifier, format_op);
	printed_chars += write_hex(specifier, num);
	return (printed_chars);
}
