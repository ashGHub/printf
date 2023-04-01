#include "main.h"

/**
 * unsigned_length_option - a function that applys length modifier option
 * @args: arguments passed
 * @format_op: format options
 *
 * Return: converted number
*/
unsigned long unsigned_length_option(va_list args, format_op_t format_op)
{
	if (format_op._short)
		return ((unsigned short)va_arg(args, int));
	if (format_op._long)
		return ((unsigned long)va_arg(args, unsigned long));
	return ((unsigned long int)va_arg(args, int));
}

/**
 * get_unsigned_string - get unsigned string in reverse
 * @num: unsigned number to print
 * @idx: current index of the unsigned string
 *
 * Return: unsigned string in reverse
 */
char *get_unsigned_string(unsigned long int num, int *idx)
{
	unsigned long int i = *idx, temp = 0;
	short max_unsigned_long_digits = 20;
	char *unsigned_str;

	unsigned_str = malloc(max_unsigned_long_digits);
	if (unsigned_str == NULL)
		return (NULL);
	if (num == 0)
	{
		unsigned_str[i] = '0';
		return (unsigned_str);
	}
	for (i = *idx, temp = num; temp; temp /= 10, i++, ++(*idx))
		unsigned_str[i] = (temp % 10) + '0';
	--(*idx);
	return (unsigned_str);
}

/**
 * print_unsigned - a function that prints an unsigned integer
 * @format: given format, used for format specification
 * @idx: current index for the format
 * @args: arguments passed
 * @format_op: format options
 *
 * Return: number of characters printed
 */
int print_unsigned(const char *format, int idx, va_list args,
					format_op_t format_op)
{
	int i = 0, j, printed_chars = 0;
	unsigned long int num;
	char *unsigned_str;

	(void)format_op;
	(void)format;
	(void)idx;
	num = unsigned_length_option(args, format_op);
	unsigned_str = get_unsigned_string(num, &i);
	if (unsigned_str == NULL)
		return (-1);
	for (j = i; j >= 0; j--)
		printed_chars += _putchar(unsigned_str[j]);
	free(unsigned_str);
	return (printed_chars);
}
