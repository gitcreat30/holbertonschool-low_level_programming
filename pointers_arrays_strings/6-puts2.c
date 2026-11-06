#include "main.h"

/**
 *  puts2 - prints every other character
 * @str : pointer vers la chaîne de caractères
 *
 *
 *return (0)
 */

void puts2(char *str)
{
	while (*str != '\0')
	{
	_putchar (*str);
	str++;
	if (*str == '\0')
		break;
	str++;
	}
	_putchar ('\n');
}
