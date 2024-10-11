#include <stdio.h>

int main(){
    int N,M;
    scanf("%d %d",&N, &M);
    int i=0;
    while(i<M){
        printf("%d\n",N);
        N++;
        i++;
    }
    return 0;
}