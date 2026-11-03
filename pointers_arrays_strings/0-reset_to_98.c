#include "main.h"
#include <stdio.h>

/**
 * main - vérification du code
 * reset_to_98 - Updating pointer value 98
 * @n: pointer vers l'adresse écrite dans n
 *
 * Return: 0
 */

void reset_to_98(int *n)
{
	*n = 98;
}

int main(void)
{
	int n;

	n = 402;
	printf("n=%d\n", n);
	reset_to_98(&n);
	printf("n=%d\n", n);
	return (0);
}
