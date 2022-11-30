#include "lists.h"

/**
 * print_listint - Prints all of the elements of a linked list.
 * @h: Pointer to a linked list head.
 * Return: The number of total nodes in the linked list.
 */
size_t print_listint(const listint_t *h)
{
	register int i = 0;

	if (h == NULL)
		return (0);

	while (h)
	{
		printf("%i\n", h->n);
		i++;
		h = h->next;
	}
	return (i);
}
