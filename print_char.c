#include "main.h"

/**
 * pr_char - prints a character
 * @val: arg
 * Return: 1
 */

int pr_char(va_list val)
{
	char x;

	x = va_arg(val, int);
	_putchar(x);
	return (1);
}
