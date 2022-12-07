#include <stdio.h>
#include "dog.h"

/**
* init_dog - function that initializes a struct
*
* struct dog *d - struct of a dog with tag name d
* @d: pointer to a structure
* @name: string literal (char *)
* @age: float type variable (float)
* @owner: string literal (char *)
* Return: Nothing.
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
