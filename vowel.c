#include<stdio.h>
int main()
{
	char word;
	printf("enter your character");
	scanf("%c",&word);
	if(word=='a'|| word=='e'||word=='i'|| word=='o'||word=='u'){
		printf("%c is a vowel",word);
	}
	else{
		printf("%c is a consonant",word);
	}
	return 0;
}
