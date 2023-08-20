#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * header file
 * function _printf
 */
typedef struct format
{
	char *id;
	int (*f)();
} _convert;

int _printf(const char *format, ...);
int print_string (char *src);
int print_char (char c);
int print_percent(void);


#endif
