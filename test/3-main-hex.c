#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
        /* Normal input hex */
        printf("------- Normal input\n");
        _printf("Hex: [%x]\n",  0);
        printf("Hex: [%x]\n",  0);

        _printf("Hex: [%x]\n");
        printf("Hex: [%x]\n");

        _printf("Hex: [%x]\n", 4294967295);
        printf("Hex: [%x]\n",  4294967295);

        _printf("Hex: [%x]\n",  -1);
        printf("Hex: [%x]\n",  -1);

        _printf("Hex: [%x]\n",  456);
        printf("Hex: [%x]\n",  456);

        _printf("Hex: [%x]\n",  10);
        printf("Hex: [%x]\n",  10);

        _printf("Hex: [%x]\n",  7);
        printf("Hex: [%x]\n",  7);

        _printf("Hex: [%x]\n",  123456);
        printf("Hex: [%x]\n",  123456);

	/* Capital Hex*/
	printf("-------Capital Hex\n");
        _printf("Hex: [%X]\n",  0);
        printf("Hex: [%X]\n",  0);

        _printf("Hex: [%X]\n");
        printf("Hex: [%X]\n");

        _printf("Hex: [%X]\n", 4294967295);
        printf("Hex: [%X]\n",  4294967295);

        _printf("Hex: [%X]\n",  -1);
        printf("Hex: [%X]\n",  -1);

        _printf("Hex: [%X]\n",  456);
        printf("Hex: [%X]\n",  456);

        _printf("Hex: [%X]\n",  10);
        printf("Hex: [%X]\n",  10);

        _printf("Hex: [%X]\n",  7);
        printf("Hex: [%X]\n",  7);

        _printf("Hex: [%X]\n",  123456);
        printf("Hex: [%X]\n",  123456);


        printf("\n----------------------------\n");

	return (0);
}
