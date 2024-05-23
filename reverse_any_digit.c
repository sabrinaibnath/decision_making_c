#include<stdio.h>
int main()
{
	int number,i;
	printf("please enter your number:");
	scanf("%d",&number);

	int re=0;
	while(number>0){
	re=re*10+number%10;
	number=number/10;
	}
	printf("%d",re);

	return 0;
}
