#include "main.h"
/**
 * binary - print binary number
 * @args: takes variadic func argument
 * Return: count of printed digits
 */
 
int binary(va_list args)
{
	unsigned int n = va_arg(args, unsigned int);
	int res[32], m, i;

	int count = 0;
	int m = 0;
	while(n != 0)
	{
		res[m]= n % 2;
		n /= 2;
		m++;
	}
	for (i = m - 1; i >= 0; i--)
		{
		_put_char(res[i] + '0');
		count++;
		}
	 return (count);
}
