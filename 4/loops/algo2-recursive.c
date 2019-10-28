#include <stdio.h> // # include <stdio.h> tells the compiler to insert contents of stdio in this particular place.
#include <stdlib.h> // # include <stdlib.h> tells the compiler to insert contents of stdlib in this particular place.
#include <string.h> // # include <string.h> tells the compiler to insert contents of string in this particular place.

// This program determines calls upon the void subroutine named pldmcheck within the main subroutine and checks whether the string you've typed is a palindrome or not.
void pldmcheck(char [], int);

int main()
{
  char w[15];

  printf("Please input a word to determine if it is a palindrome: ");
  scanf("%s", w);
pldmcheck(w,0);

return 0; // Terminates the program.
}

void pldmcheck(char w[], int idx)
{
  int lgth = strlen(w) - (idx + 1);
  if (w[idx] == w[lgth])
  {
    if (idx + 1 == lgth || idx == lgth)
    {
      printf("The inputted word is a palindrome!/n");
      return;
    }
   pldmcheck(w, idx + 1);
  }
  else
  {
    printf("Sorry, the word you have inputted is not a palindrome!/n");
  }
}
