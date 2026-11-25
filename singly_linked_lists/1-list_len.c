#include "lists.h"

/**
 * list_len - number of elements in a linked list
 * @h: address of the first node
 *
 * Return: number of node
 */
size_t list_len(const list_t *h)
{
	size_t n = 0;
	const list_t *current = h;

	while (current != NULL)
	{
		n++;
		current = current->next;
	}
	return (n);
}
