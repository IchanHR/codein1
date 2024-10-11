#include <stdio.h>

int main(){
    int N,M,R;
    scanf("%d %d",&N, &M);
    R=M+N;
    while(N<=R){
        printf("%d\n",N);
        N++;
    }
}