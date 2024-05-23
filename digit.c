#include<stdio.h>
int main()
{
	int number;
	printf("enter your number:");
	scanf("%d",&number);

	int count=0;
	while(number>0){
		number=number/10;
		count++;
	}
	printf("the number have %d digit",count);
	return 0;
}
