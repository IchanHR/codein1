#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);
    
    for (int i = 1; i <= T; i++) {
        long long A, B, C;
        scanf("%lld %lld %lld", &A, &B, &C);
        
        long long D = (A * B) / 100;
        if (D > C) 
        {
            D = C;
        }
        
        printf("Case #%d: %lld\n", i, D);
    }
    
    return 0;
}