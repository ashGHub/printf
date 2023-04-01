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
	/* Normal output */
	printf("______ Normal positive output _printf\n");
	len = _printf("_printf [%+d]\n", 72);
	printf("_printf len = %d\n", len);
	len = _printf("_printf [% d]\n", 72);
	printf("_printf len = %d\n", len);
	len = _printf("_printf [%#d]\n", 72);
	printf("_printf len = %d\n", len);

	printf("______ Normal positive output printf\n");
	len = printf("printf [%+d]\n", 72);
	printf("printf len = %d\n", len);
	len = printf("printf [% d]\n", 72);
	printf("printf len = %d\n", len);
	len = printf("printf [%#d]\n", 72);
	printf("printf len = %d\n", len);

	/* ------------------------------------------------------ */
	/* Normal output */
	printf("______ Normal negative output _printf\n");
	len = _printf("_printf [%+d]\n", -72);
	printf("_printf len = %d\n", len);
	len = _printf("_printf [% d]\n", -72);
	printf("_printf len = %d\n", len);
	len = _printf("_printf [%#d]\n", -72);
	printf("_printf len = %d\n", len);

	printf("______ Normal negative output printf\n");
	len = printf("printf [%+d]\n", -72);
	printf("printf len = %d\n", len);
	len = printf("printf [% d]\n", -72);
	printf("printf len = %d\n", len);
	len = printf("printf [%#d]\n", -72);
	printf("printf len = %d\n", len);
 
	/* ------------------------------------------------------ */
	/* Unsigned output */
	_printf("______ Unsigned positive output _printf\n");
	len = _printf("_printf [%+u]\n", 72);
	printf("_printf len = %d\n", len);
	len = _printf("_printf [% u]\n", 72);
	printf("_printf len = %d\n", len);
	len = _printf("_printf [%#u]\n", 72);
	printf("_printf len = %d\n", len);

	printf("______ Unsigned positive output printf\n");
	len = printf("printf [%+u]\n", 72);
	printf("printf len = %d\n", len);
	len = printf("printf [% u]\n", 72);
	printf("printf len = %d\n", len);
	len = printf("printf [%#u]\n", 72);
	printf("printf len = %d\n", len);

	/* ------------------------------------------------------ */
	/* Octal output */
	_printf("______ Octal positive output _printf\n");
	len = _printf("_printf [%+o]\n", 5);
	printf("printf len = %d\n", len);
	len = printf("printf [%+o]\n", 5);
	printf("_printf len = %d\n", len);
	len = _printf("_printf [% o]\n", 5);
	printf("_printf len = %d\n", len);
	len = printf("printf [% o]\n", 5);
	printf("printf len = %d\n", len);
	len = _printf("_printf [%#o]\n", 5);
	printf("_printf len = %d\n", len);
	len = printf("printf [%#o]\n", 5);
	printf("printf len = %d\n", len);

	len = _printf("_printf [%#o]\n", 0);
	printf("_printf len = %d\n", len);
	len = printf("printf [%#o]\n", 0);
	printf("printf len = %d\n", len);

	len = _printf("_printf [%#o]\n", UINT_MAX);
	printf("_printf len = %d\n", len);
	len = printf("printf [%#o]\n", UINT_MAX);
	printf("printf len = %d\n", len);

	_printf("______ Octal negative output _printf\n");
	len = _printf("_printf [%+o]\n", -42);
	printf("_printf len = %d\n", len);
	len = printf("printf [%+o]\n", -42);
	printf("printf len = %d\n", len);
	len = _printf("_printf [% o]\n", -42);
	printf("_printf len = %d\n", len);
	len = printf("printf [% o]\n", -42);
	printf("printf len = %d\n", len);
	len = _printf("_printf [%#o]\n", -42);
	printf("_printf len = %d\n", len);
	len = printf("printf [%#o]\n", -42);
	printf("printf len = %d\n", len);

	len = _printf("_printf [%#o]\n", INT_MIN);
	printf("_printf len = %d\n", len);
	len = printf("printf [%#o]\n", INT_MIN);
	printf("printf len = %d\n", len);

	/* ------------------------------------------------------ */
	/* Hex output */
	_printf("______ Hex positive output _printf\n");

	len = _printf("_printf [%x]\n");
	printf("_printf len = %d\n", len);
	len = printf("printf [%x]\n");
	printf("printf len = %d\n", len);

	len = _printf("_printf [%d]\n");
	printf("_printf len = %d\n", len);
	len = printf("printf [%d]\n");
	printf("printf len = %d\n", len);

	len = _printf("_printf [%+x]\n", 255);
	printf("_printf len = %d\n", len);
	len = printf("printf [%+x]\n", 255);
	printf("printf len = %d\n", len);
	len = _printf("_printf [% x]\n", 255);
	printf("_printf len = %d\n", len);
	len = printf("printf [% x]\n", 255);
	printf("printf len = %d\n", len);
	len = _printf("_printf [%#X]\n", 255);
	printf("_printf len = %d\n", len);
	len = printf("printf [%#X]\n", 255);
	printf("printf len = %d\n", len);

	len = _printf("_printf [%#X]\n", 0);
	printf("_printf len = %d\n", len);
	len = printf("printf [%#X]\n", 0);
	printf("printf len = %d\n", len);

	len = _printf("_printf [%#X]\n", UINT_MAX);
	printf("_printf len = %d\n", len);
	len = printf("printf [%#X]\n", UINT_MAX);
	printf("printf len = %d\n", len);

	_printf("______ Hex negative output _printf\n");
	len = _printf("_printf [%+x]\n", -42);
	printf("_printf len = %d\n", len);
	len = printf("printf [%+x]\n", -42);
	printf("printf len = %d\n", len);
	len = _printf("_printf [% x]\n", -42);
	printf("_printf len = %d\n", len);
	len = printf("printf [% x]\n", -42);
	printf("printf len = %d\n", len);
	len = _printf("_printf [%#x]\n", -42);
	printf("_printf len = %d\n", len);
	len = printf("printf [%#x]\n", -42);
	printf("printf len = %d\n", len);

	len = _printf("_printf [%#x]\n", INT_MIN);
	printf("_printf len = %d\n", len);
	len = printf("printf [%#x]\n", INT_MIN);
	printf("printf len = %d\n", len);

	len = _printf("_printf [%#x]\n", INT_MIN);
	printf("_printf len = %d\n", len);
	len = printf("printf [%#x]\n", INT_MIN);
	printf("printf len = %d\n", len);

	len = _printf("_printf [%#x]\n", 'C');
	printf("_printf len = %d\n", len);
	len = printf("printf [%#x]\n", 'C');
	printf("printf len = %d\n", len);

	len = _printf("_printf [%#x]\n", UINT_MAX);
	printf("_printf len = %d\n", len);
	len = printf("printf [%#x]\n", UINT_MAX);
	printf("printf len = %d\n", len);

	len = _printf("_printf [%#x]\n", ULONG_MAX);
	printf("_printf len = %d\n", len);
	len = printf("printf [%#x]\n", ULONG_MAX);
	printf("printf len = %d\n", len);

	len = _printf("_printf [%#x]\n");
	printf("_printf len = %d\n", len);
	len = printf("printf [%#x]\n");
	printf("printf len = %d\n", len);

	_printf("______ Hex-Capital _printf\n");
	len = _printf("_printf [%#X]\n", 42);
	printf("_printf len = %d\n", len);
	len = printf("printf [%#X]\n", 42);
	printf("printf len = %d\n", len);

	/* ------------------------------------------------------ */
	
	/* Unknown */
	printf("______ Unknown\n");
	len = _printf("_printf [%+++    #####d]\n", 72);
	printf("_len = %d\n", len);
	len = printf("printf [%+++    #####d]\n", 72);
	printf("len = %d\n", len);

	len = _printf("_printf [%+p]\n", (void *)0x7ffe637541f0);
	printf("_len = %d\n", len);
	len = printf("printf [%+p]\n", (void *)0x7ffe637541f0);
	printf("len = %d\n", len);

	len = _printf("_printf [% p]\n", (void *)0x7ffe637541f0);
	printf("_len = %d\n", len);
	len = printf("printf [% p]\n", (void *)0x7ffe637541f0);
	printf("len = %d\n", len);

	len = _printf("_printf [%#p]\n", (void *)0x7ffe637541f0);
	printf("_len = %d\n", len);
	len = printf("printf [%#p]\n", (void *)0x7ffe637541f0);
	printf("len = %d\n", len);

	len = _printf("_printf [%+p]\n", 20);
	printf("_len = %d\n", len);
	len = printf("printf [%+p]\n", 20);
	printf("len = %d\n", len);

	len = _printf("_printf [%+p]\n", -20);
	printf("_len = %d\n", len);
	len = printf("printf [%+p]\n", -20);
	printf("len = %d\n", len);

	len = _printf("_printf [%+p]\n", 0);
	printf("_len = %d\n", len);
	len = printf("printf [%+p]\n", 0);
	printf("len = %d\n", len);

	len = _printf("_printf [%+++    #####k]\n", 72);
	printf("_len = %d\n", len);
	len = printf("printf [%+++    #####k]\n", 72);
	printf("len = %d\n", len);

	len = _printf("_printf [%+++    k]\n", 72);
	printf("_len = %d\n", len);
	len = printf("printf [%+++    k]\n", 72);
	printf("len = %d\n", len);

		len = _printf("_printf [%    ###k]\n", 72);
	printf("_len = %d\n", len);
	len = printf("printf [%    ###k]\n", 72);
	printf("len = %d\n", len);

	len = _printf("_printf [%+ kd]\n", 65);
	printf("_len = %d\n", len);
	len = printf("printf [%+ kd]\n", 65);
	printf("len = %d\n", len);
	len = _printf("_printf [%+    d]\n", 65);
	printf("_len = %d\n", len);
	len = printf("printf [%+     d]\n", 65);
	printf("len = %d\n", len);

	_printf("_printf [%p]\n", (void *)0x7ffe637541f0);
	printf("printf [%p]\n", (void *)0x7ffe637541f0);
	/* Edge cases */
	printf("______ Edge cases\n");
	len = _printf("_printf [%+d]\n", 0);
	printf("_len = %d\n", len);
	len = printf("printf [%+d]\n", 0);
	printf("len = %d\n", len);
	len = _printf("_printf [%+o]\n", 0);
	printf("_len = %d\n", len);
	len = printf("printf [%+o]\n", 0);
	printf("len = %d\n", len);
	len = _printf("_printf [%+x]\n", 0);
	printf("_len = %d\n", len);
	len = printf("printf [%+x]\n", 0);
	printf("len = %d\n", len);
	len = _printf("_printf [%+d]\n", NULL);
	printf("_len = %d\n", len);
	len = printf("printf [%+d]\n", NULL);
	printf("len = %d\n", len);
	len = _printf("_printf [%+o]\n", NULL);
	printf("_len = %d\n", len);
	len = printf("printf [%+o]\n", NULL);
	printf("len = %d\n", len);
	len = _printf("_printf [%+x]\n", NULL);
	printf("_len = %d\n", len);
	len = _printf("_printf [%+ p]\n", NULL);
	printf("_len = %d\n", len);
	len = printf("printf [%+ p]\n", NULL);
	printf("len = %d\n", len);
	len = _printf("_printf [%#x]\n", NULL);
	printf("l_en = %d\n", len);
	len = printf("printf [%#x]\n", NULL);
	printf("len = %d\n", len);
	return (0);
}
