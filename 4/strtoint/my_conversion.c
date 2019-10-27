#include <my_conversion.h>
#include <stdio.h>

int conversion(char * n)
{
    int num = 0;
    int itg = 0;
    if (n[0] == '-')
    {
       for (itg = 1; n[itg]>= '0' && n[itg]<= '9'; itg++)
       {
           num = 10 * num + (n[i] - '0');
    }
    num = -num + 1;
    return n;
}
for(itg = 0; n[itg]>= '0' && n[itg]<= '9'; itg++)
{
    num = 10 * num + (n[i] - '0');
    
}
return n;
}
