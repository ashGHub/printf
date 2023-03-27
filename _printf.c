#include "main.h"

/**
 * _printf - a function that produces output according to a format
 * @format: format to print
 *
 * Return: number of printed characters
 */
int _printf(const char *format, ...)
{
	int i, printed_chars = 0, printed = 0;
	va_list args;

	if (format == NULL)
		return (-1);
	va_start(args, format);
	for (i = 0; format && format[i]; i++)
	{
		if (format[i] != '%')
			printed = _putchar(format[i]);
		else
			printed = print_conversion_specifier(format, &i, args);
		if (printed == -1)
			return (-1);
		printed_chars += printed;
	}
	va_end(args);
	return (printed_chars);
}

/**
 * get_print_function - a function to get the appropriate format handler
 * @c: format type
 *
 * Return: pointer to the format handling function, NULL (otherwise)
 */
int (*get_print_function(const char *c))(const char *, int *, va_list)
{
	format_t print_funcs[] = {
		{"c", print_char},
		{"s", print_string},
		{"d", print_integer},
		{"i", print_integer},
		{NULL, NULL}
	};
	int i = 0;

	while (print_funcs[i].type && *(print_funcs[i].type) != *c)
		i++;
	return (print_funcs[i].handle);
}

/**
 * get_specifier_idx - gets the index of the next format specifier
 * @format: given format, used for format specification
 * @current_idx: current index to iterate the format from
 *
 * Return: returns the index of the format specifier, -1 (otherwise)
 */
int get_specifier_idx(const char *format, int current_idx)
{
	const int not_found = -1;

	while (is_format_option(format, &current_idx))
		current_idx++;
	if (is_supported_specifier(format, current_idx))
		return (current_idx);
	return (not_found);
}

/**
 * print_conversion_specifier - a function to print the format
 *								based on a conversion specifier
 * @format: given format, used for format specification
 * @idx: pointer to current index for the format
 * @args: arguments passed
 *
 * Return: number of character printed
 */
int print_conversion_specifier(const char *format, int *idx, va_list args)
{
	int i = ++(*idx), sp_idx = -1;
	int (*print)(const char *, int *, va_list);

	if (format[i] == '\0')
		return (-1);
	if (format[i] == '%')
		return (_putchar('%'));
	sp_idx = get_specifier_idx(format, i);
	if (sp_idx == -1)
	{
		--(*idx);
		return (_putchar('%'));
	}
	(*idx) = sp_idx;
	print = get_print_function(format + sp_idx);
	return (print(format, &i, args));
}

/**
 * is_supported_specifier - a function that check if the current
 *							character is supported conversion specifier
 * @format: the given format string
 * @current_idx: current index location in the format string
 *
 * Return: 1 if it is supported specifier, 0 (otherwise)
 */
short is_supported_specifier(const char *format, int current_idx)
{
	char specifier[] = "csdi";
	int i, is_specifier = 0;

	for (i = 0; specifier[i]; i++)
	{
		is_specifier = (format[current_idx] == specifier[i]);
		if (is_specifier)
			break;
	}
	return (is_specifier);
}
