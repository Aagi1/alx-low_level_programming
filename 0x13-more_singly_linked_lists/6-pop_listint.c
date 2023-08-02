#include "lists.h"

/**
 * pop_listint - supprimer the head node of a linked list
 * @head: pointeur to the first element in the linked list
 *
 * Return: the donnee inside the elements that was deleted,
 * or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temps;
	int numero;

	if (!head || !*head)
		return (0);

	numero = (*head)->n;
	temps = (*head)->next;
	free(*head);
	*head = temps;

	return (numero);
}
