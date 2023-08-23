#include <main.h>
/**
 * pr_oct - print octal number
 * @args: takes variadic func argument
 * Return: count of printed digits
 */
 
int pr_oct (va_list args)
{
 int arr[10];
 int count, i;
 unsigned int n = va_arg(args, unsigned int);
 i = 0;
 count = 0;

 	while(n != 0)
 		{
			arr[i] = (n % 8);
			n = n / 8;
			i++;
		}
 	while ( i >= 0)
         	{
        	 if (arr[i] >= 0 && arr[i] <= 9)
            	{
             		_putchar(arr[i] + '0');
            		 count++;
	    	}
             	i--;
         	}
	 return (count);
}
