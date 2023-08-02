#include "lists.h"

/**
 * delete_nodeint_at_index - supprimer a node in a linked list at a certain index
 * @head: pointeur to the first element in the list
 * @index: index of the node to delete
 *
 * Return: 1 (Victoire), or -1 (Echec)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temps = *head;
	listint_t *current = NULL;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(temps);
		return (1);
	}

	while (i < index - 1)
	{
		if (!temps || !(temps->next))
			return (-1);
		temps = temps->next;
		i++;
	}


	current = temps->next;
	temps->next = current->next;
	free(current);

	return (1);
}
