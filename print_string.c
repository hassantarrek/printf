#include "main.h"

/**
* print_string - print a string 'logicly'
* @val: arg
* Return: length of the strong string
*/

int print_string(va_list val)
{
	char *u;
	int x, len;

	u = va_arg(val, char *);
	if (u == NULL)
	{
		u = "(null)";
		len = _strlen(u);
		for (x = 0; x < len; x++)
			_putchar(u[x]);
		return (len);
	}
	else
	{
		len = _strlen(u);
		for (x = 0; x < len; x++)
			_putchar(u[x]);
		return (len);
	}
}
