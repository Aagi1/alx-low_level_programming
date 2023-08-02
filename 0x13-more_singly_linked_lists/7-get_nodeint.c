#include "lists.h"

/**
 * get_nodeint_at_index - retourner the node at a certain index in a linked list
 * @head: premier node in the linked list
 * @index: index de the node to return
 *
 * Return: pointeur to the node we're looking for, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int a = 0;
	listint_t *temps = head;

	while (temps && a < index)
	{
		temps = temps->next;
		a++;
	}

	return (temps ? temps : NULL);
}
