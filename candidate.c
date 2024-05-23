#include<stdio.h>
int main()
{
	int math,phy,chem,total1,total2;
	printf("enter your number");
	scanf("%d %d %d",&math,&phy,&chem);
	total1=chem+phy+math;
	total2=math+phy;
	if((math>=60 && phy>=50 && chem>=40 && total1>=200)||total2>150){
		printf("eligible");
	}
	else{
		printf("not eligible");
	}
	return 0;
}
