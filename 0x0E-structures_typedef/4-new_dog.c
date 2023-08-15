#include "dog.h"

/**
 * new_dog - creates a new dog
 *
 * @name: name of dog
 *
 * @age: age of dog
 *
 * @owner: owner of dog
 *
 * Return: NULL if function fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	if (!name || age < 0 || !owner)
	{
		return (NULL);
	}

	dog = (dog_t *)malloc(sizeof(dog_t));
	if (dog == NULL)
	{
		return (NULL);
	}

	dog->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}

	dog->name = _strcpy(dog->name, name);
	dog->age = age;
	dog->owner = _strcpy(dog->owner, owner);

	return (dog);
}

/**
 * _strlen - function that returns the length of a string.
 *
 * @s: string
 *
 * Return: length
 */
int _strlen(char *s)
{
	int i;

	if (s == NULL)
	{
		return (1);
	}
	else
	{
		i = 0;
		while (s[i] != '\0')
		{
			i++;
		}
	}

	return (i);
}

/**
 * _strcpy - function that copies the string pointed to by src
 * including the terminating null byte (\0) to the buffer pointed to by dest.
 *
 * @dest: destination string
 *
 * @src: source string
 *
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
