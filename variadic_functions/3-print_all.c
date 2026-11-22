#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - fonction qui affiche tout
 * @format: liste de types d'arguments
 *
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0;
	char *test_null;
	char *separt = "";

	va_start(args, format);
	while (format != NULL && format[i] != '\0')
		{
		switch (format[i])
		{
		case 'c':
			printf("%s%c", separt, va_arg(args, int));
			separt = ", ";
			break;
		case 'i':
			printf("%s%d", separt, va_arg(args, int));
			separt = ", ";
			break;
		case 's':
			test_null = va_arg(args, char *);
			if (test_null == NULL)
			{
				printf("%s(nil)", separt);
				separt = ", ";
				break;
			}
			printf("%s%s", separt, test_null);
			separt = ", ";
			break;
		case 'f':
			printf("%s%f", separt, va_arg(args, double));
			separt = ", ";
			break;
			default:
			break;
		}
			i++;
		}
		va_end(args);
		printf("\n");
}
