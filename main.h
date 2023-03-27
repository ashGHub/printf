#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

#define IS_H_OR_L(x) ((x) == 'H' || (x) == 'L')

/**
 * struct format - a structure for the conversion specifiers
 * @type: conversion specifier
 * @print: a function for printing the data type
 *
 * Description: this a structure for handling
 * 				the different conversion specifiers
 */
typedef struct format
{
	char *type;
	int (*handle)(const char *, int *, va_list);
} format_t;

int _putchar(char ch);

int _printf(const char *format, ...);
int print_char(const char *format, int *idx, va_list args);
int print_string(const char *format, int *idx, va_list args);

/* helpers */
short is_flag(const char *format, int *current_idx);
short is_field(const char *format, int *current_idx);
short is_length(const char *format, int *current_idx);
short is_precision(const char *format, int *current_idx);
short is_format_option(const char *format, int *current_idx);

/* int print_percent(char); */

#endif
