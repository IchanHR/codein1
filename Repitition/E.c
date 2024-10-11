#include <stdio.h>

int main(){
    int T;
    int X,P;
    scanf("%d", &T);
    int i=0;
    while (i<T)
    {
        scanf("%d %d", &X,&P);
        getchar();
        int bit = (X>>P) & 1;
        printf("%d\n", bit);
        i++;
    }
    return 0;
}