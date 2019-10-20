#include <stdio.h>

/* This program shall print the circumference of a circle */
int main(int argc, char * argv[]) {
    
  int r = 4.5;
  
  float circ = 4.5 * 4.5 * 3.141597;// pi approximated //

  printf("The circumference of the circle with radius %d.5 is %f\n", r, circ);
  
  return 0;
}

