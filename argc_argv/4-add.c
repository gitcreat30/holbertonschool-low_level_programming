#include <stdio.h>
#include <stdlib.h>

/**
 *main - affiche le résultat de l'addition
 *@argc: nombre d'argument reçu
 *@argv: tableau de chaines de caractère
 *
 *
 *Return: 0 en cas succès et 1 en cas d'erreur
 */
int main(int argc, char *argv[])
{
	int i, j, somme;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	i = 1;
	j = 0;
	somme = 0;
	while (i < argc)
	{
		j = 0;
	while (argv[i][j] != '\0')
	{
	if (argv[i][j] < '0' || argv[i][j] > '9')
		{
		printf("Error\n");
		return (1);
		}
		j++;
	}
	somme = somme + atoi(argv[i]);
		i++;
	}
	printf("%d\n", somme);
		return (0);
}
