#include "main.h"

/**
 * _printf - mirror function of printf
 * @format: input format
 * this function is made by shaimaa and hassan :)
 * Return: count of input value
 */

int _printf(const char *format, ...)
{
	_convert x[] = {
		{"%s", printf_string}, {"%c", printf_char},
		{"%%", printf_37}};
	va_list args;
	int x, y, len = 0;

	va_start(args, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
Here:
	for (x = 0; format[x] != '\0'; x++)
	{
		for (y = 13; y >= 0; y--)
		{
			if (m[y].id[0] == format[x] && m[y].id[1] == format[x + 1])
			{
				len += m[y].f(args);
				x = x + 2;
				goto Here;
			}
		}
		_putchar(format[x]);
		len++;
	}
	va_end(args);
	return (len);
}
