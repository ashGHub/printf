#include "main.h"

/**
 * print_string - a function that prints a string type
 * @format: given format, used for format specification
 * @idx: current index for the format
 * @args: arguments passed
 * @format_op: format options
 *
 * Return: number of characters printed
 */
int print_string(const char *format, int idx, va_list args,
					format_op_t format_op)
{
	int i, printed_chars = 0;
	char *str = va_arg(args, char *);

	(void)format;
	(void)format_op;
	(void)idx;
	if (str == NULL)
		str = "(null)";
	for (i = 0; str && str[i]; i++)
		printed_chars += _putchar(str[i]);
	return (printed_chars);
}
