#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - a function that deletes the head node
 * of a listint_t linked list, and returns the head node’s data (n).
 * @head: pointer to the node
 *
 * Return: 0 if sucessful or void if not
 */

int pop_listint(listint_t **head)
{
	listint_t *temp_ptr;
	int data;

	if (*head == NULL)
		return (0);

	else
		temp_ptr = *head;
	*head = (*head)->next;
	data = temp_ptr->n;
	free(temp_ptr);

	return (data);
}
