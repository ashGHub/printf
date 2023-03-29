#include "main.h"

/**
 * get_unsigned_string - get unsigned string in reverse
 * @num: unsigned number to print
 * @idx: current index of the unsigned string
 *
 * Return: unsigned string in reverse
 */
char *get_unsigned_string(unsigned int num, int *idx)
{
	unsigned int i = *idx, temp = 0;
	char *unsigned_str;

	unsigned_str = malloc(12);
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
	unsigned int num = va_arg(args, int);
	char *unsigned_str;

	(void)format_op;
	(void)format;
	(void)idx;
	unsigned_str = get_unsigned_string(num, &i);
	if (unsigned_str == NULL)
		return (-1);
	for (j = i; j >= 0; j--)
		printed_chars += _putchar(unsigned_str[j]);
	free(unsigned_str);
	return (printed_chars);
}
