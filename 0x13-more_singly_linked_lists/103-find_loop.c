#include "lists.h"

/**
 * find_listint_loop - trouver the loop in a linked list
 * @head: linked list to search for
 *
 * Return: address of the node where the loop starts, or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slows = head;
	listint_t *fasts = head;

	if (!head)
		return (NULL);

	while (slows && fasts && fasts->next)
	{
		fasts = fasts->next->next;
		slows = slows->next;
		if (fasts == slows)
		{
			slows = head;
			while (slows != fasts)
			{
				slows = slows->next;
				fasts = fasts->next;
			}
			return (fasts);
		}
	}

	return (NULL);
}
