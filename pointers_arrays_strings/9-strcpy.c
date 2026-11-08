#include "main.h"
#include <stdio.h>

/**
 * _strcpy - function that copies the string pointed to by src
 * @dest : the buffer pointed
 * @src : pointer to the first element of the array
 *
 * Return: pointer to des
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
		{
		dest[i] = src[i];
		i++;
		}
		dest[i] = src[i];
		return (dest);
}
