/* Accept character from user and display its ASCII value in decimal,octal and hexadecimal format.*/

#include<stdio.h>

void DisplayValues(char cValue)
{
	if((cValue>='A' && cValue<='Z') || (cValue>='a' && cValue<='z'))
	{
		printf("\nASCII value in Decimal format:\t%d",cValue);
		printf("\n\nASCII value in Octal format:\t%o",cValue);
		printf("\n\nASCII value in Hexadecimal format:\t%x\n",cValue);
	}
	else if(cValue>='0' && cValue<='9')
	{
		printf("\n%c\n",cValue);
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
	
	DisplayValues(ch);
	
	return 0;
}
