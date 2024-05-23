#include<stdio.h>
int main()
{
	int number,first,second;
	printf("enter the number");
	scanf("%d",&number);
	first=number/10;
	second=number%10;
	int re;
	re=second*10+first;
	printf("%d\n",first);
	printf("%d\n",second);
	printf("%d\n",re);
	return 0;
}
