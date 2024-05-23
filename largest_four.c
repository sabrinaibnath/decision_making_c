#include<stdio.h>
int main()
{
	int a,b,c,d;
	printf("enter your numbers:");
	scanf("%d %d %d %d",&a,&b,&c,&d);
	//here we are given 4 numbers.we can divide the four number in 2 and then from the 2 we can find the desired result.
	
	int small1,large1,small2,large2;
	if(a>b){
		small1=b;
		large1=a;
	}
	else{
		small1=a;
		large1=b;
	}
	

	if(c>d){
		small1=d;
		large1=c;
	}
	else{
		small2=c;
		large2=d;
	}

	if(small1>small2){
		printf("the smallest number is:%d",small2);
	}
	else{
		printf("the smallest number is:%d",small1);
	}

	if(large1>large2){
		printf("the largest number is:%d",large1);
	}
	else{
		printf("the largest number is:%d",large2);
	}

	return 0;
}
		


	
