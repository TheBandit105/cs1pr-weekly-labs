#include <stdio.h> // # include <stdio.h> tells the compiler to insert contents of stdio in this particular place.
#include <stdlib.h> // # include <stdlib.h> tells the compiler to insert contents of stdlib in this particular place.

int combnum(int num) // int combnum initialises the subroutine combnum along with initialising the variable num.
{
  if(num <= 0) // if num is less than or equal to 0, the num will add to the function combnum where num will be subtracted by 1.
  return(num + combnum(num-1));
  return 0; // Terminates the program.
  }
int main(int argc, char ** argv) // int main initialises the main subroutine along with the integer and character arguements.
{
  int arg = atoi(argv[1]); // int arg assigned as anything converted from string to integer.
  float m = arg/2; // float m assigned as integer arg divided by 2.
  int sum = combnum(arg); // int sum calls upon the combnum subroutine.

  printf("%d %.1f\n", sum, (float)arg/2); // prints the sum as an integer and the mean as a floating point integer rounded to 1 decimal place.
}
