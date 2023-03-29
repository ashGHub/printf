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
 * @idx: current index for the format
 * @args: arguments passed
 * @format_op: format options
 *
 * Return: number of characters printed
 */
int print_binary(const char *format, int idx, va_list args,
					format_op_t format_op)
{
	int i = 0, j, printed_chars = 0;
	unsigned int num = va_arg(args, int);
	char *binary;

	(void)format;
	(void)format_op;
	(void)idx;
	binary = get_binary_string(num, &i);
	if (binary == NULL)
		return (-1);
	for (j = i; j >= 0; j--)
		printed_chars += _putchar(binary[j]);
	free(binary);
	return (printed_chars);
}
