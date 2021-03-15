/* Accept Character from user and check whether it is small case or not. */

#include<stdio.h>
#include<stdlib.h>	//for malloc

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL CheckSmallCase(char cValue)
{
	if(cValue >= 'a' && cValue <= 'z')
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
	
	bRet = CheckSmallCase(C);
	
	if(bRet == TRUE)
	{
		printf("\n It is a small case letter\n");
	}
	else
	{
		printf("\n It's not a small case letter\n");
	}
	
	return 0;
}
	
	
