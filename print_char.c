#include "main.h"
#include <unistd.h>

/**
 * print_char - prints a character
 * @c: character
 * Return: the output character
 */
void print_char(char c)
{
	write(1, &c, 1);
}
