#ifndef _DOG_H_
#define _DOG_H_

/**
* struct dog - a structure that defines a dog
*
* @name: name of the dog (char *)
* @age: age of the dog (float)
* @owner: owner of the dog (char *)
*/

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void print_dog(struct dog *d);
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /* _DOG_H_ */
