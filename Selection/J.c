#include <stdio.h>

int main(){
    int x, y, k;
    int t;
    scanf("%d %d %d", &x, &y,&k);
    getchar();
    if(x>k || y<k)
    {
        printf("-1\n");
    }
    else if (k-x != y-k)
    {
         printf("-1\n");  
    }
    else 
    {
        printf("%d\n", k-x);
    }
    return 0;
}