#include " main.h"
/**
 * _printf - mirror function of printf
 * @format: input format
 * Return: count of input value
 */

int _printf(const char *format, ...)
{
	int count = 0, i;

	va_list n;

	va_start(n, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == 'c')
			{
				print_char(va_arg(n, int));
			}
			else if (format[i] == 's')
			{
				print_string((va_arg(n, void*)));
			}
			else
				print_char(format[i]);
		}
		else
			print_char(format[i]);
		count++;
	}
	va_end(n);
	return (count);
}
