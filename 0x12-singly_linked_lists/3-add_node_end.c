#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a linked list
 * @head: double pointer to the list_t list
 * @str: string to put in the new node
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int len = 0;
	list_t *node, *end;

	for (len = 0; str[len];)
		len++;
	node = malloc(sizeof(list_t));
	if (!node)
	{
		return (NULL);
	}
	node->str = strdup(str);
	node->len = len;
	node->next = NULL;
	if (*head == NULL)
	{
		*head = node;
		return (node);
	}

	else
	{
		end = *head;
		while (end->next != NULL)
			end = end->next;
		end->next = node;
	}
	return (*head);
}
