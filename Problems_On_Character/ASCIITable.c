/* Write a program which displays ASCII table. Table contains symbol,Decimal, Hexadecimal and Octal representation of 
	every member from 0 to 255. */
	
#include<stdio.h>

void main()
{
	int i = 0;
	char ch;
	
	for(i=0; i<256; i++)
	{
		printf("%c\t",ch);
		ch = ch + 1;
	}
}
