#include "lists.h"

/**
 * reverse_listint - reserver a linked list
 * @head: pointeur to the first node in the list
 *
 * Return: pointeur to the first node in the new list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prevs = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prevs;
		prevs = *head;
		*head = next;
	}

	*head = prevs;

	return (*head);
}
