#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c,d,e;
	double x1,x2;
	printf("enter the value od a,b,c");
	scanf("%d %d %d %d",&a,&b,&c,&d);
	d=4*a*c;
	if(a==0 && b==0){
		printf("no solution");
	}
	else if(a == 0){
		printf("%d",-c/b);
	}
	else if((b*b-d)<0){
		printf("there is no real root");
	}
	else{
	x1=-b+sqrt(e);
	x2=-b-sqrt(e);
	printf("x1=%lf",x1);
	printf("x2=%lf",x2);
	}
	return 0;

}


