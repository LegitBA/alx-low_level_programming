#include "lists.h"
#include <string.h>

/**
 * add_node - adds a new node
 * @head: a pointer to the head list
 * @str: string
 * Return: Null, address
 */

list_t *add_node(list_t **head, const char *str)
{
	char *dup;
	int len;
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULLL)
		return (NULL);
	dup = strdup(str);
	if (dup == NULL)
	{
		free(new);
		return (NULL);
	}

	for (len = 0; str[len];)
		len++;

	new->str = dup;
	new->len = len;
	new->next = *head;
	*head = new;
	return (new);
}
