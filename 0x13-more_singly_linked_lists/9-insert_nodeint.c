#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - function that inserts new node at a given position
 * @head: pointer to the first node
 * @idx: is the index of the list where the new node should be added
 * @n: value for the new node
 *
 * Return: adress of new node or else nil
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int c;
	listint_t *new_node, *current_node;

	if (head == NULL)
	return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	current_node = *head;
	for (c = 0; c < idx - 1 && current_node != NULL; c++)
	{
		current_node = current_node->next;
	}
	if (current_node == NULL)
		return (NULL);
	new_node->next = current_node->next;
	current_node->next = new_node;
	return (new_node);
}
