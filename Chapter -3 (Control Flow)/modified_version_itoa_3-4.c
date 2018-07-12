/*
 Developer : Neeraj Kumar sharma
 Exercise 3-4. In a two's complement number representation, 
 our version of itoa does not handle the largest negative number, 
 that is, the value of n equal to -(2wordsize-1). 
 Explain why not.Modify it to print that value correctly, regardless of the machine on which it runs.

 Dry Run: 
 	Input: Enter number: -2147483648

 	Output :
 			Equivalent Ascii Character string: -2147483648
  Note: In this program to handle largest negative integer number i have used abs() mehthod in line
  no. 45.abs() returns the absolute value  of the given integer. 			
*/
#include<stdio.h>
#include<math.h>
#include<string.h>

#define MAXLENGTH 50
int itoa(int num,char str[]);

int main(int argc, char const *argv[])
{
	int num;
	char str[MAXLENGTH];
	printf("Enter number: ");
	scanf("%d",&num);
	itoa(num,str);
	printf("Equivalent Ascii Character string: %s\n",str);
	return 0;
}

int itoa(int num,char str[])
{
	int sign,i=0,flag=0;
	if ((sign=num)<0)
	{
		flag=1;
		num=-num;
	}

	while(num)
	{
		str[i++]=(abs(num%10)) + '0';  // '0' because to convert integer into equivalent ascii character
		num=num/10;
	}

	if(flag)
		str[i++]='-';
		
	str[i]='\0';
	strrev(str);
	return 0;
}