#include "main.h"

/**
 * octal_length_option - a function that applies length modifier option
 * @args: arguments passed
 * @format_op: format options
 *
 * Return: converted number
*/
unsigned long octal_length_option(va_list args, format_op_t format_op)
{
	if (format_op._short)
		return ((unsigned short)va_arg(args, unsigned int));
	if (format_op._long)
		return ((unsigned long)va_arg(args, unsigned long));
	return ((unsigned long int)va_arg(args, int));
}

/**
 * octal_apply_flag_option - a function that applies flag options to integers
 * @num: number to check before applying option
 * @format_op: format options
 *
 * Return: number of printed characters
 */
int octal_apply_flag_option(unsigned long int num, format_op_t format_op)
{
	int printed_chars = 0;

	if (format_op.hash && num != 0)
		printed_chars += _putchar('0');
	return (printed_chars);
}

/**
 * get_octal_string - get octal string in reverse
 * @num: number to convert to octal
 * @idx: current index of the octal string
 *
 * Return: octal string in reverse
 */
char *get_octal_string(unsigned long int num, int *idx)
{
	short base = 8;
	unsigned long int i = *idx, max_octal_digit = 23, quo = 0;
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
	unsigned long int num;
	char *octal;

	(void)format;
	(void)idx;
	num = octal_length_option(args, format_op);
	octal = get_octal_string(num, &i);
	if (octal == NULL)
		return (-1);
	printed_chars += octal_apply_flag_option(num, format_op);
	for (j = i; j >= 0; j--)
		printed_chars += _putchar(octal[j]);
	free(octal);
	return (printed_chars);
}
