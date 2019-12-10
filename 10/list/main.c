#include <stdio.h>

#include "list.h"

int main(){
  list_t * host= list_init(NULL);
  list_t * node1=list_append(host,(void*) 10);
  list_t * node2=list_append(host,(void*) 15);
  list_t * node3=list_append(host,(void*) 21);
  list_t * node4=list_append(host,(void*) 54);

  list_unlink(node3);
  printlist(host);

  printf("%d \n", list_size(host));
  printf("%p \n", list_value(node3));
  list_free(host);
  printlist(host);
}
