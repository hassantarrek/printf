#include "main.h"

/**
 * print_char - prints a character
 * @c: character
 * Return: the output character
 */
int print_char(char c)
{
	write(1, &c, 1);
}
