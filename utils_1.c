#include "main.h"

/**
 * set_flag - sets supported flags
 * @format: given format, used for format specification
 * @current_idx: current index to iterate the format from
 * @format_op: format options
 *
 * Return: 1 if it contains flags, 0 (otherwise)
 */
short set_flag(const char *format, int *current_idx, format_op_t *format_op)
{
	int i, is_flag = 1, has_seen_flag = 0;
	char flags[] = "#0- +'I";

	(void)format_op;
	while (format[(*current_idx)] && is_flag)
	{
		for (i = 0; flags[i]; i++)
		{
			is_flag = (flags[i] == format[*current_idx]);
			if (is_flag)
			{
				switch (format[*current_idx])
				{
				case '+':
					format_op->plus = 1;
					break;
				case ' ':
					format_op->space = 1;
					break;
				case '#':
					format_op->hash = 1;
					break;
				}
				break;
			}
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
 * set_field - sets the field
 * @format: given format, used for format specification
 * @current_idx: current index to iterate the format from
 * @format_op: format options
 *
 * Return: 1 if it contains field, 0 (otherwise)
 */
short set_field(const char *format, int *current_idx, format_op_t *format_op)
{
	int is_num = 1, has_seen_field = 0;
	int c;

	(void)format_op;
	while (format[(*current_idx)] && is_num)
	{
		c = format[*current_idx] - '0';
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
 * set_precision - sets the precision
 * @format: given format, used for format specification
 * @current_idx: current index to iterate the format from
 * @format_op: format options
 *
 * Return: 1 if it contains precision, 0 (otherwise)
 */
short set_precision(const char *format, int *current_idx,
					format_op_t *format_op)
{
	short is_precision;

	(void)format_op;
	if (format[(*current_idx)] != '.')
		return (0);
	++(*current_idx);
	is_precision = set_field(format, current_idx, format_op);
	if (!is_precision)
		--(*current_idx);
	return (is_precision);
}

/**
 * set_length - sets the length
 * @format: given format, used for format specification
 * @current_idx: current index to iterate the format from
 * @format_op: format options
 *
 * Return: 1 if it contains length, 0 (otherwise)
 */
short set_length(const char *format, int *current_idx, format_op_t *format_op)
{
	int i, is_length = 0;
	char length_mod[] = "hlqLjzZt", current, next;

	(void)format_op;
	for (i = 0; length_mod[i]; i++)
	{
		current = format[*current_idx];
		is_length = (length_mod[i] == current);
		if (is_length)
		{
			switch (current)
			{
			case 'l':
				format_op->_long = 1;
				break;
			case 'h':
				format_op->_short = 1;
				break;
			}
			break;
		}
	}
	next = format[*current_idx];
	if (is_length)
		(*current_idx)++;
	if (is_length && IS_H_OR_L(current) && IS_H_OR_L(next))
		(*current_idx)++;
	return (is_length);
}

/**
 * set_format_option - sets the flag, field, precision and length
 * @format: given format, used for format specification
 * @current_idx: current index to iterate the format from
 * @format_op: format options
 *
 * Return: 1 if it contains one of the options, 0 (otherwise)
 */
short set_format_option(const char *format, int *current_idx,
					format_op_t *format_op)
{
	return (set_flag(format, current_idx, format_op) ||
			set_field(format, current_idx, format_op) ||
			set_precision(format, current_idx, format_op) ||
			set_length(format, current_idx, format_op));
}
