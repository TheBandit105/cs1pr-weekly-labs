#include <stdio.h>
#include <assert.h>
#include <stdlib.h>

struct list_t{

  void* data;
  struct list_t * next;
  struct list_t * prev;
};

typedef struct list_t list_t;


list_t * list_init(void * value){
  list_t * host = (list_t*)malloc(sizeof(list_t));
  host->data=value;
  host->prev=NULL;
  host->next=NULL;
  return host;
}

void list_free(list_t * lst, void (*freefunc)(void*)){
  // This function isn't working as intended. Check what it really does.
  if(lst->prev!=NULL){
    for(list_t * cur = lst->prev;cur!=NULL;cur=cur->next){
     free(cur);
    }
  }
  if(lst->next!=NULL){
      for(list_t * cur = lst->next;cur!=NULL;cur=cur->next){
        free(cur);
    }
  }
}


list_t * list_append(list_t * lst, void* value){
  list_t * newnode = (list_t*)malloc(sizeof(list_t));
  newnode->data=value;
  newnode->prev=lst;
  newnode->next=lst->next;
  if(lst->next!=NULL)
     lst->next->prev=newnode;
  lst->next=newnode;
  return newnode;
}

void printlist(list_t * host){
  for(list_t * cur = host;cur!=NULL;cur=cur->next){
    printf("%p ", cur->data);
  }
  printf("\n");
}

void list_unlink(list_t * lst){
  list_t * nextnode = lst->next;
  list_t * prevnode = lst->prev;
  if(nextnode!=NULL)
    nextnode->prev=prevnode;
  if(prevnode!=NULL)
    prevnode->next=nextnode;
  lst->prev = NULL;
  lst->next = NULL;
  free(lst);
}

list_t * list_right(list_t * lst){
  if(lst->next==NULL){
    return NULL;
  }else{
    return lst->next;
  }

}

list_t * list_left(list_t * lst){
  if(lst->prev==NULL){
    return NULL;
  }else{
    return lst->prev;
  }
}

int list_size(list_t * lst){
  int i=1;
  for(list_t * cur = lst->next; cur !=NULL ;cur=cur->next){
    i++;
  }
  return i;
}

void * list_value(list_t * lst){
  void * value=lst->data;
  return value;
}

void list_iterate_fwd(list_t * lst, void (*traversefunc)(void* data)){
  for(list_t * cur = lst->next;cur!=NULL;cur=cur->next){
    traversefunc(cur);
  }
}
