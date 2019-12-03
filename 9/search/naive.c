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
  double totalTime;

  for(int i = 0; i < n; i++) {
    randNum = rand() % (m) + 0;
    array1[i] = randNum;
  }

  for(int i = 0; i < s; i++) {
    randNum = rand() % (m) + 0;
    array2[i] = randNum;
  }

  startTime = clock();

  for(int i = 0; i < n; i++) {
    currNum = array1[i];

    for(int j = 0; j < s; j++) {

      if(currNum == array2[j]) {
        count++;
      }

    }
    count = 0;
  }

  totalTime = (double) (clock() - startTime) / CLOCKS_PER_SEC * 10e3;
  printf("%d,%d,%d,%.0lf\n", m, n, s, totalTime);
}
