#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

int main(int argc, char ** argv){
  // parse the input
   int8_t dec1 = atoi(argv[1]);
   char op = argv[2][0]; // +, *, -, ...
   int8_t dec2 = atoi(argv[3]);


int res = 0;
//binary addition of dec1 and dec2

int c = 0;
if (op == '-'){
    // inverts all bits
    dec2 = ~dec2;
    c = 1;
}

for(int i=0; i < 8;i++){
  int d = c;
  if(dec1 & (1<<i)) d++;
  if(dec2 & (1<<i)) d++;

  if(d == 0){
    //resulting bit is 0
  }else if(d == 1){
    res = res | 1<<i;
    c = 0;
  }else if(d == 2){
    // resulting bit is 0
    c = 1;
  }else if (d == 3){
    res = res | 1<<i;
    c = 1;
  }
}
// output the binary number//
for (int i=7; i >= 0; i--){
  if(res & (1<<i)){
    printf("1");
  }else{
    printf("0");
  }
 }
 printf("\n");

 return 0;
}
