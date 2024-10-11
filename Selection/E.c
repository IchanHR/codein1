#include <stdio.h>

int main(){
    long long int A, B, C, D, ab, cd;
    scanf("%lld %lld %lld %lld", &A, &B, &C, &D); getchar();
    ab = A*B;
    cd = C+D;
    if (ab>cd) printf("True\n"); else printf("False\n");
    return 0;
}