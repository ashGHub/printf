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

	len = _printf("_printf [ll][%llu]\n", 100);
	printf("_printf len = %d\n", len);
	len = printf("printf [ll][%llu]\n", 100);
	printf("printf len = %d\n", len);

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
	/*---------------------------------------------------------*/

	/* ------------------------------------------------------ */
	/* Normal output - Unsigned integer */
	printf("______ Normal output - Unsigned integer\n");
	len = _printf("_printf [h][%hu]\n", 50);
	printf("_printf len = %d\n", len);
	len = printf("printf [h][%hu]\n", 50);
	printf("printf len = %d\n", len);

	len = _printf("_printf [l][%lu]\n", 50);
	printf("_printf len = %d\n", len);
	len = printf("printf [l][%lu]\n", 50);
	printf("printf len = %d\n", len);
	printf("-------------------------------------\n");

	/* ------------------------------------------------------ */
	/* Edge cases - Integer*/
	printf("______ Edge cases - Unsigned integer\n");
	len = _printf("_printf [h][%hu]\n", 0);
	printf("_printf len = %d\n", len);
	len = printf("printf [h][%hu]\n", 0);
	printf("printf len = %d\n", len);

	len = _printf("_printf [l][%lu]\n", 0);
	printf("_printf len = %d\n", len);
	len = printf("printf [l][%lu]\n", 0);
	printf("printf len = %d\n", len);

	len = _printf("_printf [h][%hu]\n", 5);
	printf("_printf len = %d\n", len);
	len = printf("printf [h][%hu]\n", 5);
	printf("printf len = %d\n", len);

	len = _printf("_printf [l][%lu]\n", -5);
	printf("_printf len = %d\n", len);
	len = printf("printf [l][%lu]\n", -5);
	printf("printf len = %d\n", len);
	printf("--------------------------------------\n");

	len = _printf("_printf [h][%hu]\n", ULONG_MAX);
	printf("_printf len = %d\n", len);
	len = printf("printf [h][%hu]\n", ULONG_MAX);
	printf("printf len = %d\n", len);

	len = _printf("_printf [l][%lu]\n", ULONG_MAX);
	printf("_printf len = %d\n", len);
	len = printf("printf [l][%lu]\n", ULONG_MAX);
	printf("printf len = %d\n", len);
	printf("---------------------------------------\n");

	len = _printf("_printf [h][%hu]\n", NULL);
	printf("_printf len = %d\n", len);
	len = printf("printf [h][%hu]\n", NULL);
	printf("printf len = %d\n", len);

	len = _printf("_printf [l][%lu]\n", NULL);
	printf("_printf len = %d\n", len);
	len = printf("printf [l][%lu]\n", NULL);
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

	len = _printf("_printf [h][%ho]\n", ULONG_MAX);
	printf("_printf len = %d\n", len);
	len = printf("printf [h][%ho]\n", ULONG_MAX);
	printf("printf len = %d\n", len);

	len = _printf("_printf [l][%lo]\n", ULONG_MAX);
	printf("_printf len = %d\n", len);
	len = printf("printf [l][%lo]\n", ULONG_MAX);
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

	len = _printf("_printf [h][%hx]\n", ULONG_MAX);
	printf("_printf len = %d\n", len);
	len = printf("printf [h][%hx]\n", ULONG_MAX);
	printf("printf len = %d\n", len);

	len = _printf("_printf [l][%lx]\n", ULONG_MAX);
	printf("_printf len = %d\n", len);
	len = printf("printf [l][%lx]\n", ULONG_MAX);
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


    /* unknown */
	printf("_____________ Unknow\n");

	len = _printf("_printf [h][%hhd]\n", 100);
	printf("_printf len = %d\n", len);
	len = printf("printf [h][%hhd]\n", 100);
	printf("printf len = %d\n", len);

	len = _printf("_printf [ll][%lld]\n", 100);
	printf("_printf len = %d\n", len);
	len = printf("printf [ll][%lld]\n", 100);
	printf("printf len = %d\n", len);

	len = _printf("_printf [hh][%hho]\n", 100);
	printf("_printf len = %d\n", len);
	len = printf("printf [h][%hho]\n", 100);
	printf("printf len = %d\n", len);

	len = _printf("_printf [ll][%llo]\n", 100);
	printf("_printf len = %d\n", len);
	len = printf("printf [ll][%llo]\n", 100);
	printf("printf len = %d\n", len);

	len = _printf("_printf [hh][%hhx]\n", 100);
	printf("_printf len = %d\n", len);
	len = printf("printf [hh][%hhx]\n", 100);
	printf("printf len = %d\n", len);

	len = _printf("_printf [ll][%llx]\n", 100);
	printf("_printf len = %d\n", len);
	len = printf("printf [ll][%llx]\n", 100);
	printf("printf len = %d\n", len);

	len = _printf("_printf [hh][%hhu]\n", 100);
	printf("_printf len = %d\n", len);
	len = printf("printf [hh][%hhu]\n", 100);
	printf("printf len = %d\n", len);

	len = _printf("_printf [ll][%llu]\n", 100);
	printf("_printf len = %d\n", len);
	len = printf("printf [ll][%llu]\n", 100);
	printf("printf len = %d\n", len);

	printf("---------------------------------------\n");

	return (0);
}
