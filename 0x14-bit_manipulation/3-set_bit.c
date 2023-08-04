#include "main.h"
/**
 * set_bit - envoyer le bit at a given index to 1
 * @n: pointeur du nombre de change
 * @index: index du bit to set to 1
 *
 * Return: 1 for success, -1 for echec
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
