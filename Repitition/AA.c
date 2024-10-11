#include <stdio.h>

int main (){
    int N,k;
    int counter = 0;
    scanf("%d", &N);
    getchar();
    for(int i = 0;i<N;i++)
    {
        scanf("%d", &k);
        getchar();
        counter +=k;
        if (counter == 9) counter = 21;
        else if (counter == 33) counter = 42;
        else if (counter == 76) counter = 92;
        else if (counter == 53) counter = 37;
        else if (counter == 80) counter = 59;
        else if (counter == 97) counter = 88;
    }
    printf("%d\n", counter);
    return 0;
}