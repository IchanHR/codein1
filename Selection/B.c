#include <stdio.h>

int main(){
    int T, K, N, M;

    scanf("%d", &T);
    getchar();
    int i;
    for (i=0;i<T;i++)
    {
        scanf("%d %d %d", &K, &N,&M);
        getchar();
        if (K <= N+M){
            printf("Case #%d: yes\n",i+1);
        }
        else
        {
            printf ("Case #%d: no\n",i+1);
        }
    }
    return 0;
}