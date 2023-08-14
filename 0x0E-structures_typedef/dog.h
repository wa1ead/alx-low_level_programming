#ifndef DOG_H
#define DOG_H

/**
 * struct dog - dog structure
 * @name: var name
 * @age: var age
 * @owner: var owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * init_dog - initializes variable
 * @d: pointer
 * @name: var name
 * @age: var age
 * @owner: var owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}

#endif
