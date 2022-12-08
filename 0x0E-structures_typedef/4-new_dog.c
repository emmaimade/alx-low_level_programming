#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
  * dog_t *new_dog - function that creates a new dog
  * dog_t - Typedef for struct dog
  *
  * @name: name of the new dog (char *)
  * @age: age of the new dog (float)
  * @owner:  owner of the new dog (char *)
  * Return: NULL if the function fails.
  */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dg;

	dg = malloc(sizeof(dog_t));
	if (dg == NULL)
		return (NULL);
	dg->name = name;
	dg->age = age;
	dg->owner = owner;

	return (dg);
}
