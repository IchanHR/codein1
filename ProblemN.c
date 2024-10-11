#include <stdio.h>

int main(){
    char N [100],M [100];
    int A, B;
    double H, J;
    
    scanf ("%s %lf %d %s %lf %d",N ,&H ,&A, M, &J, &B);
    getchar();
    printf("Name 1: %s\n",N);
    printf("Height 1: %.2f\n",H);
    printf("Age 1: %d\n",A);
    printf("Name 2: %s\n",M);
    printf("Height 2: %.2f\n",J);
    printf("Age 2: %d\n",B);

    return 0;
}