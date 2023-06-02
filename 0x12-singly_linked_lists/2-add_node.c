#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a linked list
 * @head: double pointer to the list_t list
 * @str: string to add in the node
 * Return: Nothing
 */
list_t *add_node(list_t **head, const char *str)
{
	 unsigned int len = 0;
	 list_t *node;

	 while (str[len])
		 len++;
	 node = malloc(sizeof(list_t));

	 if (!node)
		 return (NULL);

	 node->str = strdup(str);
	 node->len = len;
	 node->next = *head;
	 *head = node;
	 return (*head);
}
