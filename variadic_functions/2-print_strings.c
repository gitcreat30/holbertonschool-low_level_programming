#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - fonction qui affiche des textes
 * @separator: séparation entre les chaînes de caractères
 * @n: nombre d'arguments
 *
 * */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *txt;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		txt = va_arg(args, char*);
		if (txt == NULL)
			printf("%s", "(nil)");
		else
			printf("%s", txt);
		if (separator && i < n - 1)
			printf("%s", separator);
	}
	va_end(args);
	printf("\n");
}
