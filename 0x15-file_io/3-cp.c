#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *creer_buffer(char *fichier);
void fermer_fichier(int fd);

/**
 * creer_buffer - Alloue 1024 octets pour un tampon.
 * @fichier: Le nom du fichier pour lequel le tampon stocke des caractères.
 *
 * Return: Un pointeur vers le tampon nouvellement alloué.
 */
char *creer_buffer(char *fichier)
{
	char *tampon;

	tampon = malloc(sizeof(char) * 1024);

	if (tampon == NULL)
	{
		dprintf(STDERR_FILENO,
			"Erreur : Impossible d'écrire dans %s\n", fichier);
		exit(99);
	}

	return (tampon);
}

/**
 * fermer_fichier - Ferme les descripteurs de fichiers.
 * @fd: Le descripteur de fichier à fermer.
 */
void fermer_fichier(int fd)
{
	int c;

	c = close(fd);

	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Erreur : Impossible de fermer le descripteur %d\n", fd);
		exit(100);
	}
}

/**
 * main - Copie le contenu d'un fichier dans un autre fichier.
 * @argc: Le nombre d'arguments fournis au programme.
 * @argv: Un tableau de pointeurs vers les arguments.
 *
 * Return: 0 en cas de succès.
 *
 * Description : Si le nombre d'arguments est incorrect - code de sortie 97.
 * Si file_from n'existe pas ou ne peut pas être lu - code de sortie 98.
 * Si file_to ne peut pas être créé ou écrit - code de sortie 99.
 * Si file_to ou file_from ne peuvent pas être fermés - code de sortie 100.
 */
int main(int argc, char *argv[])
{
	int from, to, r, w;
	char *tampon;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Utilisation : cp file_from file_to\n");
		exit(97);
	}

	tampon = creer_buffer(argv[2]);
	from = open(argv[1], O_RDONLY);
	r = read(from, tampon, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || r == -1)
		{
			dprintf(STDERR_FILENO,
				"Erreur : Impossible de lire depuis le fichier %s\n", argv[1]);
			free(tampon);
			exit(98);
		}

		w = write(to, tampon, r);
		if (to == -1 || w == -1)
		{
			dprintf(STDERR_FILENO,
				"Erreur : Impossible d'écrire dans %s\n", argv[2]);
			free(tampon);
			exit(99);
		}

		r = read(from, tampon, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);

	} while (r > 0);

	free(tampon);
	fermer_fichier(from);
	fermer_fichier(to);

	return (0);
}
