#include "main.h"

/**
 * length_option_signed - a function that applys length modifier option
 * @args: arguments passed
 * @format_op: format options
 *
 * Return: converted number
*/
long length_option_signed(va_list args, format_op_t format_op)
{
	if (format_op._short)
		return ((short)va_arg(args, int));
	if (format_op._long)
		return ((long)va_arg(args, long));
	return ((long)va_arg(args, int));
}

/**
 * length_option_unsigned - a function that applys length modifier option
 * @args: arguments passed
 * @format_op: format options
 *
 * Return: converted number
*/
unsigned long length_option_unsigned(va_list args, format_op_t format_op)
{
	if (format_op._short)
		return ((unsigned short)va_arg(args, unsigned int));
	if (format_op._long)
		return ((unsigned long)va_arg(args, unsigned long));
	return ((unsigned int)va_arg(args, unsigned int));
}
