#include "main.h"

/**
 * binary_to_uint - Convertit un nombre binaire en décimal.
 * @b: La chaîne binaire à convertir.
 *
 * Return: Le nombre converti.
 */
unsigned int binary_to_uint(const char *b)
{
    unsigned int s = 0;
    unsigned int j, k, i;

    for (j = 0; b[j] != '\0'; j++);

    for (i = 0; b[i] != '\0'; i++)
    {
        if (b[i] != '0' && b[i] != '1')
            return (0);

        if (b[i] == '1')
        {
            int p = 1;
            for (k = 0; k < (j - i - 1); k++)
            {
                p *= 2;
            }
            s += p;
        }
    }

    return (s);
}
