#include <stdio.h> // A statement that tells the compiler to put in the contents of the header file stdio.h, which is for standard input and output.

void printBin(int num, int bit) // This indicates void printBin as a function parameter with int as an argument type, meaning the output of this function parameter will always be an integer, despite that no values are passed into this function. 
{

    // Prints the binary representation
    // of a number n up to i-bits.
    int y;  // Declares y as an integer.
    for (y = bit - 1; y >= 0; y--) {

        if ((num >> y) & 1)
            printf("1");
        else
            printf("0");
    }
}

typedef union {  // typedef union creates an aliase for union, which is a special data type that permits different data types to be stored in the same memory location.

    float flo;
    struct
    {

        // Order is important.
        // Here the members of the union data structure
        // use the same memory (32 bits).
        // The ordering is taken
        // from the LSB to the MSB.
        unsigned int m : 23;
        unsigned int e : 8;
        unsigned int s : 1;

    } r;
} myfloat;

// Function to convert real value
// to IEEE foating point representation
void printIEEE(myfloat var)
{

    // Prints the IEEE 754 representation
    // of a float value (32 bits)
    // The 2 vertical pipes '|' are inserted after the 1st bit and the 9th bit of the 32 bit binary representation.

    printf("%d|", var.r.s);
    printBin(var.r.e, 8);
    printf("|");
    printBin(var.r.m, 23);
    printf("\n");
}

// This is the main subroutine where all the outputs of the void subroutines are passed into.
int main()
{

    // Instantiate the union
    myfloat var;

    // This is a set input value which is to be converted into IEEE 754 representation. 
    var.flo = 0.15625;

    // The output of the var.flo value will be printed here when the code runs.
    printIEEE(var);

    return 0;
}

// After I had compiled the code and tested a couple of times, the output of this code gives the expected output on task 1 of the exercise 5 worksheet: 0|01111100|01000000000000000000000

