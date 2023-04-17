#ifndef DOG_H
#define DOG_H
/**
 * struct dog - A new type describing the variable dog.
 * @name: The name of the variable.
 * @age: The age of the vaariable.
 * @owner: The owner of the variable.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
/**
 * dog_t - New type for type dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
