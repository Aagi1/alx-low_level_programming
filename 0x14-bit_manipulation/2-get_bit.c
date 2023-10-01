#include <stdio.h>
#include "main.h"

/**
 * get_bit - renvoie la valeur d'un bit à un index donne
 *
 * @n: Le nombre decimale a convertir
 * @index: index est l'index, a partir de 0 du bit que vous souhaitez obtenir
 *
 *
 * Return: la valeur du bit si succes et -1 si echec
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int taille = 0;
	unsigned long int temp = n;
	unsigned int masque;
	int bit;

	while (temp > 0)
	{
		temp >>= 1;
		taille++;
	}

	if (index >= taille)
	{
		return (-1);
	}

	masque = 1U << index;
	bit = (n & masque) ? 1 : 0;

	return (bit);
}
