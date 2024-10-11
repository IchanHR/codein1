#include <stdio.h>

int main(){
    int T, A, B;

    scanf("%d", &T);
    getchar();
    int i;
    for (i=1;i<=T;i++)
    {
        scanf("%lld %lld", &A, &B);
        getchar();
        if (A*B %2 == 0){
            printf("Case #%d: Party time!\n",i+1);
        }
        else
        {
            printf ("Case #%d: Need more frogs\n",i+1);
        }
    }
    return 0;
}