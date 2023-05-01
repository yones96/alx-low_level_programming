#ifndef DOG_H
#define DOG_H

/**
 * struct pet - basic information about a pet
 * @name: the pet's name
 * @age: the pet's age
 * @owner: the owner's name
 */
struct dog
{
char *name;
float age;
char *owner;
};

/**
 * pet_t - typedef for struct dog
 */
typedef struct pet dog_h;

/**
 * init_pet - initializes a pet structure with given values
 * @p: pointer to the pet structure
 * @name: the pet's name
 * @age: the pet's age
 * @owner: the owner's name
 */
void init_pet(struct pet *p, char *name, float age, char *owner);

/**
 * print_pet - prints the details of a pet
 * @p: pointer to the pet structure
 */
void print_pet(struct pet *p);

/**
 * new_pet - creates a new pet structure with given values
 * @name: the pet's name
 * @age: the pet's age
 * @owner: the owner's name
 *
 * Return: a pointer to the newly created pet structure, or NULL on failure
 */
pet_t *new_pet(char *name, float age, char *owner);

/**
 * free_pet - frees memory allocated for a pet structure
 * @p: pointer to the pet structure to be freed
 */
void free_pet(pet_t *p);

/**
 * _strcpy - copies the string pointed to by src, including the null terminator,
 *           to the buffer pointed to by dest
 * @dest: pointer to the buffer to copy to
 * @src: pointer to the string to copy
 *
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src);

/**
 * _strlen - returns the length of a string
 * @s: pointer to the string
 *
 * Return: length of the string
 */
int _strlen(char *s);

#endif
