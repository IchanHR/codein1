#include <stdio.h>

int main(){
    int N, a;
    int total = 0;
    scanf("%d", &N);
    getchar();
    for(int i=0;i<N;i++)
    {
        scanf("%d", &a);
        getchar();
        total += a;
    }
    printf("%d\n", total);
    return 0;
}