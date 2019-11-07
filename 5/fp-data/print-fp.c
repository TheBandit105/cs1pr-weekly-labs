#include <stdio.h>

void printBin(int num, int bit)
{

    // Prints the binary representation
    // of a number n up to i-bits.
    int y;
    for (y = bit - 1; y >= 0; y--) {

        if ((num >> y) & 1)
            printf("1");
        else
            printf("0");
    }
}

typedef union {

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

    printf("%d|", var.r.s);
    printBin(var.r.e, 8);
    printf("|");
    printBin(var.r.m, 23);
    printf("\n");
}

// Driver Code
int main(int argc, char ** argv)
{

    // Instantiate the union
    myfloat var;

    // Get the real value
    printf("Please input a decimal number to convert to a 32 bit binary value (IEEE 754 Floating-Point representation): ");
    scanf("%f", &var.flo);

    // Get the IEEE floating point representation
    printf("The 32 bit (IEEE 754) representation of %f is : \n", var.flo);
    printIEEE(var);

    return 0;
}
