#include "main.h"

/**
 * print_flags_in_order - prints the flags in the right order
 * @format_op: format options
 *
 * Return: number of printed characters
 */
int print_flags_in_order(format_op_t format_op)
{
	int printed_chars = 0;

	if (format_op.hash)
		printed_chars += _putchar('#');
	if (format_op.plus)
		printed_chars += _putchar('+');
	else if (format_op.space)
		printed_chars += _putchar(' ');
	return (printed_chars);
}

/**
 * can_print_char -  checks if a character is going to be printed
 * @current_ch: character to check
 * @format_op: format options
 *
 * Return: 1 if the character is going to be printed, 0 otherwise
 */
short can_print_char(char current_ch, format_op_t format_op)
{
	char space = ' ', _short = 'h', _long = 'l';
	short is_space_allowed;
	short is_length_option = format_op._short || format_op._long;
	short is_length_char = (current_ch == _short || current_ch == _long);

	is_space_allowed = current_ch == space && !format_op.plus;
	is_length_option = is_length_option && is_length_char;
	return (is_space_allowed || (!is_length_option && current_ch != space));
}

/**
 * print_unsupported_format - a function that prints invalid format
 * @format: given format, used for format specification
 * @start_idx: start of invalid format
 * @end_idx: end of invalid format
 * @format_op: format options
 *
 * Return: number of characters printed
 */
int print_unsupported_format(const char *format, int *start_idx, int end_idx,
				format_op_t format_op)
{
	int printed_chars = 0;
	char unsupported_specifier = format[end_idx];

	(*start_idx) = end_idx;
	printed_chars += _putchar('%');
	printed_chars += print_flags_in_order(format_op);
	printed_chars += _putchar(unsupported_specifier);
	return (printed_chars);
}
