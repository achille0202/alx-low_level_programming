#include<stdlib.h>
/** Prototype: void *malloc_checked(unsigned int b);
* Returns a pointer to the allocated memory
* if malloc fails, the malloc_checked function should cause normal process termination with a status value of 98
*/

void *malloc_checked(unsigned int b)
{ 
 void *my_mem;
 my_mem=malloc(b);
 if (my_mem == NULL)
	exit(98);
return(my_mem);
}
