#include "lists.h"

/**
 * sum_listint - calculer la somme de toutes les donnes in a listint_t list
 * @head: premier node in the linked list
 *
 * Return: resulting sum
 */
int sum_listint(listint_t *head)
{
	int sums = 0;
	listint_t *temps = head;

	while (temps)
	{
		sums += temps->n;
		temps = temps->next;
	}

	return (sums);
}
