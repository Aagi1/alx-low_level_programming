#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - ajouter un nouveau code au debut de la liste chaine
 * @head: double pointeur pour list_t list
 * @str: nouveau string to add in the node
 *
 * Return: l'address de nouveau elements, or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int len = 0;

	while (str[len])
		len++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = len;
	new->next = (*head);
	(*head) = new;

	return (*head);
}
