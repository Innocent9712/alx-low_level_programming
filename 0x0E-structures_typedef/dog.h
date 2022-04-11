#ifndef DOG_H
#define DOG_H
/**
 * struct dog - A struct for the dog object
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner name
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
#endif /* DOG_H */
