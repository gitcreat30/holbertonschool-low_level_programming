#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - fonction qui renvoie la somme de ses paramètres
 *@n: nombres d'arguments
 *
 * Return: somme
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int sum = 0;
	unsigned int i;

	if (n == 0)
		return (0);
	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}
	va_end(args);
	return (sum);
}
