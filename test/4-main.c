#include "main.h"

/**
 * main - a program to check the buffer
 *
 * Return: 0
 */
int main(void)
{
	int len1 = 0;
	int len2 = 0;

	/* ------------------------- */
	/* Normal output */
	printf("_____ Normal output\n");
	len1 = _printf("Hello\n");
	len2 = printf("Hello\n");
	_printf("len1 = %d\n", len1);
	printf("len1 = %d\n", len2);

	/* ------------------------- */
	/* Character outputs */
	printf("_____ Character output\n");
	len1 = _printf("Character:[%c]\n", 'P');
	len2 = printf("Character:[%c]\n", 'P');
	_printf("len1 = %i\n", len1);
	printf("len1 = %i\n", len2);

	/* ------------------------- */
	/* String outputs */
	printf("_____ String output\n");
	len1 = _printf("String:[%s]\n", "This is a string");
	len2 = printf("String:[%s]\n", "This is a string");
	_printf("len1 = %i\n", len1);
	printf("len1 = %i\n", len2);

	/* ------------------------- */
	/* Binary outputs */
	printf("_____ Binary output\n");
	len1 = _printf("G:[%b]\nE:[11111111111111111111111110011110]\n", -98);
	_printf("len = %d\n", len1);
	len1 = _printf("G:[%b]\nE:[11111111111111111111111111111111]\n", 4294967295);
	_printf("len = %d\n", len1);
	len1 = _printf("G:[%b]\nE:[1100010]\n", 98);
	_printf("len = %d\n", len1);
	len1 = _printf("G:[%b]\nE:[1111101000]\n", 1000);
	_printf("len = %d\n", len1);


	/* ------------------------- */
	/* Hexadecimal(lowercase) outputs */
	printf("_____ Hexadecimal(lowercase) output\n");
	len1 = _printf("Hex(lower): [%x]\n",  0);
	len2 = printf("Hex(lower): [%x]\n",  0);
	_printf("len1 = %i\n", len1);
	printf("len1 = %i\n", len2);
	len1 = _printf("Hex(lower): [%x]\n");
	len2 = printf("Hex(lower): [%x]\n");
	_printf("len1 = %i\n", len1);
	printf("len1 = %i\n", len2);
	len1 = _printf("Hex(lower): [%x]\n", 4294967295);
	len2 = printf("Hex(lower): [%x]\n",  4294967295);
	_printf("len1 = %i\n", len1);
	printf("len1 = %i\n", len2);

	/* ------------------------- */
	/* Hexadecimal(uppercase) outputs */
	printf("_____ Hexadecimal(uppercase) output\n");
	len1 = _printf("Hex(lower): [%X]\n",  0);
	len2 = printf("Hex(lower): [%X]\n",  0);
	_printf("len1 = %i\n", len1);
	printf("len1 = %i\n", len2);
	len1 = _printf("Hex(lower): [%X]\n");
	len2 = printf("Hex(lower): [%X]\n");
	_printf("len1 = %i\n", len1);
	printf("len1 = %i\n", len2);
	len1 = _printf("Hex(lower): [%X]\n", 4294967295);
	len2 = printf("Hex(lower): [%X]\n",  4294967295);
	_printf("len1 = %i\n", len1);
	printf("len1 = %i\n", len2);

	return (0);
}
