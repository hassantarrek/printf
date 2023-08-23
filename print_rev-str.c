#include "main.h"

/**
* pr_rev_str - print a reversed string 'logicly'
* @val: arg
* Return: length of the strong string
*/

int pr_rev_str(va_list val)
{
        char *u;
        int x, len;

        u = va_arg(val, char *);
        if (u == NULL)
        {
		_putchar('%');
		_putchar('r');
                return (2);
        }
        else
        {
                len = _strlen(u);
                for (x = len; x >= 0; x--)
                        _putchar(u[x]);
                return (len);
        }
}
