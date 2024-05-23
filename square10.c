#include<stdio.h>
int main()
{
	int number ,square;
	printf("enter your number");
	scanf("%d",&number);
	if(number<10){
	square=number*number;
	}
	else{
		printf("the number is out of range");
	}
	printf("%d",square);
	return 0;
}
	
