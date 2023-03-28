#include <stdio.h>
#include "main.h"

/**
 * main - a program to test the %p conversion specifier
 *
 * Return: 0 (on success)
 */
int main(void)
{
	int len;
	void *addrs;
	unsigned long hex_num;
	addrs = &len;
	/* ------------------------------------------------------ */
	/* Normal output */
	printf("______ Normal output\n");
	len = _printf("_printf [%p]\n", addrs);
	_printf("_printf len = %d\n", len);
	len = printf("printf [%p]\n", addrs);
	printf("printf len = %d\n", len);

	len = _printf("_printf [%p]\n");
	_printf("_printf len = %d\n", len);
	len = printf("printf [%p]\n");
	printf("printf len = %d\n", len);

	len = _printf("_printf [%p]\n", NULL);
	_printf("_printf len = %d\n", len);
	len = printf("printf [%p]\n", NULL);
	printf("printf len = %d\n", len);

	/* ------------------------------------------------------ */
	/* Unknown */
	printf("______ Unknown\n");
	printf("[%p]\n", (void *)0x7fffffffdfdc);
	hex_num = (unsigned long)(void *)0x7fffffffdfdc;
	printf("[%lu]\n", hex_num);
	printf("[%p]\n");
	printf("[%p]\n", NULL);

	return (0);
}
