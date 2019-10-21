#include <stdio.h>

/* This program shall print the circumference of a circle */
int main(int argc, char * argv[]) {
    
  float r = 4.5;
  
  float circ = r * r * 3.141597;// pi approximated //

  printf("The circumference of the circle with radius %f is %f\n", r, circ);
  
  return 0;
}

