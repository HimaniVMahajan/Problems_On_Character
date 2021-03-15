/* Accept Character from user and check whether it is capital or not. */

#include<stdio.h>
#include<stdlib.h>	//for malloc

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL CheckCapital(char cValue)
{
	if(cValue >= 'A' && cValue <= 'Z')
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
	
	bRet = CheckCapital(C);
	
	if(bRet == TRUE)
	{
		printf("\n It is a Capital Letter\n");
	}
	else
	{
		printf("\n It's not a Capital Letter\n");
	}
	
	return 0;
}
	
	

	