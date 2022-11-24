#include "main.h"

/**
 * _puts- string to stdout
 * @str: *p to str
 * Return: no. of char to write
 **/

int _puts(char *str)
{
	register int i;

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
	return (i);
}
