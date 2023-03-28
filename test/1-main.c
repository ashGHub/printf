#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	/* Decimal inputs */
	printf("_______ Integer inputs\n");
	_printf("Integer: [%d]\n", 39);
	printf("Integer: [%d]\n", 39);
	
	_printf("Integer: [%d]\n", INT_MAX);
	printf("Integer: [%d]\n", INT_MAX);
	_printf("Integer: [%d]\n", INT_MIN);
	printf("Integer: [%d]\n", INT_MIN);
	

	/* Integer inputs */
	_printf("Integer: [%i]\n", 39);
	printf("Integer: [%i]\n", 39);
	
	_printf("Integer: [%i]\n", INT_MAX);
	printf("Integer: [%i]\n", INT_MAX);
	_printf("Integer: [%i]\n", INT_MIN);
	printf("Integer: [%i]\n", INT_MIN);

	return (0);
}
