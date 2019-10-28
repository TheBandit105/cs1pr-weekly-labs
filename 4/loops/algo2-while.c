#include <stdio.h>
#include <string.h>

int main()
{
  int jstl;
  int x;

  char str [15]; // Maximum character length of str.
  printf("Please input word(s) to determine if it is a palindrome: ");
  scanf("%s", str); // &str will produce a pointer to the entire str array.

  x = 0, jstl = strlen(str) - 1; // When x = 0, jstl is calculated as the string length of string subtract 1.
  while(x < jstl)
  {
    if(str[x] != str[jstl]){
      printf("%s is not palindrome\n", str);
      return 0;
    }

    x++;jstl--; // jstl-- decreases the variable jstl by 1.
  }

  printf("%s is a palindrome\n", str);

  return 0; // Terminates the program.
}
