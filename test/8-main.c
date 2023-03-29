#include <stdio.h>
#include "main.h" 

/**
 * main - a program to test the %p conversion specifier
 *
 * Return: 0 (on success)
 */
int main(void)
{
	int len = 0;

	/* ------------------------------------------------------ */
	/* ------------------------------------------------------ */
	/* Normal output - Integer*/
	printf("______ Normal output - Integer\n");
	len = _printf("_printf [h][%hd]\n", 50);
	printf("_printf len = %d\n", len);
	len = printf("printf [h][%hd]\n", 50);
	printf("printf len = %d\n", len);

	len = _printf("_printf [l][%ld]\n", 50);
	printf("_printf len = %d\n", len);
	len = printf("printf [l][%ld]\n", 50);
	printf("printf len = %d\n", len);
	printf("-------------------------------------\n");

	/* ------------------------------------------------------ */
	/* Edge cases - Integer*/
	printf("______ Edge cases - Integer\n");
	len = _printf("_printf [h][%hd]\n", 0);
	printf("_printf len = %d\n", len);
	len = printf("printf [h][%hd]\n", 0);
	printf("printf len = %d\n", len);

	len = _printf("_printf [l][%ld]\n", 0);
	printf("_printf len = %d\n", len);
	len = printf("printf [l][%ld]\n", 0);
	printf("printf len = %d\n", len);
	printf("--------------------------------------\n");

	len = _printf("_printf [h][%hd]\n", INT_MAX);
	printf("_printf len = %d\n", len);
	len = printf("printf [h][%hd]\n", INT_MAX);
	printf("printf len = %d\n", len);

	len = _printf("_printf [l][%ld]\n", INT_MAX);
	printf("_printf len = %d\n", len);
	len = printf("printf [l][%ld]\n", INT_MAX);
	printf("printf len = %d\n", len);
	printf("---------------------------------------\n");

	len = _printf("_printf [h][%hd]\n", INT_MIN);
	printf("_printf len = %d\n", len);
	len = printf("printf [h][%hd]\n", INT_MIN);
	printf("printf len = %d\n", len);

	len = _printf("_printf [l][%ld]\n", -5);
	printf("_printf len = %d\n", len);
	len = printf("printf [l][%ld]\n", -5);
	printf("printf len = %d\n", len);
	printf("---------------------------------------\n");

	len = _printf("_printf [h][%hd]\n", NULL);
	printf("_printf len = %d\n", len);
	len = printf("printf [h][%hd]\n", NULL);
	printf("printf len = %d\n", len);

	len = _printf("_printf [l][%ld]\n", NULL);
	printf("_printf len = %d\n", len);
	len = printf("printf [l][%ld]\n", NULL);
	printf("printf len = %d\n", len);
	printf("---------------------------------------\n");


	/* ------------------------------------------------------ */
	/* ------------------------------------------------------ */
	/* Normal output - Octal*/
	printf("______ Normal output - Octal\n");
	len = _printf("_printf [h][%ho]\n", 50);
	printf("_printf len = %d\n", len);
	len = printf("printf [h][%ho]\n", 50);
	printf("printf len = %d\n", len);

	len = _printf("_printf [l][%lo]\n", 50);
	printf("_printf len = %d\n", len);
	len = printf("printf [l][%lo]\n", 50);
	printf("printf len = %d\n", len);
	printf("-------------------------------------\n");

	/* ------------------------------------------------------ */
	/* Edge cases - Octal*/
	printf("______ Edge cases - Octal\n");
	len = _printf("_printf [h][%ho]\n", 0);
	printf("_printf len = %d\n", len);
	len = printf("printf [h][%ho]\n", 0);
	printf("printf len = %d\n", len);

	len = _printf("_printf [l][%lo]\n", 0);
	printf("_printf len = %d\n", len);
	len = printf("printf [l][%lo]\n", 0);
	printf("printf len = %d\n", len);
	printf("--------------------------------------\n");

	len = _printf("_printf [h][%ho]\n", UINT_MAX);
	printf("_printf len = %d\n", len);
	len = printf("printf [h][%ho]\n", UINT_MAX);
	printf("printf len = %d\n", len);

	len = _printf("_printf [l][%lo]\n", UINT_MAX);
	printf("_printf len = %d\n", len);
	len = printf("printf [l][%lo]\n", UINT_MAX);
	printf("printf len = %d\n", len);
	printf("---------------------------------------\n");

	len = _printf("_printf [h][%ho]\n", NULL);
	printf("_printf len = %d\n", len);
	len = printf("printf [h][%ho]\n", NULL);
	printf("printf len = %d\n", len);

	len = _printf("_printf [l][%lo]\n", NULL);
	printf("_printf len = %d\n", len);
	len = printf("printf [l][%lo]\n", NULL);
	printf("printf len = %d\n", len);
	printf("---------------------------------------\n");


	/* ------------------------------------------------------ */
	/* ------------------------------------------------------ */
	/* Normal output - Hexadecimal(lowercase)*/
	printf("______ Normal output - Hexadecimal\n");
	len = _printf("_printf [h][%hx]\n", 50);
	printf("_printf len = %d\n", len);
	len = printf("printf [h][%hx]\n", 50);
	printf("printf len = %d\n", len);

	len = _printf("_printf [l][%lx]\n", 50);
	printf("_printf len = %d\n", len);
	len = printf("printf [l][%lx]\n", 50);
	printf("printf len = %d\n", len);
	printf("-------------------------------------\n");

	/* ------------------------------------------------------ */
	/* Edge cases - Integer*/
	printf("______ Edge cases - Hexadecimal\n");
	len = _printf("_printf [h][%hx]\n", 0);
	printf("_printf len = %d\n", len);
	len = printf("printf [h][%hx]\n", 0);
	printf("printf len = %d\n", len);

	len = _printf("_printf [l][%lx]\n", 0);
	printf("_printf len = %d\n", len);
	len = printf("printf [l][%lx]\n", 0);
	printf("printf len = %d\n", len);
	printf("--------------------------------------\n");

	len = _printf("_printf [h][%hx]\n", UINT_MAX);
	printf("_printf len = %d\n", len);
	len = printf("printf [h][%hx]\n", UINT_MAX);
	printf("printf len = %d\n", len);

	len = _printf("_printf [l][%lx]\n", UINT_MAX);
	printf("_printf len = %d\n", len);
	len = printf("printf [l][%lx]\n", UINT_MAX);
	printf("printf len = %d\n", len);
	printf("---------------------------------------\n");

	len = _printf("_printf [h][%hx]\n", NULL);
	printf("_printf len = %d\n", len);
	len = printf("printf [h][%hx]\n", NULL);
	printf("printf len = %d\n", len);

	len = _printf("_printf [l][%lx]\n", NULL);
	printf("_printf len = %d\n", len);
	len = printf("printf [l][%lx]\n", NULL);
	printf("printf len = %d\n", len);
	printf("---------------------------------------\n");



	/* ------------------------------------------------------ */
	/* ------------------------------------------------------ */
	/* Normal output - pointer */
	printf("______ Normal output - pointer\n");
	len = _printf("_printf [h][%hx]\n", (void *)0x7ffe637541f0);
	printf("_printf len = %d\n", len);
	len = printf("printf [h][%hx]\n", (void *)0x7ffe637541f0);
	printf("printf len = %d\n", len);

	len = _printf("_printf [l][%lx]\n", (void *)0x7ffe637541f0);
	printf("_printf len = %d\n", len);
	len = printf("printf [l][%lx]\n", (void *)0x7ffe637541f0);
	printf("printf len = %d\n", len);
	printf("-------------------------------------\n");

	len = _printf("_printf [h][%hx]\n", NULL);
	printf("_printf len = %d\n", len);
	len = printf("printf [h][%hx]\n", NULL);
	printf("printf len = %d\n", len);

	len = _printf("_printf [l][%lx]\n", NULL);
	printf("_printf len = %d\n", len);
	len = printf("printf [l][%lx]\n", NULL);
	printf("printf len = %d\n", len);
	printf("---------------------------------------\n");



	return (0);
}
