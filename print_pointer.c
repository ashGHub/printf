#include "main.h"

/**
 * print_pointer - a function that prints a pointer type
 * @format: given format, used for format specification
 * @idx: current index for the format
 * @args: arguments passed
 * @format_op: format options
 *
 * Return: number of characters printed
 */
int print_pointer(const char *format, int idx, va_list args,
					format_op_t format_op)
{
	int printed_chars = 0;
	unsigned long num;
	char *pointer_delimiter = "0x";
	void *address = va_arg(args, void *);

	(void)format;
	(void)idx;
	if (address == NULL)
		return (_puts("(nil)"));
	num = (unsigned long)address;
	if (format_op.plus)
		printed_chars += _putchar('+');
	else if (format_op.space)
		printed_chars += _putchar(' ');
	printed_chars += _puts(pointer_delimiter);
	printed_chars += write_hex(SMALL_HEX, num);
	return (printed_chars);
}
