#include <stdio.h>

int main()
{
    int lineCount = 0;
    char c = getchar();
    
    while (c != EOF){
        if (c == '\n') {
            lineCount++; 
        }
      c = getchar();
    }
    
    printf("Line Counter: %d\n", lineCount);

    return 0;
}

