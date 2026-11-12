#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *malloc_checked - allouer de la memoire avec malloc
 *@b: nombre d'octet à réserver
 *
 *Return: vers pt de la mémoire réservé
 */
void *malloc_checked(unsigned int b)
{
	void *pt;

	pt = malloc(b);
	if (pt == NULL)
	exit(98);

	return (pt);
}
