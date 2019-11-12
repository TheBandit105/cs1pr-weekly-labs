#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int findUniqeID(FILE * file) {
  int listOfIDs[200], i = 0, uniqeID = 1;
  char line[225];

  rewind(file);

  while (fgets(line, sizeof(line), file) != NULL){
    char * ID = strtok(line, ",");
    listOfIDs[i] = atoi(ID);
    i++;
  }

  for(int j = 0; j <= i; j++){

    if(uniqeID == listOfIDs[j]){
      j = 0;
      uniqeID++;
    }

  }

  return uniqeID;
}

void writeDataInFile(int ID, char * movieName, int movieLenght, FILE * file) {
  fseek(file, 0, SEEK_END);
  fprintf(file, "%d,%s,%d\n", ID, movieName, movieLenght);
  printf("Added ID %d\n", ID);
}

int main(int argc, char ** argv) {
  FILE * fptr = fopen("dvd.dat", "r+");
  char * movieOfMovie;
  int movieLenght;
  int ID;

  if(argc == 3) {
    nameOfMovie = argv[1];
    movieLenght = atoi(argv[2]);
    ID = findUniqeID(fptr);

    writeDataInFile(ID, nameOfMovie, movieLenght, fptr);
  } else {
    printf("Not enough arguments\n");
  }

  fclose(fptr);
}
