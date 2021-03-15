/* Accept Character from user and check whether it is special symbol or not (!, @, #, $, %, ^, &, *). */

#include<stdio.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0


BOOL CheckSpecialSymbol(char cValue)
{
	if((cValue>='A' && cValue<='Z') || (cValue>='a' && cValue<='z'))
	{
		return FALSE;
	}
	else if(cValue>='0' && cValue<='9')
	{
		return FALSE;
	}
	else
	{
		return TRUE;
	}
}

int main()
{
	char ch = '\0';
	BOOL bRet = FALSE;
	
	printf("\nEnter the character:\t");
	scanf("%c",&ch);
	
	bRet = CheckSpecialSymbol(ch);
	
	if(bRet == TRUE)
	{
		printf("\n It is a Special Symbol\n");
	}
	else
	{
		printf("\n It is not a Special Symbol\n");
	}
	
	return 0;
}
