#include "main.h"

/**
 * rev_string - function reverse a string
 * @s : pointer vers la chaîne de caractères
 *
 *
 *return (0)
 */

void rev_string(char *s)
{
	char *debut = s;
	char *fin = s;
	char tmp;

	while (*fin != '\0')
	fin++;
	if (fin == debut)
		return;
	fin--;

	while (debut < fin)
	{
		tmp = *debut;
		*debut = *fin;
		*fin = tmp;
		debut++;
		fin--;
	}
}
