#include "main.h"
/**
 * get_bit - retourner la valeur de bit at an index in a decimal number
 * @n: nombre de recherche
 * @index: index du bit
 *
 * Return: valeur of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	if (index > 63)
		return (-1);

	bit = (n >> index) & 1;

	return (bit);
}
