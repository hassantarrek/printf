#include "main.h"

/**
 * _printf - mirror function of printf
 * @format: input format
 * this function is made by shaimaa and hassan :)
 * Return: count of input value
 */

int _printf(const char *format, ...)
{
	va_list args;
	int count = 0, y = 0, z = 0;

	_convert x[] = {
		{"%s", print_string}, {"%c", print_char},
		{"%%", print_percent}, {"%i", printf_int}, {"%d", printf_dec},
		{NULL, NULL}};

	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
	{
		return (-1);
	}

	va_start(args, format);
	while (format[y] != '\0')
	{
		if (format[y] != '%')
		{
			_putchar(format[y]);
			count++;
			y++;
		}
		else
		{
			y++;
			while (x[z].specifier != NULL)
			{
				if (format[y] == x[z].specifier[1])
				{
					count += x[z].f(args);
					break;
				}
				z++;
			}
			y++;
		}
	}
	va_end(args);
	return (count);
}
