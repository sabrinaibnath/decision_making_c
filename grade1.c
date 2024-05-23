#include<stdio.h>
int main()
{
	int number;
	printf("enter your number");
	scanf("%d",&number);
	if(number>=80 && number<=100){
		printf("distinction");
	}
	else if(number>=70 && number<=79){
		printf("very good");
	}
	else if(number>=60 && number<=69){
		printf("pass");
	}
	else{
		printf("fail");
	}
	return 0;
}

