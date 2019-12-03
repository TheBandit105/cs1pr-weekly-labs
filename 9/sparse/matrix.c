#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <inttypes.h>
#include "matrix.h"

matrix_t * matrix_init(int n, int m){
  matrix_t * mat = malloc(sizeof(matrix_t));
  mat->matrix = (int64_t **) malloc(n * sizeof(void*));
  mat->x = n;
  mat->y = m;

  for(int i = 0; i < n; i++){
    mat->matrix[i] = (int64_t *) malloc(m * sizeof(int64_t));
    for (int j = 0; j < m; j++){
      mat->matrix[i][j] = 0;
    }
  }

  return mat;
}

void matrix_free(matrix_t * matrix){
  for(int i = 0; i < matrix->x; i++){
    free(matrix->matrix[i]);
  }

  free(matrix->matrix);
  free(matrix);
}

void matrix_print(matrix_t * matrix){
  for (int i = 0; i < matrix->x; i++){
    for (int j = 0; j < matrix->y; j++){
      printf("%" PRId64 " ", matrix->matrix[i][j]);
    }
    printf("\n");
  }

}

void matrix_set(matrix_t * matrix, int x, int y, int64_t val){
  matrix->matrix[x][y] = val;
}

int64_t matrix_get(matrix_t * matrix, int x, int y){
  return matrix->matrix[x][y];
}
