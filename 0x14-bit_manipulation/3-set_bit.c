#include <stdio.h>

/**
 * set_bit - definit la valeur d'un bit à 1 a un index donne
 *
 * @n: le nombre decimale
 * @index: la valeur de l'index
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int taille = 0;
	unsigned long int temp = *n;
	unsigned long int masque;

	while (temp > 0)
	{
		temp >>= 1;
		taille++;
	}

	if (index >= taille)
	{
		return (-1);
	}

	masque = 1UL << index;
	*n |= masque;

	return (1);
}
