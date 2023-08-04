#include "main.h"
/**
 * flip_bits - compter de nombre de bits de change
 * to get from one number un autre
 * @n: premier nombre
 * @m: second nombre
 *
 * Return: nombre de bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, compter = 0;
	unsigned long int currents;
	unsigned long int exclusive = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		currents = exclusive >> i;
		if (currents & 1)
			compter++;
	}

	return (compter);
}
