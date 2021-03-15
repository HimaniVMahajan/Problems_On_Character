/* Accept Character from user and check whether it is alphabet or not (A-Z a-z). */

#include<stdio.h>
#include<stdlib.h>	//for malloc

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL CheckAlphabet(char cValue)
{
	
	if(cValue <= 'z' && cValue >= 'A')
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
	
	bRet = CheckAlphabet(C);
	
	if(bRet == TRUE)
	{
		printf("\n It is a Alphabet\n");
	}
	else
	{
		printf("\n It's not a Alphabet\n");
	}
	
	return 0;
}
	
	

	