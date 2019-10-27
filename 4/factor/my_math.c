#include <my_math.h>

int is_prime(int n)
{
  if (n <= 1) return 0;
  if (n % 2 == 0 && num > 2) return 0;
  for (int i = 3; i < n / 2; i+= 2)
  {
    if (num % i == 0)
    return 0;
  }
  return 1;
}
