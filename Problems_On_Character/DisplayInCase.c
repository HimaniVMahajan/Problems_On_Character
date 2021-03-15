/* Accept character from user. If character is small display its corresponding capital character, and if it small then display 
	its corresponding capital. In other cases display as it is. */
	
#include<stdio.h>

void DisplayCase(char cValue)
{
	if(cValue>='A' && cValue<='Z')
	{
		cValue = cValue + 32;
		printf("\nIn Small Case: %c\n",cValue);
	}
	else if(cValue>='a' && cValue<='z')
	{
		cValue = cValue - 32;
		printf("\nIn Capital Case: %c\n",cValue);
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