#include <stdio.h>

/**
 *main - nombre d'arguments passés
 *@argc: nombre d'argument reçu
 *@argv: tableau de chaine de caractère
 *
 *Return: toujours 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
