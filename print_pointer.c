#include "main.h"

/**
 * print_pointer - a function that prints a pointer type
 * @format: given format, used for format specification
 * @idx: pointer to current index for the format
 * @args: arguments passed
 *
 * Return: number of characters printed
 */
int print_pointer(const char *format, int *idx, va_list args)
{
	int printed_chars = 0, printed = 0;
	unsigned long num;
	char *pointer_delimiter = "0x";
	void *address = va_arg(args, void *);

	(void)format;
	if (address == NULL)
		return (_puts("(nil)"));
	num = (unsigned long)address;
	printed = _puts(pointer_delimiter);
	if (printed == -1)
		return (-1);
	printed_chars += printed;
	printed = write_hex(SMALL_HEX, num);
	if (printed == -1)
		return (-1);
	(*idx)++;
	return (printed_chars);
}
