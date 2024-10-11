#include <stdio.h>
#include <string.h>

int main(){
    char s[100];
    char s2[100];
    int i, len, count;
    scanf("%[^\n]", s); getchar();
    //printf("%s\n", strrev(s));
    len = strlen(s);
    count = 0;
    for(i= len-1;i>=0;i--){
        s2[count] = s[i];
        count++;
    }
    s2[count] = '\0';
    printf("%s\n", s2);
    return 0;
}