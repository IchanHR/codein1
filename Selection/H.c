#include <stdio.h>

int main() {
    char a, b, c;
    
    scanf("%c %c %c", &a, &b, &c);
    getchar();

    char A[] = {a, b, c};
    int pos[] = {1, 2, 3};
    
    for (int j = 0; j < 2; j++) {
        if (A[j] > A[j+1]) {
            A[j] = A[j] + A[j+1];
            A[j+1] = A[j] - A[j+1];
            A[j] = A[j] - A[j+1];
            pos[j] = pos[j] + pos[j+1];
            pos[j+1] = pos[j] - pos[j+1];
            pos[j] = pos[j] - pos[j+1];
        }
    }

    for (int j = 0; j < 1; j++) {
        if (A[j] > A[j+1]) {
            A[j] = A[j] + A[j+1];
            A[j+1] = A[j] - A[j+1];
            A[j] = A[j] - A[j+1];

            pos[j] = pos[j] + pos[j+1];
            pos[j+1] = pos[j] - pos[j+1];
            pos[j] = pos[j] - pos[j+1];
        }
    }

    printf("%d %d %d\n", pos[0], pos[1], pos[2]);
    
    return 0;
}
