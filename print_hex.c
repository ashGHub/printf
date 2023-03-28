#include "main.h"

/**
 * get_hex_string - get hex string in reverse
 * @num: number to convert to hex
 * @x: hex type, small or capital
 * @idx: current index of the hex string
 *
 * Return: hex string in reverse
 */
char *get_hex_string(unsigned int num, char x, int *idx)
{
	short base = 16;
	unsigned int i = *idx, max_hex_digit = 8, quo = 0;
	char small_hexes[16] = "0123456789abcdef";
	char capital_hexes[16] = "0123456789ABCDEF";
	char small = 'x', *current_hex, *hex;

	current_hex = x == small ? small_hexes : capital_hexes;
	hex = malloc(max_hex_digit * sizeof(char));
	if (hex == NULL)
		return (NULL);
	if (num == 0)
	{
		hex[i] = '0';
		return (hex);
	}
	for (i = *idx, quo = num; quo; quo /= base, i++, ++(*idx))
		hex[i] = current_hex[(quo % base)];
	--(*idx);
	return (hex);
}

/**
 * print_hex - a function that prints hex type
 * @format: given format, used for format specification
 * @idx: pointer to current index for the format
 * @args: arguments passed
 *
 * Return: number of characters printed
 */
int print_hex(const char *format, int *idx, va_list args)
{
	int i = 0, j, printed_chars = 0, printed = 0;
	unsigned int num = va_arg(args, int);
	char *hex;

	hex = get_hex_string(num, format[*idx], &i);
	if (hex == NULL)
		return (-1);
	for (j = i; j >= 0; j--)
	{
		printed = _putchar(hex[j]);
		if (printed == -1)
		{
			free(hex);
			return (-1);
		}
		printed_chars += printed;
	}
	(*idx)++;
	free(hex);
	return (printed_chars);
}
