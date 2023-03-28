#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <limits.h>
#include <stdlib.h>

#define IS_H_OR_L(x) ((x) == 'H' || (x) == 'L')

#define BUFFER_SIZE 1024
#define BUFFER_FLUSH -1
#define SMALL_HEX 120
#define CAPITAL_HEX 88

/**
 * struct format - a structure for the conversion specifiers
 * @type: conversion specifier
 * @handle: a function for printing the data type
 *
 * Description: this a structure for handling
 *				the different conversion specifiers
 */
typedef struct format
{
	char *type;
	int (*handle)(const char *, int *, va_list);
} format_t;

int _putchar(char ch);
int _puts(char *str);
int _flush(void);

/* print functions */
int _printf(const char *format, ...);
int print_char(const char *format, int *idx, va_list args);
int print_string(const char *format, int *idx, va_list args);
int print_integer(const char *format, int *idx, va_list args);
int print_binary(const char *format, int *idx, va_list args);
int print_unsigned(const char *format, int *idx, va_list args);
int print_octal(const char *format, int *idx, va_list args);
int print_hex(const char *format, int *idx, va_list args);
int print_custom_string(const char *format, int *idx, va_list args);
int print_pointer(const char *format, int *idx, va_list args);

/* helpers */
short is_flag(const char *format, int *current_idx);
short is_field(const char *format, int *current_idx);
short is_length(const char *format, int *current_idx);
short is_precision(const char *format, int *current_idx);
short is_format_option(const char *format, int *current_idx);

/* printf support functions */
int (*get_print_function(const char *c))(const char *, int *, va_list);
int get_specifier_idx(const char *format, int current_idx);
int print_conversion_specifier(const char *format, int *idx, va_list args);
short is_supported_specifier(const char *format, int current_idx);

/* util functions */
int write_hex(char hex_type, unsigned long num);

#endif
