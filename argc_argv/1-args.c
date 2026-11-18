#include <stdio.h>

/**
 *main - nombre d'arguments passés
 *@argc: nombre d'arguments
 *@argv: tableau de chaine de caractère
 *
 *Return: toujours 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
