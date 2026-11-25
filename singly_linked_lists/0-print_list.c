#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints items in a list
 * @h: address of the first node
 *
 * Return: number of node
 */
size_t print_list(const list_t *h)
{
	size_t n = 0;
	const list_t *current = h;

	while (current != NULL)
	{
		if (current->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", current->len, current->str);
		n++;
		current = current->next;
	}
	return (n);
}
