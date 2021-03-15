/* Accept Character from user and check whether it is digit or not (0-9). */

#include<stdio.h>
#include<stdlib.h>	//for malloc

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL CheckDigit(char cValue)
{
	if(cValue >= '0' && cValue <= '9')
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}

int main()
{
	char C = '\0';
	BOOL bRet = FALSE;
	
	printf("\nEnter the character:\t");
	scanf("%c",&C);
	
	bRet = CheckDigit(C);
	
	if(bRet == TRUE)
	{
		printf("\n It is a Digit\n");
	}
	else
	{
		printf("\n It's not a Digit\n");
	}
	
	return 0;
}
	
	
