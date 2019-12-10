#include<stdbool.h>


typedef struct{
int id;
double val;

} tuple_t;

typedef struct {
int size;
int lastID;
tuple_t * nodes;

}btree_t;
/* Create a new binary tree */
btree_t * btree_init();

/* Free the binary tree */
void btree_free(btree_t * tree);

/*
* Add the new value to the tree
* @Return the ID of the new value
*/
int btree_insert(btree_t * tree, double value);

/*
* Remove the node on the given position (according to it's ID)
* @Return it's value, return NaN if no value exists
*/
double btree_remove(btree_t * tree, int id);

/* @Return if the tree is empty */
bool btree_is_empty(btree_t * tree);

/* @Return the number of elements in the btree */
int btree_size(btree_t * tree);

/* Traverse the tree in preorder, for each node, invoke the function with the value and the node ID */
void btree_traverse_preorder(btree_t * tree, void (*traversefunc)(int id, double value));
