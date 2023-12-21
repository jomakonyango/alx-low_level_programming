#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Defines a new type struct dog
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 *
 * Description: Longer description
 */
struct dog
{
char *name;
float age;
char *owner;
};

/* Function prototypes */
void init_dog(struct dog *d, char *name, float age, char *owner);


#endif /* DOG_H */

