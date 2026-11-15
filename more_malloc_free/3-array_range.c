#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *array_range - mise à zéro de la zone memoire
 *@min: valeur d'entier min
 *@max: valeurs d'entier max
 *
 *Return: NULL ou arr
 */
int *array_range(int min, int max)
{
	int *arr;
	int size;
	int i;

	if (min > max)
		return (NULL);

	size = (max - min + 1);
	arr = malloc(size * sizeof(int));
	if (arr == NULL)
		return (NULL);

	i = 0;
	while (i < size)
	{
		arr[i] = min + i;
		i++;
	}
	return (arr);
}
