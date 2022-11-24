#include "main.h"

/**
 * print_string - loops through str
 * @l: va_list args
 * @f: *p to struct 
 * Return: no. of chars
 **/

int print_string(va_list l, flags_t *f)
{
	char *s = va_arg(l, char *);

	(void)f;

	if (!s)
		s = "(null)";
	return (_puts(s));
}


/**
 * print_char - prints char
 * @l: va_list of args
 * @f: *p to struct
 * Return: no. of char printed
 **/

int print_char(va_list l, flags_t *f)
{
	(void)f;
	_putchar(va_arg(l, int));
	return (1);
}
