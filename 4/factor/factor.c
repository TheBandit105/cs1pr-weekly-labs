#include<stdio.h>
#include<conio.h>

int main() {
  int num;
  printf("Input a number");
  scanf("%d", &num);
  printf("For the number inputed, the prime factors are: ");
  factor(num);
  printf("\n\n\n\n\nPress any key to exit...");
  getch();
}
factor(int n)
{
  static int i = 2;
  if (i <= n)
  {
    if (n % i == 0)
    {
      printf("%d", i);
    }
    else
       i++;
    factor(n);
  }
  return 0;
}
