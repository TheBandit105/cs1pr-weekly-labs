#include <stdio.h>

#include <btree.h>

void pit(int id, double value){
printf("ID: %d val: %f\n", id, value);
}
int main(int argc, char ** argv){
btree_t * b = btree_init();
int id1 = btree_insert(b, 10.5);
int id2 = btree_insert(b, 20.5);
printf("%d %d\n", id1, id2 );

btree_traverse_preorder(b, pit);

double v = btree_remove(b, 100);
printf("remove 100: %f\n",v );
v = btree_remove(b, id1);
printf("remove id1: %f\n",v );
v = btree_remove(b, id2);
printf("remove id2: %f %d\n", v, btree_size(b));
return 0;
}
