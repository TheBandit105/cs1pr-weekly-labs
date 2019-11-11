#include "my_lib.h"
#include <math.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

float opmean (int v[], int x)
{
  int sm = 0;
  for(int j = 0; j<x ; j++)
  {
    sm += v[j];
  }
  float mean = (sm/x);
  return mean;
}

float opmax (int v[], int x)
{
  int j;
  float max = v[0];
  for (j = 1; j<x; j++)
  {
    if (v[j]>max)
    {
      max = v[j];
    }
  }
  return max;
}

float opsd  (int v[], int x)
{
  float mean = opmean (v, x);
  double arr[x];
  float sd;
  float vari;
  float sm = 0;

  for (int j = 0; j<x; j++)
  {
    arr[j] = (v[j]-mean) * (v[j]-mean);
  }
  for (int j = 0; j<x; j++)
    {
      sm += arr[j];
    }
    vari = sm/x;
    sd = sqrt(vari);
    return sd;
  }
