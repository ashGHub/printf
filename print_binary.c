#include "main.h"

/**
 * get_binary_string - get binary string in reverse
 * @num: number to convert to binary
 * @idx: current index of the binary string
 *
 * Return: binary string in reverse
 */
char *get_binary_string(unsigned int num, int *idx)
{
	unsigned int size = sizeof(unsigned int) * 8;
	unsigned int i = *idx, quo = 0;
	char *binary;

	binary = malloc(size * sizeof(char));
	if (binary == NULL)
		return (NULL);
	if (num == 0)
	{
		binary[i] = '0';
		return (binary);
	}
	for (i = *idx, quo = num; quo; quo /= 2, i++, ++(*idx))
		binary[i] = (quo % 2) + '0';
	--(*idx);
	return (binary);
}

/**
 * print_binary - a function that prints a binary type
 * @format: given format, used for format specification
 * @idx: pointer to current index for the format
 * @args: arguments passed
 *
 * Return: number of characters printed
 */
int print_binary(const char *format, int *idx, va_list args)
{
	int i = 0, j, printed_chars = 0, printed = 0;
	unsigned int num = va_arg(args, int);
	char *binary;

	(void)format;
	binary = get_binary_string(num, &i);
	if (binary == NULL)
		return (-1);
	for (j = i; j >= 0; j--)
	{
		printed = _putchar(binary[j]);
		if (printed == -1)
		{
			free(binary);
			return (-1);
		}
		printed_chars += printed;
	}
	(*idx)++;
	free(binary);
	return (printed_chars);
}
