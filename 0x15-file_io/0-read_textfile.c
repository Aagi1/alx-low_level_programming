#include "main.h"
#include <stdlib.h>
/**
 * read_textfile- Lire le texte afficher to STDOUT.
 * @filename: texte file etre lu
 * @letters: nombre de lettres a lire
 * Return: w- actual nombre de bytes read and printed
 *        0 quand fonction fails or filename is NULL.
 */


ssize_t read_textfile(const char *filename, size_t letters)
{
	char *bof;

	ssize_t fd;

	ssize_t w;

	ssize_t t;

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);
	bof = malloc(sizeof(char) * letters);
	t = read(fd, bof, letters);
	w = write(STDOUT_FILENO, bof, t);

	free(bof);

	close(fd);

	return (w);
}
