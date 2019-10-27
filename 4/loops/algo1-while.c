#include <stdio.h> // # include <stdio.h> tells the compiler to insert contents of stdio in this particular place.
#include <stdlib.h> // # include <stdlib.h> tells the compiler to insert contents of stdlib in this particular place.

int main (int argc, char ** argv)  // This part of the program declares the main subroutine along the declaring the integer and character arguements so that the program can accept any numeric and letter variables in the program.
{
int s = 0; //int s tells the compiler that s is declared as an integer that is assigned as 0.
int i = 0; //int i tells the compiler that i is declared as an integer that is assigned as 0.
int num = atoi(argv[1]); //int num tells the compiler that any string typed will be converted into an integer.
float m; // float m tells the compiler that m is declared as a floating point integer.

while (i <= num) // while i <= num means this loop will continue so long as the value i is less than or equal to the value of num.
{
  s = s + i; // s is constantly updated as the variable i increases by 1 in this while loop.
  i++; // i++ increases the variable i by 1.
}
 m = ((float)s/i); // m is calculated by the converted answer of s divided by i to a floating point integer.

 printf ("%d %.1f\n", s, m); // %d means print s as an integer and %.1f\n means print m as a floating point integer rounded to 1 decimal point.
 return 0; // Terminates program.
}
