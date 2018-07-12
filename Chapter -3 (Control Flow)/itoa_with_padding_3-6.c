/*
  Developer : Neeraj kr. Sharma

  Exercise 3-6. Write a version of itoa that accepts three arguments instead of two. 
  The third argument is a minimum field width; the converted number must be padded 
  with blanks on the left if necessary to make it wide enough 

Dry Run :
 Input :
			Enter number: -125
 Output : 
 			Ascii character string (padding = 6) :  -125

 Note : This improved version of itoa forced to contain minimum number of character
 		in the string.If number of ascii character in the string does not meet the 
 		minimum characters in the string then it adds extra space character
 		as padding to fullfill the requirement.In this program the minimum number of 
 		character has 6.
 		

*/

#include<stdio.h>
#include<string.h>
#include<math.h>

#define MAXLENGTH 50
#define padding  6


int itoa(int num, char str[],int );

int main(int argc, char const *argv[])
{
	int num;
	char str[MAXLENGTH];

	 printf("Enter number: ");
	 scanf("%d",&num);
	itoa(num,str,padding);
	printf("\nAscii character string (padding = %d) :%s",padding, str);
	return 0;
}

int itoa(int num,char str[],int pad)
{
	int i=0,flag=0;
    int sign=0,addspace;
    int flagpad=0,checkpad=0;
    int j=0,checknum;

    if ((sign=num) <0)
    {
       num=-num;
       flag=1;
    }
    checknum=num;

    while(checknum>0)
	{
		flagpad=1;
		checkpad++;
		checknum=checknum/10;

	}

	while(num>0)
	{
		str[i++]=abs(num%10)+'0';
		num=num/10;
	}
	if(flag)
		str[i++]='-';

    if (flagpad)
	 {
			addspace=pad-checkpad;
			flag?addspace--:0;
			for ( j=i; j < addspace+i; ++j)
				str[j]=' ';
			flagpad=0;
			i=j;
	}
	str[i]='\0';
	
   strrev(str);
}




