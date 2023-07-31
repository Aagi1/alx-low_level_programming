#include "lists.h"

/**
 * prints all the elements of a listint_t list.
 * @h: liste chaînée de type listint_t à imprimer
 * Return: the number of nodes
*/
size_t print_listint(const listint_t *h)
{
size_t num = 0;
	while (h)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}
	return (num);
}


