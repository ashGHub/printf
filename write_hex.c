#include "main.h"

/**
 * get_hex_string - get hex string in reverse
 * @num: number to convert to hex
 * @x: hex type, small or capital
 * @idx: current index of the hex string
 *
 * Return: hex string in reverse
 */
char *get_hex_string(unsigned long num, char x, int *idx)
{
	short base = 16;
	unsigned long i = *idx, max_hex_digit = 16, quo = 0;
	char small_hexes[16] = "0123456789abcdef";
	char capital_hexes[16] = "0123456789ABCDEF";
	char *current_hex, *hex;

	current_hex = x == SMALL_HEX ? small_hexes : capital_hexes;
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
 * write_hex - a function that takes a number and prints in hexadecimal
 * @hex_type: hexadecimal format type (lower or upper case)
 * @num: number to be printed in hexadecimal
 *
 * Return: number of characters printed
 */
int write_hex(char hex_type, unsigned long num)
{
	int i = 0, j, printed_chars = 0;
	char *hex;

	hex = get_hex_string(num, hex_type, &i);
	if (hex == NULL)
		return (-1);
	for (j = i; j >= 0; j--)
		printed_chars += _putchar(hex[j]);
	free(hex);
	return (printed_chars);
}
