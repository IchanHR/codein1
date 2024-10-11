#include <stdio.h>

int main(){
    int T, A, B;

    scanf("%d", &T);
    getchar();
    int i;
    for (i=0;i<T;i++)
    {
        scanf("%d %d", &A, &B);
        getchar();
        if (A > B){
            printf("Case #%d: Go-Jo\n",i+1);
        }
        else
        {
            printf ("Case #%d: Bi-Pay\n",i+1);
        }
    }
    return 0;
}