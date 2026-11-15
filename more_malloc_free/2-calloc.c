#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *_calloc - mise à zéro de la zone memoire
 *@nmemb: tableau de nb elements
 *@size: nombre d'octets
 *
 *Return: NULL ou p
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int total;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	total = nmemb * size;
	p = malloc(total * sizeof(char));
	if (p == NULL)
		return (NULL);

	i = 0;
	while (i < total)
	{
		p[i] = 0;
		i++;
	}
	return (p);
}
