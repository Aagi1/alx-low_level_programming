#include "lists.h"

/**
 * listint_len - retourne the number of elements in a linked lists
 * @h: linked list of types listint_t to traverse
 *
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
size_t numero = 0;

	while (h)
	{
		numero++;
		h = h->next;
	}

	return (numero);
}

