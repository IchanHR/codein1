#include <stdio.h>

int main(){
    int T, N, M;
    int min;
    scanf("%d", &T); getchar();
    for(int i = 0;i<T;i++)
    {
        scanf("%d %d", &N, &M); getchar();
        int price[10050];
        for(int j=0;j<N;j++)
        {
            scanf("%d",&price[j]); getchar();
            if(j==0) min=price[j];
            else if(min>price[j]) min=price[j];
        }
        M/=min;
        printf("Case #%d: %d\n",i+1,M);
    }
    return 0;
}