//#include <my_gcd\_lib.h>

int gcd(int x, int y){
  //int res = 0;

if (y == 0){
  return x;

} else {
  return gcd(y, x%y);
}

  return y;
}
