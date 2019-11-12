#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void removeMovie(FILE * file, int givenID) {
  FILE * newfile = fopen("modifiedFile.dat", "w");
  char line[225];
  char linecopy[225];
  int IDmatch = 0;

  rewind(file);
  rewind(newFile);

  while (fgets(line, sizeof(line), file) != NULL) {
    char * ID;
    strcpy(linecopy, line);
    ID = strtok(line, ",");

    if(atoi(ID) == givenID){
      IDmatch = 1;
      fprintf(newFile, "%s", "");
    } else {
      fprintf(newFile, "%s", linecopy);
    }
  }

  if(IDmatch = 1){
    printf("Deleted %d\n", givenID);
    rename("modifiedFile.dat", "dvd.dat");
  } else {
    printf("Invalid ID\n");
  }
   }
   int main(int argc, char ** argv){
     FILE * fptr = fopen("dvd.dat", "r+");
     int ID;

     if(argc == 2){
       ID = atoi(argv[1]);
       removeMovie(fptr,ID);
     } else {
       printf("Not enough arguments\n");
     }
     fclose(fptr);
   }
