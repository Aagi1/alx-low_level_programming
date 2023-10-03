#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - lit un fichier texte et l'imprime sur la sortie
 * @filename: le fichier texte a lire
 * @letters: nombre de lettres qu'il doit lirer et imprimer
 * Return: nb de fichier qu'il peut lier et imprimer
 *         revoie 0 quand filename = NULL
 *
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd;
	ssize_t w;
	ssize_t t;
	char *buf;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * letters);

	if (buf == NULL)
	{
		close(fd);
		return (0);
	}

	t = read(fd, buf, letters);

	if (t < 0)
	{
		close(fd);
		free(buf);
		return (0);
	}

	w = write(STDOUT_FILENO, buf, t);

	if (w != t)
	{
		close(fd);
		free(buf);
		return (0);
	}

	return (0);
	free(buf);
	return (t);
}
