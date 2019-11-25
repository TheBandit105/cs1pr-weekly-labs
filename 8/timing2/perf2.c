#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void mall(int n, int * array){

  for(int i = 0; i < n; i++){
    array[i] = i;
  }
}

void freeMem(int * array){
  free(array);
}

void callByValue(int n){
  int j = n;

  for(int i = 0; i < j; i++){
    n++;
  }
}

void callByReference(int * n){
  int j = *n;

  for(int i = 0; i < j; i++){
    *n++;
  }
}

int main(int argc, char ** argv){
  int * ptr;
  int currentVariable;
  int currentVariableRef;
  clock_t start;
  clock_t end;
  double timeSpentForMall;
  double timeSpentForSumFreeMem;
  double timeSpentForVal;
  double timeSpentForRef;

  printf("n, malloc, free, callbyvalue, callbyreference\n");

  for(int i = 1; i < argc; i++){
    currentVariable = atoi(argv[i]);
    ptr = (int *)malloc(currentVariable * sizeof(int));

    start = clock();
    mall(currentVariable, ptr);
    end = clock();
    timeSpentForMall = (double)(end - start)/ CLOCKS_PER_SEC * 1e9;

    start = clock();
    freeMem(ptr);
    end = clock();
    timeSpentForSumFreeMem = (double)(end - start)/ CLOCKS_PER_SEC * 1e9;

    start = clock();
    callByValue(currentVariable);
    end = clock();
    timeSpentForVal = (double)(end - start)/ CLOCKS_PER_SEC * 1e9;

    start = clock();
    currentVariableRef = currentVariable;
    callByReference(&currentVariableRef);
    end = clock();
    timeSpentForRef = (double)(end - start)/ CLOCKS_PER_SEC * 1e9;

    printf("%d, %.0lf, %.0lf, %.0lf, %.0lf\n", currentVariable, timeSpentForMall, timeSpentForSumFreeMem, timeSpentForVal,timeSpentForRef);
  }
}
