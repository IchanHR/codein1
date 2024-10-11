#include <stdio.h>
int main(){
	char first,second,third;
	int order[4];
	scanf("%c %c %c",&first,&second,&third); getchar();
	for(int i=0;i<3;i++){
		if(first<second && first<third){
			order[i] = 1;
			first = 127;
		}
		else if(second<third){
			order[i] = 2;
			second = 127;
		}
		else{
			order[i] = 3;
			third = 127; //same as set third=0
		}
	}
	printf("%d %d %d\n", order[0],order[1],order[2]);
	return 0;
}