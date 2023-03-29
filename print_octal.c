#include "main.h"

/**
 * octal_apply_flag_option - a function that applies flag options to integers
 * @num: number to check before applying option
 * @format_op: format options
 *
 * Return: number of printed characters
 */
int octal_apply_flag_option(unsigned int num, format_op_t format_op)
{
	int printed_chars = 0;

	if (format_op.hash && num != 0)
		printed_chars += _putchar('0');
	return (printed_chars);
}

/**
 * octal_apply_length_option - a function that applys length modifier option
 * @n: number to convert to the supported length
 * @format_op: format options
 *
 * Return: converted number
*/
unsigned int octal_apply_length_option(unsigned int n, format_op_t format_op)
{
	if (format_op._short)
		return ((unsigned short)n);
	if (format_op._long)
		return ((unsigned long)n);
	return (n);
}

/**
 * get_octal_string - get octal string in reverse
 * @num: number to convert to octal
 * @idx: current index of the octal string
 *
 * Return: octal string in reverse
 */
char *get_octal_string(unsigned int num, int *idx)
{
	short base = 8;
	unsigned int i = *idx, max_octal_digit = 11, quo = 0;
	char *octal;

	octal = malloc(max_octal_digit * sizeof(char));
	if (octal == NULL)
		return (NULL);
	if (num == 0)
	{
		octal[i] = '0';
		return (octal);
	}
	for (i = *idx, quo = num; quo; quo /= base, i++, ++(*idx))
		octal[i] = (quo % base) + '0';
	--(*idx);
	return (octal);
}

/**
 * print_octal - a function that prints octal type
 * @format: given format, used for format specification
 * @idx: current index for the format
 * @args: arguments passed
 * @format_op: format options
 *
 * Return: number of characters printed
 */
int print_octal(const char *format, int idx, va_list args,
				format_op_t format_op)
{
	int i = 0, j, printed_chars = 0;
	unsigned int num = va_arg(args, int);
	char *octal;

	(void)format;
	(void)idx;
	num = octal_apply_length_option(num, format_op);
	octal = get_octal_string(num, &i);
	if (octal == NULL)
		return (-1);
	printed_chars += octal_apply_flag_option(num, format_op);
	for (j = i; j >= 0; j--)
		printed_chars += _putchar(octal[j]);
	free(octal);
	return (printed_chars);
}
