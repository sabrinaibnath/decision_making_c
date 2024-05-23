#include<stdio.h>
int main()
{
	char word;
	printf("enter your word");
	scanf("%c",&word);
	switch(word){
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':printf("it's a vowel");
			 break;
		default:printf("it's a consonant");
	}
	return 0;
}


