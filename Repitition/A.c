#include <stdio.h>

int main(){
    int N,M;
    int i;
    scanf("%d %d",&N, &M);
    getchar();
    while(i<M){
        printf("%d\n", N++);
        i++;
    }
    return 0;
}