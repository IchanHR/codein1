#include <stdio.h>

int main(){
    int T, N, A, B, C, D, counter = 0;
    scanf("%d", &T);getchar();
    for (int i=0;i<T;i++)
    {
        scanf("%d %d %d %d %d", &N, &A, &B, &C, &D); getchar();
        for (int j=1;j<=N;j++)
        {
            if(j%A == 0 || j % B == 0 || j % C == 0 || j % D == 0)
            {
                counter ++;
            }
        }
        printf("Case #%d: %d\n",i+1, counter);
        counter = 0;
    }
    return 0;
}
