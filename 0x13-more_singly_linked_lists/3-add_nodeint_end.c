#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - function that adds a new node
 * at the end of a listint_t list.
 *@head: pointer to the new node
 * listint_s - function
 *Return: the address of the new element, or NULL if it failed
 */

struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;


listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new = (listint_t *) malloc(sizeof(listint_t));
listint_t *temp = *head;

if (new == NULL)
{
	return (NULL);
}

	 new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
	*head = newe;
	}
	else
	{
	while (temp->next != NULL)
	{
		temp = temp->next
	}
	temp->next = new;
}
return (new);
}

