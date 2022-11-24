#include "main.h"

/**
 * print_hex - prints hexadecimals
 * @l: va_list args
 * @f: *p to struct
 * Description: calls convert() to required base
 * Return: no.of char printed.
 **/


int print_hex(va_list l, flags_t *f)
{
	unsigned int num = va_arg(l, unsigned int);
	char *str = convert(num, 16, 1);
	int count = 0;

	if (f->hash == 1 && str[0] != '0')
		count += _puts("0x");
	count += _puts(str);
	return (count);
}

/**
 * print_hex_big - print no. in hex base
 * @l: va_list args
 * @f: *p to struct
 * Description: calls convert()
 * Return: the no. of char printed
 **/

int print_hex_big(va_list l, flags_t *f)
{
	unsigned int num = va_arg(l, unsigned int);
	char *str = convert(num, 16, 0);
	int count = 0;

	if (f->hash == 1 && str[0] != '0')
		count += _puts("0X");
	count += _puts(str);
	return (count);
}


/**
 * print_binary - prints in base 2
 * @l: va_list args
 * @f: *p to struct
 * Description: call convert() to correct base
 * Return: no. of printed chars
 **/

int print_binary(va_list l, flags_t *f)
{
	unsigned int num = va_arg(l, unsigned int);
	char *str = convert(num, 2, 0);

	(void)f;
	return (_puts(str));
}


/**
 * print_octal - check code
 * @l: va_list args
 * @f: *p to struct
 * Description: calls convert() to correct base
 * return: no. of char
 **/

int print_octal(va_list l, flags_t *f)
{
	unsigned int num = va_arg(l, unsigned int);
	char *str = convert(num, 8, 0);
	int count = 0;

	if(f->hash == 1 && str[0] != '0')
		count += _putchar('0');
	count += _puts(str);
	return(count);
}

