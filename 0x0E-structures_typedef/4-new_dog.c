#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: pointer to the new dog (Success), NULL otherwise
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int i, j;
	int k = 0;
	dog_t *s;

	s = malloc(sizeof(dog_t));

	if (s == NULL)
	{
		return (NULL);
	}

	for (i = 0; name[i]; i++)
		;
	for (j = 0; owner[j]; j++)
		;
	s->name = malloc(i + 1);
	s->owner = malloc(j + 1);
	if (s->name == NULL)
	{
		free(s->name);
		free(s);
		return (NULL);
	}
	if (s->owner == NULL)
	{
		free(s->owner);
		free(s);
		return (NULL);
	}
	while (k < i)
	{
		s->name[k] = name[k];
		k++;
	}
	s->name[k] = '\0';
	while (k < j)
	{
		s->owner[k] = owner[k];
		k++;
	}
	s->owner[k] = '\0';
	s->age = age;
	return (s);
}
