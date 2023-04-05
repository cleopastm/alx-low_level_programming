#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint - a function that returns the sum
 * of all the data (n) of a listint_t linked list.
 * @head: a pointer to the first node of the list
 *
 * Return: sum of the n node data or 0 if list is empty
 */

int sum_listint(listint_t *head)
{
	listint_t *current_node = head;
	int sum = 0;

	while (current_node != NULL)
	{
		sum += current_node->n;
		current_node = current_node->next;
	}
	return (sum);
}
