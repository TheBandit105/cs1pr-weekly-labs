#include <stdint.h>

struct matrix_t {
  int64_t ** matrix;
  int x;
  int y;
};

typedef struct matrix_t matrix_t;

matrix_t * matrix_init(int n, int m);

void matrix_free(matrix_t * matrix);

void matrix_set(matrix_t * matrix, int x, int y, int64_t val);

int64_t matrix_get(matrix_t * matrix, int x, int y);

void matrix_print(matrix_t * matrix);
