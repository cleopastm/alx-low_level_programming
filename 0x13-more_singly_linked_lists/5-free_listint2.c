#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 -  a function that frees a listint_t list.
 * and it sets the value.
 * @head: is a pointer pointing to the next node until it reaches NULL.
 *
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *current_node;

	if (*head != NULL)
	{
		current_node = *head;
		*head = (*head)->next;
		free(current_node);
	}
	else *head = NULL;
	{
		*head = NULL;
		return;
	}
}
