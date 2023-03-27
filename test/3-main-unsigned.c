#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int len;

	_printf("_printf _______\n");
	len = _printf("[%u]\n", 98);
	_printf("len = %d\n", len);

	printf("printf _______\n");
	len = printf("[%u]\n", 98);
	printf("len = %d\n", len);

	_printf("_printf _______\n");
	len = _printf("[%u]\n", 98);
	
	printf("printf _______\n");
	len = printf("[%u]\n", 98);

	_printf("_printf _______\n");
	len = _printf("[%u]\n", -98);
	_printf("len = %d\n", len);

	printf("printf _______\n");
	len = printf("[%u]\n", -98);
	printf("len = %d\n", len);

	_printf("_printf _______\n");
	_printf("[%u]\n", 1000);
	
	printf("printf _______\n");
	printf("[%u]\n", 1000);
	
	_printf("_printf _______\n");
	_printf("[%u]\n", 50000);

	printf("printf _______\n");
	printf("[%u]\n", 50000);

	_printf("_printf _______\n");
	_printf("[%u]\n", 100000);

	printf("printf _______\n");
	printf("[%u]\n", 100000);

	_printf("_printf _______\n");
	_printf("[%u]\n", 2000000);

	printf("printf _______\n");
	printf("[%u]\n", 2000000);

	_printf("_printf _______\n");
	_printf("[%u]\n", 4294967295);

	printf("printf _______\n");
	printf("[%u]\n", 4294967295);

	_printf("_printf _______\n");
	_printf("G:[%u]\nE:[0]\n", 0);

	printf("printf _______\n");
	printf("G:[%u]\nE:[0]\n", 0);

	_printf("_printf _______\n");
	_printf("G:[%u]\nE:[no idea]\n");

	printf("printf _______\n");
	printf("G:[%u]\nE:[no idea]\n");

	return (0);
}
