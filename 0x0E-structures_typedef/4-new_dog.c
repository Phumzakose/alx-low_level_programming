#include <stdlib.h>
#include "dog.h"

/**
 * _strcpy - copies the string pointed to by src
 * including the terminating null byte (\0)
 * to the buffer pointed to by dest
 * @dest: pointer to the buffer in which we copy the string
 * @src: string to be copied
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int len, i;
	
	len = 0;
	
	while (src[len] != '\0')
	{
		len++;
	}
	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}


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

	if (s->name == NULL || s->owner == NULL)
	{
		free(s->name), free(s->owner), free(s);
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
	_strcpy(s->name, name);
	_strcpy(s->owner, owner);
	s->age = age;
	return (s);
}
