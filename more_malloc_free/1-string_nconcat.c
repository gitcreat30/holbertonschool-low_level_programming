#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *string_nconcat - concatene deux chaines
 *@s1: premier champ texte
 *@s2: deuxieme champ texte
 *@n:  premiers caracteres de s2
 *Return: rs
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *rs;
	unsigned int lg1, lg2, m, i, j;

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

	if (n >= lg2)
	m = lg2;
	else
	m = n;

	rs = malloc(sizeof(char) * (lg1 + m + 1));
	if (rs == NULL)
		return (NULL);

	i = 0;
	while (i < lg1)
	{
	rs[i] = s1[i];
	i++;
	}

	j = 0;
	while (j < m)
	{
	rs[lg1 + j] = s2[j];
	j++;
	}
	rs[lg1 + m] = '\0';
	return (rs);
}
