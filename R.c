#include <stdio.h>
int main(){
    char N [11], M [100], C;
    int O;
    
    scanf(" %[0-9]", N);
    getchar();
    scanf("%[^\n]", M);
    getchar();
    scanf(" %[A-Z] %d", &C, &O);
    getchar();
    printf("Id    : %s\n", N);
    printf("Name  : %s\n", M);
    printf("Class : %c\n", C);
    printf("Num   : %d\n", O);

    return 0;
}
