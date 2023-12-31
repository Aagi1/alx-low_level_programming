#ifndef LISTS_H
#define LISTS_H

/**
 * struct list_s - singly liste chainee
 * @str: string - (malloc ' ed string)
 * @len: longueur of the string
 * @next: points pour the next node
 *
 * Description: singly liste chaine node structure
 * pour Holberton project
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;
void free_list(list_t *head);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
#endif
