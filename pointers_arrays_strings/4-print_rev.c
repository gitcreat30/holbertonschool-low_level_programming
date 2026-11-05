#include "main.h"

/**
 * print_rev - function prints in reverse
 * @s : pointer vers la chaîne de caractères
 *
 *
 * return : 0
 */

void print_rev(char *s)
{
	char *debut = s;

	while (*s != '\0')
	s++;

	while (s > debut)
	{
	s--;
	_putchar(*s);
	}
	_putchar('\n');
}
