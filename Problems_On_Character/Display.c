/* Accept character from user. If it is capital then display all the characters from the input characters till Z. 
   If input character is small then print all the characters in reverse order till a. In other cases return directly. */
   
#include<stdio.h>

void DisplayCase(char cValue)
{
	if(cValue>='A' && cValue<='Z')
	{
		while(cValue<='Z')
		{
			printf("%c\t",cValue);
			cValue++;
		}
	}
	else if(cValue>='a' && cValue<='z')
	{
		while(cValue>='a')
		{
			printf("%c\t",cValue);
			cValue--;
		}
	}
	else
	{
		printf("\n%c\n",cValue);
	}
}

int main()
{
	char ch = '\0';
	
	printf("\nEnter the character:\t");
	scanf("%c",&ch);
	
	DisplayCase(ch);
	
	return 0;
}
