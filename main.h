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
 * struct format_options - a structure for all format options
 * @plus: plus exists or not
 * @space: space exists or not
 * @hash: hash exists or not
 * @_long: long exists or not
 * @_short: short exists or not
 *
 * Description: this a structure for registering format options
 */
typedef struct format_options
{
	short plus;
	short space;
	short hash;
	short _long;
	short _short;
} format_op_t;

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
	int (*handle)(const char *, int, va_list, format_op_t);
} format_t;

int _putchar(char ch);
int _puts(char *str);
int _flush(void);

/* print functions */
int _printf(const char *format, ...);
/* conversion specifier handlers */
int print_char(const char *format, int idx, va_list args,
				format_op_t format_op);
int print_string(const char *format, int idx, va_list args,
				format_op_t format_op);
int print_integer(const char *format, int idx, va_list args,
				format_op_t format_op);
int print_binary(const char *format, int idx, va_list args,
				format_op_t format_op);
int print_unsigned(const char *format, int idx, va_list args,
				format_op_t format_op);
int print_octal(const char *format, int idx, va_list args,
				format_op_t format_op);
int print_hex(const char *format, int idx, va_list args,
				format_op_t format_op);
int print_custom_string(const char *format, int idx, va_list args,
				format_op_t format_op);
int print_pointer(const char *format, int idx, va_list args,
				format_op_t format_op);
int print_unsupported_format(const char *format, int *start_idx, int end_idx,
				format_op_t format_op);

/* helpers */
short set_flag(const char *format, int *current_idx, format_op_t *format_op);
short set_field(const char *format, int *current_idx, format_op_t *format_op);
short set_length(const char *format, int *current_idx,
				format_op_t *format_op);
short set_precision(const char *format, int *current_idx,
					format_op_t *format_op);
short set_format_option(const char *format, int *current_idx,
						format_op_t *format_op);

/* printf support functions */
int (*get_print_fun(const char *c))(const char *, int, va_list, format_op_t);
int get_specifier_idx(const char *format, int *current_idx,
						format_op_t *format_op);
int print_format(const char *format, int *idx, va_list args);
short is_supported_specifier(const char *format, int current_idx);

/* util functions */
int write_hex(char hex_type, unsigned long num);

/* options utils */
long int convert_to_signed(long int n, format_op_t format_op);
unsigned long convert_to_unsigned(unsigned long int n, format_op_t format_op);

#endif
