#include <stdio.h>

/**
 * flip_bits - renvoie le nombre de bits un nombre à un autre
 *
 * @n: premier nombre
 * @m: second nombre
 *
 * Return: la valeur recherchee
 *
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_result = n ^ m;
	unsigned int count = 0;

	while (xor_result > 0)
	{
		count += xor_result & 1;
		xor_result >>= 1;
	}

	return (count);
}
