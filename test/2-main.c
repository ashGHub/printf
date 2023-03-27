#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int len;

	len = _printf("G:[%b]\nE:[-1100010]\n", -98);
	_printf("G:[%b]\nE:[11111111111111111111111111111111]\n", 4294967295);
	len = _printf("G:[%b]\nE:[1100010]\n", 98);
	_printf("len = %d\n", len);
	len = _printf("G:[%b]\nE:[1111101000]\n", 1000);
	_printf("len = %d\n", len);
	_printf("G:[%b]\nE:[1100001101010000]\n", 50000);
	_printf("G:[%b]\nE:[11000011010100000]\n", 100000);
	_printf("G:[%b]\nE:[111101000010010000000]\n", 2000000);
	_printf("G:[%b]\nE:[0]\n", 0);
	_printf("G:[%b]\nE:[no idea]\n");
	return (0);
}