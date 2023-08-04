#include "main.h"
/**
 * get_endianness - chercher si la machine est petit ou grand endian
 * Return: 0 pour grand, 1 pour petit
 */
int get_endianness(void)
{
	unsigned int a = 1;
	char *d = (char *) &a;

	return (*d);
}
