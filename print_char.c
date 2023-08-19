#include "main.h"
#include <unistd.h>

/**
 * print_char - prints a character
 * @c: character
 * Return: the output character
 */
int print_char(char c)
{
	return (write(1, &c, 1));
}
