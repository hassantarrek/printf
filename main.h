#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>
#include <unistd.h>

/**
 * struct convert - struct for specifiers
 * _convert - Typedef for struct convert
 * @specifier: pointer to specifier type
 * @f: pointer to function
 */
typedef struct convert
{
	char *specifier;
	int (*f)();
} _convert;

int _printf(const char *format, ...);
int print_string(va_list val);
int print_char(va_list val);
int print_percent(void);
int _putchar(char c);
int _strlen(char *s);
int print_int(va_list args);
int print_dec(va_list args);

#endif
