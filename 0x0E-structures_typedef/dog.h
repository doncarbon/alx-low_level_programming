#ifndef DOG_H
#define DOG_H

void init_dog(struct dog *d, char *name, float age, char *owner);

/**
 * struct dog - dog info
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 * Description: Dog informations
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif
