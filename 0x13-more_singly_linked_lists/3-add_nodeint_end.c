#include "lists.h"

/**
 * add_nodeint_end - ajouter une node at the end of a linked list
 * @head: pointeur to the first element in the list
 * @n: donnée à insérer in the new element
 *
 * Return: pointeur to the new node, or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *news;
	listint_t *temps = *head;

	news = malloc(sizeof(listint_t));
	if (!news)
		return (NULL);

	news->n = n;
	news->next = NULL;

	if (*head == NULL)
	{
		*head = news;
		return (news);
	}

	while (temps->next)
		temps = temps->next;

	temps->next = news;

	return (news);
}
