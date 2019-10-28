#include <stdio.h> // # include <stdio.h> tells the compiler to insert contents of stdio in this particular place.
#include <stdlib.h> // # include <stdlib.h> tells the compiler to insert contents of stdlib in this particular place.
#include <string.h> // # include <string.h> tells the compiler to insert contents of string in this particular place.
#include <stdbool.h> // # include <stbool.h> tells the compiler to insert contents of stbool in this particular place.

int main (int argc, char ** argv) // This part of the program declares the main subroutine along the declaring the integer and character arguements so that the program can accept any numeric and letter variables in the program.
{
  bool pldrm = true; // The boolean variable pldrm is declared as true.
  char * str = argv[1]; // This is a single value which is a pointer to a character.
  int n = strlen(str); // This declares n as a integer which is assigned to the string length of the variable string.
  int i = 0; // This declares i as an integer which is assigned the value of 0.
  loop: ;
  (str[i] != str[n-i-1]); // Determines if string array of i is not equal to the string array of strlen(str) - i - 1.
  {
    pldrm = false;./
    i++;
  }
  if(i < n/2) // If this if condition is met, then the if function will go to the loop function, which will declare the pldrm as false and increase the variable i by 1.
  {
    goto loop;
  }
  if(pldrm) // If the boolean variable pldrm still returns as true even after going through the loop function, then the compiler will print 'printf("This is a palindrome.\n")'.
  {
    printf("This is a palindrome.\n");
  }
  else // If the boolean variable pldrm still returns as false, then the compiler prints 'printf("Error! This is not a palindrome.\n")'.
  {
    printf("Error! This is not a palindrome.\n");
    return 0; // Terminates program.
  }
}
