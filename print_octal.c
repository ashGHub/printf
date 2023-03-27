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
 * @idx: pointer to current index for the format
 * @args: arguments passed
 *
 * Return: number of characters printed
 */
int print_octal(const char *format, int *idx, va_list args)
{
	int i = 0, j, printed_chars = 0, printed = 0;
	unsigned int num = va_arg(args, int);
	char *octal;

	(void)format;
	octal = get_octal_string(num, &i);
	if (octal == NULL)
		return (-1);
	for (j = i; j >= 0; j--)
	{
		printed = _putchar(octal[j]);
		if (printed == -1)
		{
			free(octal);
			return (-1);
		}
		printed_chars += printed;
	}
	(*idx)++;
	free(octal);
	return (printed_chars);
}
