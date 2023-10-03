#include "main.h"

/**
 * append_text_to_file - Ajoute du texte à la fin d'un fichier.
 * @filename: Un pointeur vers le nom du fichier.
 * @text_content: La chaîne de caractères à ajouter à la fin du fichier.
 *
 * Return: Si la fonction échoue ou filename est NULL - -1.
 *         -1 le fichier n'existe pas ou pas de permission
 *         Sinon - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, longueur = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (longueur = 0; text_content[longueur];)
			longueur++;
	}

	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, longueur);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}
