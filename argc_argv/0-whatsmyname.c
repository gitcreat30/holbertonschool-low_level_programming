#include <stdio.h>

/**
 *main - impression d'un nom
 *@argc: nombre d'arguments
 *@argv: tableau de chaine de caractère
 *
 *Return: toujours 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
