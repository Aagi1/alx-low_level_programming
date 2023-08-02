#include "lists.h"

/**
 * prints all the elements of a listint_t list.
 * @h: liste chainee de type listint_t a imprimer
 * Return: the number of nodes
*/
size_t print_listint(const listint_t *h)
{
size_t numero = 0;
	while (h)
	{
		printf("%d\n", h->n);
		numero++;
		h = h->next;
	}
	return (numero);
}


