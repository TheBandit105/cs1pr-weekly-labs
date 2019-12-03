#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char ** argv) {
  clock_t startTime;
  int m = atoi(argv[1]);
  int n = atoi(argv[2]);
  int s = atoi(argv[3]);
  int array1[n];
  int array2[s];
  int randNum;
  int currNum;
  int count = 0;
  int tmp;
  int coc = 0;
  double totalTime;

  for(int i = 0; i < n; i++) {
    randNum = rand() % (m) + 0;
    array1[i] = randNum;
  }

  for(int i = 0; i < s; i++) {
    randNum = rand() % (m) + 0;
    array2[i] = randNum;
  }

  for (int i = 0; i < n; ++i) {

    for (int j = i + 1; j < n; ++j) {

        if (array1[i] > array1[j]) {
            tmp =  array1[i];
            array1[i] = array1[j];
            array1[j] = tmp;
        }

    }

  }

  startTime = clock();

  for(int i = 0; i < s; i++) {
    int k = n;
    currNum = array2[i];
    k /= 2;

    flag:
    if(coc == 10) {
      goto end;
    } if(currNum > array1[k]) {
      k += k / 2;
      coc++;
      goto flag;
    } else if(currNum < array1[k]) {
      k -= k / 2;
      coc++;
      goto flag;
    } else if(currNum == array1[k]) {
      count++;
    }

    end:
    coc = 0;
  }

  totalTime = (double) (clock() - startTime) / CLOCKS_PER_SEC * 10e3;
  printf("%d,%d,%d,%.0lf\n", m, n, s, totalTime);
}
