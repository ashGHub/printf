#include <stdio.h>
/* #include "main.h" */

/**
 * main - a program to test the %p conversion specifier
 *
 * Return: 0 (on success)
 */
int main(void)
{
	int len = 0;
	/* ------------------------------------------------------ */
	/* Normal output */
/* 	printf("______ Normal positive output _printf\n");
	len = _printf("_printf [%+d]\n", 72);
	printf("_printf len = %d\n", len);
	len = _printf("_printf [% d]\n", 72);
	printf("_printf len = %d\n", len);
	len = _printf("_printf [%#d]\n", 72);
	printf("_printf len = %d\n", len);
 */
	printf("______ Normal positive output printf\n");
	len = printf("printf [%hd]\n", 50);
	printf("printf len = %d\n", len);
	len = printf("printf [%hd]\n", 40000);
	printf("printf len = %d\n", len);
	len = printf("printf [%hd]\n", -50);
	printf("printf len = %d\n", len);
	len = printf("printf [%hd]\n", -40000);
	printf("printf len = %d\n", len);
	len = printf("printf [%hd]\n", 32768);
	printf("printf len = %d\n", len);
	len = printf("printf [%hd]\n", 32767);
	printf("printf len = %d\n", len);

	/* ------------------------------------------------------ */
	/* Unknown */
	printf("______ Unknown\n");

	/* Edge cases */
	printf("______ Edge cases\n");
	
	return (0);
}
