#include <stdio.h>
int main()
{
    int a = 5;
    int b = 15;
    a *= b - 2 + ++b;
    printf("%d",a);
    
    return 0;
}