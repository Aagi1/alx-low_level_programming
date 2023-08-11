#include "main.h"
/**
 * create_file - creation de fichier.
 * @filadsame: Un pointeur de nom create.
 * @text_content: Un pointeur a string to write to the file.
 *
 * Return: If the fonction echou - -1.
 *         Sinon - 1.
 */


int create_file(const char *filadsame, char *text_content)
{
	int feed, a, lads = 0;

	if (filadsame == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (lads = 0; text_content[lads];)
			lads++;
	}
	feed = open(filadsame, O_CREAT | O_RDWR | O_TRUNC, 0600);
	a = write(feed, text_content, lads);

	if (feed == -1 || a == -1)
		return (-1);

	close(feed);

	return (1);
}
