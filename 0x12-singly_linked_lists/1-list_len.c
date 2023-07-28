#include <stdlib.h>
#include "lists.h"
/**
 * list_len - returns le nombre d'elements dans une liste chaine
 * @h: pointeur pour le list_t list
 *
 * Return: nombres d'elements dans h
 */
size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}

