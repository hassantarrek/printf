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
		u = "(null)";
		len = _strlen(u);
		for (x = 0; x < len; x++)
		_putchar(u[x]);
		return (len);
        }
        else
        {
                len = _strlen(u);
                for (x = len; x >= 0; x--)
                        _putchar(u[x]);
                return (len);
        }
}
