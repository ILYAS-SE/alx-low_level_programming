#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees dogs
 * @d: arraye
 * Description: Free memory for struct
 */
void free_dog(dog_t *d)
{
	if (d0)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
