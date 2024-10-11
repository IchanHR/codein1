#include <stdio.h>

int main(){
    int d, s, t;
    scanf("%d %d %d", &d, &s, &t);
    getchar();
    for(int i = 0;i<3;i++)
    {
        if(d>s && d>t) 
        {
            printf("Daging\n");
            d=0;
        } 
        else if(s>t)
        {
            printf("Sayur\n"); 
            s=0;
        }
        else
        {
            printf("Telur\n"); 
            t=0;
        }
    }
    return 0;
}