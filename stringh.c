#include <stdio.h>
#include <string.h>

int main(){
    int v=0, c=0;
    char name[100];
    scanf("%[^\n]", &name);
    getchar();
    for(int i = 0;i<strlen(name);i++)
    {
        if(name[i]=='a'||name[i]=='e' ||name[i]=='i' ||name[i]=='o' ||name[i]=='u' |name[i]=='A'||name[i]=='E' ||name[i]=='I' ||name[i]=='O' ||name[i]=='U') v++;
        else if(name[i]==' ') continue;
        else c++;
    }
    printf("Vocal:%d\n", v);
    printf("Consonant:%d\n", c);

    return 0;
}