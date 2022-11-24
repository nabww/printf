#include "main.h"

/**
 * get_flag - check code
 * @s: char
 * @f: *p to struct
 * Return: 1if flag is turned on, 0 if not
 **/

int get_flag(char s, flags_t *f)
{
	int i = 0;

	switch (s)
	{
		case '+':
			f->plus = 1;
			i = 1;
			break;
		case ' ':
			f->space = 1;
			i = 1;
			break;
		case '#':
			f->hash = 1;
			i = 1;
			break;
	}
	return (i);
}
