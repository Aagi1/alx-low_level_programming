#include "main.h"
/**
 * clear_bit - envoyer la valeur of a given bit to 0
 * @n: pointeur to the nombre to change
 * @index: index of the bit to nettoyer 
 *
 * Return: 1 for success, -1 for echec
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
