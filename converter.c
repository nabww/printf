#include "main.h"

/**
 * convert - converts no. & base to str
 * @num: inpput int
 * @base: base
 * @lowercase: flag if hexa values need lowercase
 * Return: result string
 **/

char *convert (unsigned long int num, int base, int lowercase)
{
	static char *rep;
	static char buffer[50];
	char *ptr;

	rep = (lowercase)
		? "0123456789abcdef"
		: "0123456789ABCDEF";
	ptr = &buffer [49];
	*ptr = '\0';

	do {
		*--ptr = rep[num % base];
		num /= base;
	}while (num != 0);
	return (ptr);
}
