#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int recursive_sum(int x, int y);
int main (int argc, char ** argv){
  clock_t t_start;
  clock_t t_end;

  double t = 0;
  int n = 0;
  int average = 0;
  long iteration = 0;
  int sum = 0;

  for(int i = 1; i < argc; i++){
    sum = 0;
    n = atoi(argv[i]);
    char string_comp[n];
    char string_comp2[n];
    printf("%d", n);

    for (int i = 0; i < 5; i++){
      t_start = clock();
      for(int i = 0; i < n; i++){
        sum = sum + i;
      }
      t_end = clock();
      t = ((double)(t_end - t_start));
      iteration = iteration + (t * 1000);
    }
    average = iteration / 5;
    printf(", %d", average);
    iteration = 0;
    average = 0;


    for (int i = 0; i < 5; i++){
      t_start = clock();
      recursive_sum(0,n);
      t_end = clock();
      t = ((double)(t_end - t_start));
      iteration = iteration + (t * 1000);
    }
    average = iteration / 5;
    printf(", %d", average);
    iteration = 0;
    average = 0;

    for (int i = 0; i < n; i++){
      string_comp[i] = '1';
    }
    for (int i = 0; i < n; i++){
      string_comp2[i] = '1';
    }
    for (int i = 0; i < 5; i++){
      int result;
      t_start = clock();
      result = strcmp(string_comp, string_comp2);
      t_end = clock();

      if(result == 1){
        continue;
      }
      t = ((double)(t_end - t_start));
      iteration = iteration + (t * 1000);
    }

    average = iteration / 5;
    printf(", %d", average);
    iteration = 0;
    average = 0;

    printf("\n");
  }

  return 0;
}

int recursive_sum(int x, int y)
{
  if (x == y)
  {
    return x;
  } else {
    x++;

    recursive_sum (x,y);

  }
  return x;
}
