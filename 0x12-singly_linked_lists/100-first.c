#include <stdio.h>

void first(void) __attribute__ ((constructor));

/**
 * first - affiche la sentence avant le main
 * function est executee
 */
void first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
