#include <stdio.h>
#include <btree.h>
#include <stdlib.h>
#include <math.h>

typedef struct{
  int size;
  int lastID;
  tuple_t * nodes;
} btree_t;

btree_t * btree_init(){
  btree_t * b = malloc(sizeof(btree_t));
  b->nodes = NULL;
  b->size = 0;
  b->lastID = 0;
  return b;
}

int btree_insert(btree_t * tree, double value){
  int id = t->lastID;
  t->nodes = realloc(t->nodes, sizeof(tuple_t) * (t->size + 1));
  t->nodes[t->size].val = value;
  t->nodes[t->size].id = id;
  t->lastID++;
  t->size++;
  return id;
}

double btree_remove(btree_t * tree, int id){
  for(int i = 0; i < t->size; i++){
    if(t->nodes[i].id == id){
      double val = t->nodes[i].val;
      t->size--;
      t->nodes[i] = t->nodes[t->size];
      return val;
    }
  }
  return NAN;
}

int btree_size(btree_t * tree){
  return tree->size;
}

bool btree_empty(btree_t * tree){
  return tree->size == 0;
}

void btree_traverse_preorder(btree_t * tree, void (*traversefunc)(int id, double value)){
  for(int i = 0; i < t->size; i++){
    traversefunc(t->nodes[i].id, t->nodes[i].val);
  }
}
