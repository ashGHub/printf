#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
        /* Normal input octal */
        printf("------- Normal input\n");
        _printf("Octal: [%o]\n",  0);
        printf("Octal: [%o]\n",  0);

        _printf("Octal: [%o]\n");
        printf("Octal: [%o]\n");

        _printf("Octal: [%o]\n", 4294967295);
        printf("Octal: [%o]\n",  4294967295);

        _printf("Octal: [%o]\n",  -1);
        printf("Octal: [%o]\n",  -1);

        _printf("Octal: [%o]\n",  456);
        printf("Octal: [%o]\n",  456);

        _printf("Octal: [%o]\n",  10);
        printf("Octal: [%o]\n",  10);

        _printf("Octal: [%o]\n",  7);
        printf("Octal: [%o]\n",  7);

        _printf("Octal: [%o]\n",  123456);
        printf("Octal: [%o]\n",  123456);

        printf("\n----------------------------\n");

	return (0);
}
