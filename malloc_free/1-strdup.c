#include "main.h"
#include <stdlib.h>

/**
 *_strdup - newly allocated space in memory
 *@str: string which is a duplicate
 *
 *Return: NULL
 */
char *_strdup(char *str)
{
	char *copie;
	unsigned int lg;
	unsigned int i;

	if (str == NULL)
		return (NULL);

	lg = 0;
	while (str[lg] != '\0')
		lg++;

	copie = malloc(sizeof(char) * (lg + 1));
	if (copie == NULL)
		return (NULL);

	i = 0;
	while (i <= lg)
	{
		copie[i] = str[i];
		i++;
	}

	return (copie);
}
