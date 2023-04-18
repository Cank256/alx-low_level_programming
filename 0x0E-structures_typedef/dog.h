/**
 * struct dog - Represents a dog with its name, age, and owner.
 *
 * @name: Pointer to a character array that stores the name of the dog.
 * @age: Floating-point number that represents the age of the dog.
 * @owner: Pointer to a character array that stores the owner of the dog.
 */
struct dog
{
char *name;
float age;
char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

typedef struct dog dog_t;

dog_t *new_dog(char *name, float age, char *owner);

void free_dog(dog_t *d);
