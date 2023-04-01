#include "main.h"

/**
 * hex_length_option - a function that applies length modifier option
 * @args: arguments passed
 * @format_op: format options
 *
 * Return: converted number
*/
unsigned long hex_length_option(va_list args, format_op_t format_op)
{
	if (format_op._short)
		return ((unsigned short)va_arg(args, int));
	if (format_op._long)
		return ((unsigned long)va_arg(args, unsigned long));
	return ((unsigned long int)va_arg(args, int));
}

/**
 * hex_apply_flag_option - a function that applies flag options to hexadecimals
 * @num: number to check before applying option
 * @specifier: hex type, small or capital
 * @format_op: format options
 *
 * Return: number of printed characters
 */
int hex_apply_flag_option(unsigned long int num, char specifier,
							format_op_t format_op)
{
	int printed_chars = 0;

	if (format_op.hash && num != 0)
		printed_chars += _putchar('0') + _putchar(specifier);
	return (printed_chars);
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
	unsigned long int num;

	num = hex_length_option(args, format_op);
	printed_chars += hex_apply_flag_option(num, specifier, format_op);
	printed_chars += write_hex(specifier, num);
	return (printed_chars);
}
