#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: to be checked
 * Return: value of x
 */
int _strlen(char *s)
{
	int x;

	for (x = 0; *s != 0; s++)
	{
		++x;
	}
	return (x);
}
