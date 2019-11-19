#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#define MAX_RLEN 50

char * encode(char * source){
  int rlen;
  int length = strlen(source);
  char count[MAX_RLEN];
  int x,y = 0, z;
  char * destination = (char*)malloc(sizeof(char)*(length * 2 + 1));

  for(x = 0; x<length; x++){
    destination[y++] = source[x];
    rlen = 0;
    while(x+1< length && source[x] == source [x+1]){
      rlen++;
      x++;
    }
    sprintf(count, "%d", rlen);
    for (z=0; *(count+z); z++, y++){
      destination[y] = count[z];
  }
}
destination[y] = '\0';
return destination;
}
int decoding(char *string){
  int repeat;
  for(int x = 0; string[x]!= '\0'; x += 2){
    repeat = string[x+1]-'0';
    for(int y = 0; y <= repeat; y++){
      printf("%c", string[x]);
    }
  }
  printf("\n");
  return 0;
}

int main(int argc, char **argv){
  if(strcmp(argv[1], "E") == 0){
    char * res = encode(argv[2]);
    printf("%s \n", res);
    return 0;
  }else if(strcmp(argv[1], "D") == 0){
    decoding(argv[2]);
    return 0;
  }else{
    printf("Sorry but that was an invalid input, please try again! \n");

  }
  return 0;
}
