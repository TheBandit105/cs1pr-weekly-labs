#include <stdio.h>
#include <math.h>
#include <string.h>
#include <my_lib.h>
#include <stdlib.h>

int main(int argc, char * argv[]) {

  char * o = argv[1];
  int num[argc-2];
  int arg = 2;

  while (arg < argc)
  {
    num[arg-2] = atoi(argv[arg]);
    arg+=1;
  }
  if (strcmp(o, "mean") == 0)
  {
    printf("%.1f\n", opmean(num, argc-2));
  }
  if (strcmp(o, "max") == 0)
  {
    printf("%.1f\n", opmax(num, argc-2));
  }
  if (strcmp(o, "sd") == 0)
  {
    printf("%.1f\n", opsd(num, argc-2));
  }
return 0;
}
