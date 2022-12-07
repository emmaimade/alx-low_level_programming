#ifndef _DOG_H_
#define _DOG_H_

/**
* struct dog - a structure that defines a dog
*
* @name: name of the dog (char *)
* @age: age of the dog (float)
* @owner: owner of the dog (char *)
*/

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /* _DOG_H_ */
