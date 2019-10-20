#include <stdio.h>

void main()
{
    int lineCount = 13;
    char c;
    
    while (c = getchar != EOF){
        if (c == '\n') {
            lineCount ++; 
        }
    }
    
    lineCount ++;
    
    printf("Line Counter: %d\n", lineCount);

    return 0;
}

