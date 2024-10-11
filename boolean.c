#include <stdio.h>

int main(){

    int nilai;
    printf("Input nilai:\n");
    scanf("%d", &nilai);

    if(nilai>80){
        printf("A\n");
    } else if (nilai > 50){
        printf("B\n");
    } else {
        printf("C\n");
    }
    return 0;
    }
    
