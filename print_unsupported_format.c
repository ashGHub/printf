#include "main.h"

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
	int i, printed_chars = 0;
	char current_ch, unsupported_specifier = format[end_idx];

	printed_chars += _putchar('%');
	for (i = *start_idx ; i < end_idx; i++, (*start_idx)++)
	{
		current_ch = format[i];
		if (can_print_char(current_ch, format_op))
			printed_chars += _putchar(current_ch);
	}
	printed_chars += _putchar(unsupported_specifier);
	return (printed_chars);
}
