#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node in a linked list at a certain index
 * @head: pointer to the first element in the list
 * @index: index of the node to delete
 *
 * Return: 1 if Success otherwise -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tempNode = *head;
	listint_t *currentNode = NULL;
	unsigned int i = 0;

	if (*head == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		*head = (*head)->next;
		free(tempNode);
		return (1);
	}

	while (i < index - 1)
	{
		if (!tempNode || !(tempNode->next))
		{
			return (-1);
		}
		tempNode = tempNode->next;
		i++;
	}


	currentNode = tempNode->next;
	tempNode->next = currentNode->next;
	free(currentNode);

	return (1);
}
