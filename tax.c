#include<stdio.h>
int main()
{
	int amount;
	double tax;
	printf("enter your amount");
	scanf("%d",&amount);
	if(amount<=750){
		tax=amount+0.01*amount;
		printf("%lf",tax);
	}
	else if(amount>=750 && amount<=2250){
		tax=amount+0.02*amount+7.50;
		printf("%lf",tax);
	}
	else if(amount>=2250 && amount<=3750){
		tax=amount+0.03*amount+37.50;
		printf("%lf",tax);
	}
	else if(amount>=3750 && amount<=5250){
		tax=amount+0.04*amount+82.50;
		printf("%lf",tax);
	}
	else if(amount>=5250 && amount<=7000){
		tax=amount+0.05*amount+142.50;
		printf("%lf",tax);
	}
	else{
		tax=amount+0.06*amount+230.00;
		printf("%lf",tax);
	}
	return 0;
}
