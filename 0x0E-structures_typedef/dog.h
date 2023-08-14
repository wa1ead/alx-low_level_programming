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

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
struct dog = dog_t;

#endif
