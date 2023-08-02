#include "lists.h"

/**
 * free_listint_safe - liberer a linked list
 * @h: pointeur to the first node in the linked list
 *
 * Return: nombre of elements in the freed list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t len = 0;
	int diffs;
	listint_t *temps;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		diffs = *h - (*h)->next;
		if (diffs > 0)
		{
			temps = (*h)->next;
			free(*h);
			*h = temps;
			len++;
		}
		else
		{
			free(*h);
			*h = NULL;
			len++;
			break;
		}
	}

	*h = NULL;

	return (len);
}
