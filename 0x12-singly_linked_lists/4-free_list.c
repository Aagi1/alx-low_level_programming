#include <stdlib.h>
#include "lists.h"

/**
 * free_list - liberation d'espace de list chaine
 * @head: list_t list etre libere
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
