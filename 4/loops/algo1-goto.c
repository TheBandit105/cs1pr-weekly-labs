#include <stdio.h> // # include <stdio.h> tells the compiler to insert contents of stdio in this particular place.
#include <stdlib.h> // # include <stdlib.h> tells the compiler to insert contents of stdlib in this particular place.

int main (int argc, char ** argv) // int main initialises the main subroutine along with the integer and character arguements.
{
  int n = atoi(argv[1]); // int n tells the compiler to convert whatever is typed in n from a string to an integer.
  float m; // float m tells the compiler to declare m as a floating point integer.
  int i = 0; // int i tells the compiler to declare i as an integer that is assigned 0.
  int s = 0; // int s tells the compiler to declare s as an integer that is assigned 0.

  if(n > 0 & n < 11) // if loop tells the compiler to implement the function if whatever integer is typed in n falls between 0 and 10.
  {
    goto loop // goto <name> tells the compiler to go to the function <name>.
  }

  loop:
  for(i = 0; i <= n; i++){ // The for loop tells the compiler to run the for function and the code inside {} until the conditions (i=0, i<=num and i++) are met or exceeded.
    s = s + i; // s is constantly updated everytime variable i increases by 1 whilst repeating the for loop.
  }
  m = ((float)s/i); // m is calculated by the converted integer to float value of s divided by i.

  printf("%d %.1f\n", s, m); // printf %d means print integer for the variable s and %.1f means print floating point integer rounded to 1 decimal place for the variable m.
  return 0; // return 0 terminates the program after the compiler has done it's job.

}
