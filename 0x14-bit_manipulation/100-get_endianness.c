#include <stdio.h>

/**
 * get_endianness -  checks the endianness
 *
 * Return: 0 if big endian, 1 if little endian
 */


int get_endianness(void)
{
	unsigned int num = 1;
	unsigned char *p = (unsigned char *)&num;

	return ((p[0] == 1) ? 1 : 0);
}
