#include <stdio.h>
#include <assert.h>
#include <stdlib.h>


typedef struct list_t list_t;

/* Create a new list with the given value */
list_t * list_init(void * value);

/*
 * Free the list element and all connected list elements
 */
void list_free(list_t * lst, void (*freefunc)(void*));

/* Link a new list element with the specified value right of the lst
 * @Return the new list element that stores the value
 */
list_t * list_append(list_t * lst, void* value);

void * printlist(list_t * head);

/*
 * Remove the list element from the linked list
 */
void list_unlink(list_t * lst);

/*
 * Return the list element right of this element
 * Return NULL if none
 */
list_t * list_right(list_t * lst);

/*
 * Return the list element left of this element
 * Return NULL if none
 */
list_t * list_left(list_t * lst);
/*
 * Return the number of elements in this list
 */
int list_size(list_t * lst);
/*
 * Return the value stored in the list element
 */
void * list_value(list_t * lst);

/*
 * Iterate through the list forward (from the current list element) calling listfunc() on each element
 */
void list_iterate_fwd(list_t * lst, void (*traversefunc)(void* data));
