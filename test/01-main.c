#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	/* Normal inputs */
	printf("_____ Normal inputs\n");
	_printf("Character:[%c]\n", 'H');
	printf("Character:[%c]\n", 'H');
	_printf("String:[%s]\n", "I am a string !");
	printf("String:[%s]\n", "I am a string !");
	_printf("String:[%%]\n");
	printf("String:[%%]\n");
	_printf("String:[Hello %hhs and percent %% works as well as %lc \"]\n", "I am a string !", 'A');
	_printf("String:[Hello %hhs and percent %% works as well as %lc \"]\n", "I am a string !", 'A');
	printf("String:[Hello %s and percent %% works as well as %c \"]\n", "I am a string !", 'A');
	printf("String:[Hello %s and percent %% works as well as %c \"]\n", "I am a string !", 'A');

	/*--------------------------------------------*/

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


	/*--------------------------------------------*/

	/* Multiple inputs with single format*/
	printf("_____ Multiple inputs with single format\n");
	_printf("String:[%s]\n", "I am a string !", "Hello");
	_printf("String:[%s]\n", "I am a string !", "Hello");
	_printf("String:[%c]\n", 'A', 'B');
	printf("String:[%c]\n", 'A', 'B');

	/*---------------------------------------------*/
	/* Unsupported format */
	printf("_____ Unsupported format\n");
	_printf("String:[%0#Z]\n");
	printf("String:[%0#Z]\n");
	_printf("String:[%Qcd]\n");
	printf("String:[%Qcd]\n", 'P');
	_printf("printf:[%05.5hkcrvw]\n", 'P');
	_printf("printf:[%05.5hhkcrvw]\n", 'P');
	_printf("printf:[%05.5Lkcrvw]\n", 'P');
	_printf("printf:[%05.5jkcrvw]\n", 'P');
	_printf("printf:[%05.5zkcrvw]\n", 'P');
	_printf("printf:[%05.5Zkcrvw]\n", 'P');
	_printf("printf:[%05.5tkcrvw]\n", 'P');
	_printf("printf:[%05.5hhhLllqLjzZtkcrvw]\n", 'P');

	printf("printf:[%-0k5.7hhtkyrvw]\n", 7.89);

	/*---------------------------------------------*/
	/* No arguments given */
	printf("_____ No argument given\n");
	_printf("_printf:[%hhc]\n");
	printf("printf:[%hhc]\n");
	_printf("_printf:[%hhs]\n");
	printf("printf:[%hhs]\n");
	/*---------------------------------------------*/
	/* NULL inputs */
	printf("_____ Null inputs\n");
	_printf("String:[%s]\n", NULL);
	printf("String:[%s]\n", NULL);
	_printf("String:[%c]\n", NULL);
	printf("String:[%c]\n", NULL);

	/*---------------------------------------------*/
	/* Unknown */
	printf("_____ Unknown\n");
	_printf("%");
	printf("\n");
	printf("%");
	printf("\n------------------------------\n");
	_printf("% k");
	printf("\n");
	printf("% k");
	printf("\n------------------------------\n");
	_printf("% ");
	printf("\n");
	printf("% ");
	printf("\n------------------------------\n");
	_printf("%k");
	printf("\n");
	printf("%k");
	printf("\n------------------------------\n");
	_printf("% k");
	printf("\n");
	printf("% k");
	printf("\n------------------------------\n");
	_printf("%  k");
	printf("\n");
	printf("%  k");
	printf("\n------------------------------\n");
	_printf("str%  k");
	printf("\n");
	printf("str%  k");
	printf("\n------------------------------\n");
	_printf("str%   k");
	printf("\n");
	printf("str%   k");

	return (0);
}
