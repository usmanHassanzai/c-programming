#include<stdio.h>
int main()
{
	char Character;
	printf("Enter a Character : ");
	scanf("%c",&Character);
	switch(Character)
	{
		case 'a'	:
		case 'e'	:
		case 'i'	:
		case 'o'	:
		case 'u'	:
		case 'A'	:
		case 'E'	:
		case 'I'	:
		case 'O'	:
		case 'U'	:
		printf("%c is a Vowel",Character);
		break;
		//default:
			printf("Character is consonant");
			break;
	}
	
	return 0;
	
}