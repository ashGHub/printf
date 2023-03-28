#include "main.h"

/**
 * _putchar - a function to print a character to stdout
 * @ch: character to print
 *
 * Return: number of character printed
 */
int _putchar(char ch)
{
	static int counter;
	static char buffer[BUFFER_SIZE];
	int printed_chars = 0;

	if (ch == BUFFER_FLUSH || counter == BUFFER_SIZE)
	{
		printed_chars = write(1, buffer, counter);
		counter = 0;
	}
	if (ch != BUFFER_FLUSH)
		buffer[counter++] = ch;
	return (printed_chars);
}

/**
 * _puts - a function that writes a string to stdout
 * @str: a given string
 *
 * Return: number of characters printed
 */
int _puts(char *str)
{
	int printed_chars = 0, i = 0;

	while (str[i])
		printed_chars += _putchar(str[i++]);
	return (printed_chars);
}

/**
 * _flush - flushes the remaning buffer content
 *
 * Return: number of printed characters
 */
int _flush(void)
{
	return (_putchar(BUFFER_FLUSH));
}
