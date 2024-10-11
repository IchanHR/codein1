#include<stdio.h>
int main(){
    int number[10];
    int i, max, min, total;
    double avg;

    for(i=0;i<10;i++)
    {
        scanf("%d", &number[i]);
        getchar();
    }
    min = number[0];
    max = number[0];
    total = 0;
    for(i=0;i<10;i++)
    {
        total += number[i];
        if(number[i]>max) max = number[i];
        if(number[i]<min) min = number[i];
    }
    avg = (double) total/10;
    printf("Max = %d\n", max);
    printf("Min = %d\n", min);
    printf("Avg = %.2f\n", avg);
}