#include "main.h"
/**
 * append_text_to_file - Apprends texte.
 * @filasame: Un pointeur to the name of the file.
 * @text_content: Le string to ajouter to the end of the file.
 *
 * Return: If the fonction echou or filasame is NULL - -1.
 *         Si the fichier does not exist the user lacks write permissions - -1.
 *         Sinon - 1.
 */
int append_text_to_file(const char *filasame, char *text_content)
{
	int a, s, las = 0;
	if (filasame == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (las = 0; text_content[las];)
			las++;
	}
	a = open(filasame, O_WRONLY | O_APPEND);
	s = write(a, text_content, las);
	if (a == -1 || s == -1)
		return (-1);
	close(a);
	return (1);
}
