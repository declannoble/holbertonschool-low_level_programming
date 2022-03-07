#ifndef _DOG_H_
#define _DOG_H_
/**
 * struct dog - struct
 * @name: pointer to name (string)
 * @age: pointer to age (float)
 * @owner: pointer to owner (string)
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
/**
 * typedef dog_t - defines new struct
 */

int _putchar(char c);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
