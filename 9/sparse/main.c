#include <stdio.h>
#include <inttypes.h>
#include <matrix.h>

int main() {
  matrix_t * mat;
  int64_t val;
  mat = matrix_init(3,5);
  matrix_set(mat,1,2,3);
  matrix_set(mat,2,1,1);
  matrix_set(mat,2,2,2);
  matrix_set(mat,2,4,3);
  matrix_print(mat);
  val = matrix_get(mat,2,4);
  printf("Element[2][4]= ");
  printf("%"PRId64"\n", val);
  matrix_free(mat);
  return 0;
}
