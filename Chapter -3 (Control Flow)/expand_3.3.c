/*
Developer : Neeraj Kumar Sharma

Exercise : Exercise 3-3. Write a function expand(s1,s2) that expands shorthand notations 
like a-z in the string s1 into the equivalent complete list abc...xyz in s2. 
Allow for letters of either case and digits, and be prepared to handle cases 
like a-b-c and a-z0-9 and -a-z. 

Dry Run : 

Input : Enter String : neera-t s0-6 -a-h

Output: 
		neerabcdefghijklmnopqrst s0123456 abcdefgh

Description: It will expand wherever it will find shorthand like b-h or 3-9 etc in string.It will also handle
the shorthand like -s-u boy3-8 hello-z etc. 

please let us know how we can improve it more.

-- Enjoy...		
*/
#include<stdio.h>
void fill_empty_array(char []);
void expand(char [],char []);

int main(int argc, char const *argv[])
{
	char str[50];
	char str2[100];
	printf("Enter String : ");
    fill_empty_array(str);
	expand(str,str2);
	printf("%s", str2);
	return 0;
}

void expand(char str[],char str2[])
{
	int before,after;
	int i,j;
	i=j=0;
	int masterindex=0;
	while(str[i]!='\0')
	{
		if (str[i]=='-')
		{
			if (((before=str[i-1])>=48 && before<=122) &&((after=str[i+1])>=48 && after<=122))
			{
				for (j=before+1; j <after; ++j)
				{
					str2[masterindex++]=j;
				}
			}
		}
		else
			str2[masterindex++]=str[i];
		i++;
	}

	str2[masterindex]='\0';
}

void fill_empty_array(char str[])
{
	int i=0;
	int c;
	while((c=getchar())!='\n')
		str[i++]=c;
	str[i]='\0';
	
}