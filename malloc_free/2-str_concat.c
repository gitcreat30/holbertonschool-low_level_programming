#include "main.h"
#include <stdlib.h>

/**
 *str_concat - point to a newly allocated space
 *@s1: concatenates two strings
 *@s2: concatenates two strings
 *
 *Return: NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *ma;
	unsigned int lg1;
	unsigned int lg2;
	unsigned int i;
	unsigned int j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	lg1 = 0;
	while (s1[lg1] != '\0')
		lg1++;
	lg2 = 0;
	while (s2[lg2] != '\0')
		lg2++;

	ma = malloc(sizeof(char) * (lg1 + lg2 + 1));

	if (ma == NULL)
		return (NULL);

	i = 0;
	while (i < lg1)
	{
		ma[i] = s1[i];
		i++;
	}

	j = 0;
	while (j < lg2)
	{
		ma[i] = s2[j];
		i++;
		j++;
	}
	ma[i] = '\0';
	return (ma);
}
