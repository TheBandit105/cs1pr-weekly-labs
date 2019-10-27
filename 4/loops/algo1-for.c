#include <stdio.h> // # include <stdio.h> tells the compiler to insert contents of stdio in this particular place.
#include <stdlib.h> // # include <stdlib.h> tells the compiler to insert contents of stdlib in this particular place.

int main (int argc, char ** argv){  // This part of the program declares the main subroutine along the declaring the integer and character arguements so that the program can accept any numeric and letter variables in the program.
int i; // int i tells the compiler that i is declared as an integer.
float m = 0; // float m = 0 tells the compiler that m (mean) is declared as a floating point number which is assigned to 0.
int num = atoi(argv[1]); // int num = atoi(argv[1]) tells the compiler that num (number) is declared as an integer. The atoi() function tells the program that any character typed can be changed from a string to a integer, based on char ** argv,
int s = 0; // int s = 0 tells the compiler that s (sum of the integers) is declared as an integer which is assigned to 0.

printf("Enter number for sumation and hence the mean: "); // printf() tells the compiler to display what is written in the ("xxxx").
scanf("%d", &num); // scanf() will allow for the user to type any character or integer depending on the declared variable inserted inside the ().
// %d means print an integer.
for(i=1; i<=num; i++) // The for loop tells the compiler to run the for function and the code inside {} until the conditions (i=1, i<=num and i++) are met or exceeded.
{
  s = s + i; // s is constantly updated everytime variable i increases by 1 whilst repeating the for loop.
  m++; // m++ increases the variable m by 1
}
printf("%d %.1f\n", s, m/2); //%d means print the integer s and %.1f\n means print a floating point number m/2 that is rounded to one decimal place and then go to a new line.
return 0; // return 0 terminates the program after the compiler has done it's job.
}
