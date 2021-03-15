/* Accept division of student from user and depends on the division display exam timing. There are 4 divisions in school 
   as A,B,C,D. Exam of division A at 7 AM, B at 8.30 AM, C at 9.20 AM and D at 10.30 AM.
  (Application should be case insensitive) */
  
 #include<stdio.h>
 
 void DisplaySchedule(char cDiv)
 {
	switch(cDiv)
	{
		case 'A':
		case 'a':
					printf("\nYour Exam timing is 7 Am\n");
					break;
		
		case 'B':
		case 'b':
					printf("\nYour Exam timing is 8.30 Am\n");
					break;
					
		case 'C':
		case 'c':
					printf("\nYour Exam timing is 9.20 Am\n");
					break;
					
		case 'D':
		case 'd':
					printf("\nYour Exam timing is 10.30 Am\n");
					break;
					
		default:
					printf("\nWrong Division\n");
					break;
	}
 }
 
 int main()
 {
	char ch = '\0';
	 
	printf("\nEnter your Division:\t");
	scanf("%c",&ch);
	 
	DisplaySchedule(ch);
	 
	return 0;
 }
	 
	 
   