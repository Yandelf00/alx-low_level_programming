#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - our func that creates a new dog
 * @new_name: dog's name
 * @new_age: dog's age
 * @new_owner: dog's owner
 * Return: new dog if success and NULL if it fails.
 */
dog_t *new_dog(char *new_name, float new_age, char *new_owner)
{
	dog_t *dog_ptr;
	char *dog_name, *dog_owner;
	int name_len, owner_len, i;

	dog_ptr = malloc(sizeof(dog_t));
	if (!dog_ptr)
		return (NULL);
	for (name_len = 0; new_name[name_len]; name_len++)
		;
	for (owner_len = 0; new_owner[owner_len]; owner_len++)
		;
	name_len++;
	owner_len++;
	dog_name = malloc(name_len);
	if (!dog_name)
	{
		free(dog_ptr);
		return (NULL);
	}
	dog_owner = malloc(owner_len);
	if (!dog_owner)
	{
		free(dog_name);
		free(dog_ptr);
		return (NULL);
	}
	for (i = 0; i < name_len; i++)
		dog_name[i] = new_name[i];
	for (i = 0; i < owner_len; i++)
		dog_owner[i] = new_owner[i];

	dog_ptr->name = dog_name;
	dog_ptr->owner = dog_owner;
	dog_ptr->age = new_age;

	return (dog_ptr);
}
