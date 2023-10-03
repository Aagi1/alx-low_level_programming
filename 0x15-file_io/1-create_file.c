#include "main.h"



/**
 * create_file - Creer un fichier
 * @filename: UN pointeur sur le nom du fichier a creer
 * @text_content: Un pointeur sur une chaine de caractere
 *
 * Return: echec - -1.
 *         sinon - 1.
 */

int create_file(const char *filename, char *text_content)
{
	int fichier, s, len = 0;

	if (filename == NULL)
		return (-1);


	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	fichier = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	s = write(fichier, text_content, len);

	if (fichier == -1 || s == -1)
		return (-1);

	close(fichier);

	return (1);
}
