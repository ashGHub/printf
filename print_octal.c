#include "main.h"

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
	octal = get_octal_string(num, &i);
	if (octal == NULL)
		return (-1);
	if (format_op.hash && num != 0)
		printed_chars += _putchar('0');
	for (j = i; j >= 0; j--)
		printed_chars += _putchar(octal[j]);
	free(octal);
	return (printed_chars);
}
