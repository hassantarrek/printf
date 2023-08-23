#include "main.h"
/**
* pr_unsigned - print unsigned integer
* @n: variadic variable
* Return: count of printed numbers
**/
int pr_unsigned(va_list args)
{
	unsigned int n = va_arg(args, unsigned int);
	int num, last = n % 10, digit, exp = 1;
	int  x = 1;

	n = n / 10;
	num = n;

	if (last < 0)
	{
		num *= -1;
	}
	while (num / 10 != 0)
	{
		exp = exp * 10;
		num = num / 10;
	}
	num = n;
	while (exp > 0)
	{
		digit = num / exp;
		_putchar(digit + '0');
		num = num - (digit * exp);
		exp = exp / 10;
		x++;
	}
	_putchar(last + '0');
	return (x);
}

