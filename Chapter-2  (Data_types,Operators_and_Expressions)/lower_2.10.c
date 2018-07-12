/*
Developer : Neeraj Kr. Sharma
  Exercise 2.10 : program to convert upper case letter into lower case letter

  Input :
  		Enter Upper case letter
                    A
  Output :
        Lower case Letter : a	

*/

#include<stdio.h>
int lower(char upper_case_letter);
int main()
{
	char ch;
	printf("************program to convert Upper case into lower case letter**********************\n");
	printf("Enter Upper case letter \n");
	scanf("%c",&ch);
	 if(ch>64 && ch<91)
		printf("Lower case Letter : %c\n",lower(ch));
	 else
	 	printf("Invalid Input!\n");
		
	
	return 0;
}
int lower(char upper_case_letter)
{
		return upper_case_letter+32;
}