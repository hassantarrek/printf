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
int pr_string(va_list val);
int pr_char(va_list val);
int pr_percent(void);
int _putchar(char c);
int _strlen(char *s);
int pr_int(va_list args);
int pr_dec(va_list args);
int pr_oct(va_list args);
int binary(va_list args);
int pr_unsigned(va_list args);
int pr_rev_str(va_list val);
#endif
