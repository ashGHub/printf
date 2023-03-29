#include "main.h"

/**
 * get_ascii_hex_string - gets two digit hex ascii padded with zero
 * @ch: character to get ascii hex
 *
 * Return: ascii hex string
 */
char *get_ascii_hex_string(char ch)
{
	short base = 16, max_hex_ascii_digit = 2;
	int i = 0, quo = 0;
	char *current_hex = "0123456789ABCDEF", *hex;

	hex = malloc(max_hex_ascii_digit * sizeof(char));
	if (hex == NULL)
		return (NULL);
	hex[1] = '0'; /* padding for numbers less than 16 */
	for (quo = ch; quo; quo /= base, i++)
		hex[i] = current_hex[(quo % base)];
	return (hex);
}

/**
 * print_ascii_hex - prints the ASCII code value of the non printable
 *					character in hexadecimal format
 * @non_printable: the non printable character
 *
 * Return: number of characters printed
 */
int print_ascii_hex(char non_printable)
{
	int max_hex_ascii_digit = 2;
	int j, printed_chars = 0;
	char *hex_delimiter = "\\x", *hex;

	hex = get_ascii_hex_string(non_printable);
	if (hex == NULL)
		return (-1);
	printed_chars += _puts(hex_delimiter);
	for (j = max_hex_ascii_digit - 1; j >= 0; j--)
		printed_chars += _putchar(hex[j]);
	free(hex);
	return (printed_chars);
}

/**
 * is_printable_char - checks if a character is printable or not
 * @c: character to check
 *
 * Return: 1 if the character is printable, 0 otherwise
 */
short is_printable_char(char c)
{
	return (c >= 32 && c < 127);
}

/**
 * print_custom_string - a function that prints a custom string, if the
 *						given string contains non printable characters
 * @format: given format, used for format specification
 * @idx: current index for the format
 * @args: arguments passed
 * @format_op: format options
 *
 * Return: number of characters printed
 */
int print_custom_string(const char *format, int idx, va_list args,
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
	{
		if (is_printable_char(str[i]))
			printed_chars += _putchar(str[i]);
		else
			printed_chars += print_ascii_hex(str[i]);
	}
	return (printed_chars);
}
