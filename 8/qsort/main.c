#include "qsort.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[]){
  if (argc == 1){
    exit(1);
  }
  int A[argc - 1];
  for(int i = 1; i < argc; i++){
    A[i-1] = atoi(argv[i]);
  }
  int n = sizeof(A)/ sizeof(A[0]);
  quicksort(A, 0, n - 1);
  Array(A, n);
  return 0;
}

void Array(int A[], int size){
  int i;
  for (i = 0; i < size; i++){
    printf("%d ", A[i]);
  }
  printf("\n");
}
