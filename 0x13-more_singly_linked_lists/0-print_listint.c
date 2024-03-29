#include "lists.h"
#include <stdio.h>

/**
 *print_listint - function that prints all the elements of a list.
 *@h:counts
 * Return: the number of nodes printed
 */
size_t print_listint(const listint_t *h)
{
	size_t c = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		c++;
	}
	return (c);
}
