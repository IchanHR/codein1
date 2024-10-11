#include <stdio.h>

int main(){
	int x;
	int y;
	scanf("%d %d", &x, &y);
	if (x<y) //(x<y) is a boolean expression
    {
		printf("x is less than y\n");
	}
    else if (x>y)
    {
        printf("x is greater than y\n");
    }
    else
    {
        printf("x is equal to y\n");
    }
    //this boolean model is simpler rather than making if and if and if instead of if else and else if and else.
	return 0;
}
