#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth node of a linked list
 * @head: pointer to the first node
 * @index: number of the node in the list
 *
 * Return: current node data if succssful or nil if not
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current_node = head;
	unsigned int  c = 0;

	while (current_node != NULL)
	{
		if (c == index)
		{
			return (current_node);
		}
		c++;
		current_node = current_node->next;
	}
	return (NULL);
}
