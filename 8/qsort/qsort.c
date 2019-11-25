#include "qsort.h"

void swap (int * a, int * b){
  int t = *a;
  *a = *b;
  *b = t;
}

void quicksort(int A[], int lo, int hi){
  if (lo < hi){
    int p = partition(A, lo, hi);
    quicksort(A, lo, p - 1);
    quicksort(A, p + 1, hi);
  }
}

int partition (int A[], int lo, int hi){
  int pivot = A[hi];
  int i = (lo - 1);
  for (int j = lo; j <= hi - 1; j++){
    if (A[j] <= pivot){
    i++;
    swap(&A[i], &A[j]);
  }
}

swap(&A[i + 1], &A[hi]);
return (i + 1);
}
