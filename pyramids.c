#include <stdio.h>

void printf_row(int l);

int main(){
    int h,l;
    scanf("%d", &h);
    for (int i = 0; i <h; i++)
    {
        printf_row(i+1);
    }
}

void printf_row(int h){
    int i;
    for(int i=0;i<h;i++){
        printf("#");
    }
    printf("\n");
}