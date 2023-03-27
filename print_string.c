#include "main.h"

/**
 * print_string - a function that prints a string type
 * @format: given format, used for format specification
 * @idx: pointer to current index for the format
 * @args: arguments passed
 *
 * Return: number of characters printed
 */
int print_string(const char *format, int *idx, va_list args)
{
	int i, printed_chars = 0, printed = 0;
	char *str = va_arg(args, char *);

	(void)format;
	for (i = 0; str && str[i]; i++)
	{
		printed = _putchar(str[i]);
		if (printed == -1)
			return (-1);
		printed_chars += printed;
	}
	(*idx)++;
	return (printed_chars);
}
