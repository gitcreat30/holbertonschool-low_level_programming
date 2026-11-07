#include "main.h"

/**
 * puts_half - second half of the string
 * @str : pointer vers la chaîne de caractères
 *
 *
 *return (0)
 */

void puts_half(char *str)
{
	char *p = str;
	int lg;
	int n;

	while (*p != '\0')
		p++;
	lg = p - str;

	n = lg / 2;
	p = (str + lg) - n;

	while (*p != '\0')
	{
	_putchar (*p);
	p++;

	}
	_putchar ('\n');
}
