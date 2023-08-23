#include "main.h"
/**
 * binary - print binary number
 * @args: takes variadic func argument
 * Return: count of printed digits
 */

int binary(va_list args)
{
	unsigned int n = va_arg(args, unsigned int);
	unsigned int res[32];
	int m, i, count;

	count = 0;
	m = 0;
	if ( n == 0)
	{
		_putchar('0');
		return (1);
	}
	else
	{
		while (n != 0)
		{
			res[m] = n % 2;
			n /= 2;
			m++;
		}
		for (i = m - 1; i >= 0; i--)
		{
			_putchar(res[i] + '0');
			count++;
		}
		return (count);
	}
}

