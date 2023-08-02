#include "lists.h"

/**
 * insert_nodeint_at_index - inserer un nouveau in a linked list,
 * at a given position
 * @head: pointeur to the first node in the list
 * @idx: index where the new node is added
 * @n: data to insert in the new node
 *
 * Return: pointer to the new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int a;
	listint_t *news;
	listint_t *temps = *head;

	news = malloc(sizeof(listint_t));
	if (!news || !head)
		return (NULL);

	news->n = n;
	news->next = NULL;

	if (idx == 0)
	{
		news->next = *head;
		*head = news;
		return (news);
	}

	for (a = 0; temps && a < idx; a++)
	{
		if (a == idx - 1)
		{
			news->next = temps->next;
			temps->next = news;
			return (news);
		}
		else
			temps = temps->next;
	}

	return (NULL);
}
