#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - function that adds a new node
 *at the beginning of a listint_t list.
 * @head: A pointer to a pointer to the head of the listint_t list.
 * @n: integer to store  the new node.
 *
 * Return: The address of the new node, or NULL if it failed.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new;

new = malloc(sizeof(listint_t));
if (new == NULL)
return (NULL);
new->n = n;

new->next = *head;
*head = new;

return (new);
}

