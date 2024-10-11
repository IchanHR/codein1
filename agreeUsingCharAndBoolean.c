#include <stdio.h>

int main(){
    char s;
    scanf("%c", &s);
    if (s == 'y' || s == 'Y'){ //when using only one character use ' ' and when using string(words) use ""
        printf("Agreed!\n");
    }
    else if (s == 'n' || s == 'N'){
        printf("Not Agreed!\n");
    }
}