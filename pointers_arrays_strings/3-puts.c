#include <stdio.h>

/**
 * _puts - function prints a string
 * @str : pointer vers la chaîne de caractères
 *
 * return : 0
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
	putchar(*str);
	str++;
	}
}
