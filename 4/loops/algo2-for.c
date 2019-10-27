#include <stdio.h> // # include <stdio.h> tells the compiler to insert contents of stdio in this particular place.
#include <string.h> // # include <string.h> tells the compiler to insert contents of string in this particular place.

int main() // Initialises the main subroutine.
{
  char t[15], rt[15]; // This declares the maximum length of the text and reverse text.
  int i; // i is declared as an integer.
  int lgth = 0; // lgth is declared as an integer that is assigned to 0.
  int num; // num is declared as an integer.

  printf("Please input word(s) to determine if it is a palindrome: ");
  gets(t); // gets(t) is another way of saying scanf().

  for (i = 0; t[i] != '\0'; i++) // All for statements runs until the conditions are met.
  {
    lgth++;
  }
  for (i = lgth - 1; i >= 0; i--)
  {
    rt[lgth - i - 1] = t[i];
  }

  for(num = 1, i = 0; i < lgth; i++)
  {
    if (rt[i] != t[i])
    num = 0;
  }
  if (num == 1) // If num equals 1, then first statement is issued, otherwise the second statement is issued.
  printf("%s is a palindrome.", t);
  else
  printf("%s is not a palindrome.", t); // %s means print t as a string.

  return 0; // Terminates the program.
}
