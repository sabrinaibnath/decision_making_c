#include<stdio.h>
#include<ctype.h>
int main()
{
	char c;
	printf("enter your char:");
	scanf("%c",&c);

	if(isupper(c)){
		printf("the char is in upper case\n");
	}
	else{
		printf("the char is not in upper case\n");
	}


	if(islower(c)){
		printf("the case is in lower case\n");
	}
	else{
		printf("the char is not is lower case\n");
	}

	char m;
	m=toupper(c);
	printf("after using toupper() the result is:%c\n",m);

	m=tolower(c);
	printf("after using tolower() the result is:%c\n",m);

	return 0;
}
