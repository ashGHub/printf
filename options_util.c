#include "main.h"

/**
 * convert_to_signed - a function that applys length modifier option
 * @n: number to convert to the supported length
 * @format_op: format options
 *
 * Return: converted number
*/
long int convert_to_signed(long int n, format_op_t format_op)
{
	if (format_op._short)
		return ((short)n);
	if (format_op._long)
		return (n);
	return ((int)n);
}

/**
 * convert_to_unsigned - a function that applys length modifier option
 * @n: number to convert to the supported length
 * @format_op: format options
 *
 * Return: converted number
*/
unsigned long convert_to_unsigned(unsigned long n, format_op_t format_op)
{
	if (format_op._short)
		return ((unsigned short)n);
	if (format_op._long)
		return (n);
	return ((unsigned int)n);
}
