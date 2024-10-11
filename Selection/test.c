#include <stdio.h>

int main(){
    char a, b, c;
    int d, e, f;
    d = 1;
    e = 2;
    f = 3;
    scanf("%c %c %c", &a, &b, &c);
    int i;
    for(i = 0;i<3;i++)
    {
        if(a>b && a>c) 
        {
            a==d;
            
            break;
        } 
        else if(b>c)
        {
            b==e;
            break;
        }
        else
        {
            c==f;
            break;
        }
    }
    printf("%d %d %d\n", d, e, f);
    return 0;
}
