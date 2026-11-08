#include "main.h"
#include <stdio.h>

/**
 *print_array - displays n elements from an array of integers
 *@a : pointer to the first element of the array
 *@n : number of  elements to print
 *
 *
 */
void print_array(int *a, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		printf("%d", a[i]);
		if (i < n - 1)
		{
			printf(", ");
		}
		i++;
	}
	printf("\n");
}
