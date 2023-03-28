#include "main.h"

/**
 * main - a program to check the buffer
 *
 * Return: 0
 */
int main(void)
{
	int len = 0;

	/* ------------------------- */
	/* Outputs for 0 < ASCII value > 32 and >= 127 */
	printf("_____ 0 < ASCII value > 32 and >= 12\n");
	len = _printf("ASCII Hex: %S\n",  "Best[\0] School");
	_printf("len1 = %d\n", len);

	len = _printf("ASCII Hex: %S\n",  "Best[\n]School");
	_printf("len1 = %d\n", len);

	len = _printf("ASCII Hex: %S\n",  "Best[\a]School");
	_printf("len1 = %d\n", len);

	len = _printf("ASCII Hex: %S\n",  "Normal[\r]String[\t]With[\v]Many[\f]Non printable");
	_printf("len1 = %d\n", len);

	len = _printf("ASCII Hex: %S\n", "[\x7F]");
	_printf("len1 = %d\n", len);

	len = _printf("ASCII Hex: %S\n",  "Best[\x1F] School");
	_printf("len1 = %d\n", len);

	len = _printf("ASCII Hex: %S\n", "[\x90]");
	_printf("len1 = %d\n", len);

	len = _printf("ASCII Hex: %S\n");
	_printf("len1 = %d\n", len);


	return (0);
}
