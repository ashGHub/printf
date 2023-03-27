#include "main.h"

/**
 * is_flag - ignores all flags
 * @format: given format, used for format specification
 * @current_idx: current index to iterate the format from
 *
 * Return: 1 if it contains flags, 0 (otherwise)
 */
short is_flag(const char *format, int *current_idx)
{
	int i, is_flag = 1, has_seen_flag = 0;
	char flags[] = "#0- +'I";

	while (format[(*current_idx)] && is_flag)
	{
		for (i = 0; flags[i]; i++)
		{
			is_flag = (flags[i] == format[(*current_idx)]);
			if (is_flag)
				break;
		}
		if (is_flag)
		{
			has_seen_flag = 1;
			(*current_idx)++;
		}
	}
	return (has_seen_flag);
}

/**
 * is_field - ignores field
 * @format: given format, used for format specification
 * @current_idx: current index to iterate the format from
 *
 * Return: 1 if it contains field, 0 (otherwise)
 */
short is_field(const char *format, int *current_idx)
{
	int is_num = 1, has_seen_field = 0;
	int c;

	while (format[(*current_idx)] && is_num)
	{
		c = format[(*current_idx)] - '0';
		is_num = (c >= 0 && c <= 9);
		if (is_num)
		{
			has_seen_field = 1;
			(*current_idx)++;
		}
	}
	return (has_seen_field);
}

/**
 * is_precision - ignores precision
 * @format: given format, used for format specification
 * @current_idx: current index to iterate the format from
 *
 * Return: 1 if it contains precision, 0 (otherwise)
 */
short is_precision(const char *format, int *current_idx)
{
	short is_precision;

	if (format[(*current_idx)] != '.')
		return (0);
	++(*current_idx);
	is_precision = is_field(format, current_idx);
	if (!is_precision)
		--(*current_idx);
	return (is_precision);
}

/**
 * is_length - ignores length
 * @format: given format, used for format specification
 * @current_idx: current index to iterate the format from
 *
 * Return: 1 if it contains length, 0 (otherwise)
 */
short is_length(const char *format, int *current_idx)
{
	int i, is_length = 0;
	char length_mod[] = "hlqLjzZt", current, next;

	for (i = 0; length_mod[i]; i++)
	{
		current = format[(*current_idx)];
		is_length = (length_mod[i] == current);
		if (is_length)
			break;
	}
	next = format[*current_idx + 1];
	if (is_length && IS_H_OR_L(current) && IS_H_OR_L(next))
		(*current_idx)++;
	return (is_length);
}

/**
 * is_format_option - ignores flag, field, precision and length
 * @format: given format, used for format specification
 * @current_idx: current index to iterate the format from
 *
 * Return: 1 if it contains one of the options, 0 (otherwise)
 */
short is_format_option(const char *format, int *current_idx)
{
	return (is_flag(format, current_idx) ||
			is_field(format, current_idx) ||
			is_precision(format, current_idx) ||
			is_length(format, current_idx));
}

