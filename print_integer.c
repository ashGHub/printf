#include "main.h"

/**
 * int_length_option - a function that applys length modifier option
 * @args: arguments passed
 * @format_op: format options
 *
 * Return: converted number
*/
long int_length_option(va_list args, format_op_t format_op)
{
	if (format_op._short)
		return ((short)va_arg(args, int));
	if (format_op._long)
		return ((long)va_arg(args, long));
	return ((int)va_arg(args, int));
}

/**
 * int_apply_flag_option - a function that applies flag options to integers
 * @format_op: format options
 *
 * Return: number of printed characters
 */
int int_apply_flag_option(format_op_t format_op)
{
	int printed_chars = 0;

	if (format_op.plus)
		printed_chars += _putchar('+');
	else if (format_op.space)
		printed_chars += _putchar(' ');
	return (printed_chars);
}

/**
 * print_integer - a function that prints a integer type
 * @format: given format, used for format specification
 * @idx: current index for the format
 * @args: arguments passed
 * @format_op: format options
 *
 * Return: number of characters printed
 */
int print_integer(const char *format, int idx, va_list args,
					format_op_t format_op)
{
	long int n;
	int printed_chars = 0;
	short is_negative;
	unsigned long int p, n1;

	(void)format;
	(void)idx;
	n = int_length_option(args, format_op);
	n1 = _abs(n);
	is_negative = n < 0;
	if (is_negative)
		printed_chars += _putchar('-');
	else
		printed_chars += int_apply_flag_option(format_op);
	for (p = digit_part(n1); p != 0; p /= 10)
		printed_chars += _putchar((n1 / p) % 10 + '0');
	return (printed_chars);
}
