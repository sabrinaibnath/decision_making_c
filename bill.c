#include<stdio.h>
int main()
{
	int unit;
	double total;
	printf("enter your unit");
	scanf("%d",&unit);
	if(unit>=100&& unit<=200){
		total=0.8*unit+100;
		printf("%lf",total);
	}
	else if(unit>=200 && unit<300){
		total=(0.9*unit)+100+(0.8*unit);
		printf("%lf",total);
	}
	else if(unit>=300 && unit<400){
		total=100+(0.9*unit)+(0.8*unit)+(1*unit);
	 if(total>=400){
		total=total+0.15*total;
		printf("%lf",total);
	}
	}
	return 0;
}
