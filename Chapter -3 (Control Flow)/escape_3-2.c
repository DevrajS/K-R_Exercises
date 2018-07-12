/*
Developer : Neeraj Kumar sharma

Exercise 3-2. Write a function escape(s,t) that converts characters
like newline  and tab into visible escape sequences  like \n and \t as
it copies the string t to s. Use a switch.  Write a function for the
other direction as well, converting escape sequences into the real
characters.

Input : 
			Enter string:                   spartan
Output :
			Escape sequence visible : \t\t\tspartan\n

*/

#include<stdio.h>
void fill_empty_char_array(char t[]);
void escape(char [],char []);

int main(int argc, char const *argv[])
{
	char t[50];
	char s[50];
	int i=0;
	printf("Enter string: ");
    fill_empty_char_array(t);
    escape(s,t);
    printf("Escape sequence visible : %s",s);
	return 0;
}
void escape(char s[],char t[])
{
	int i,j;
	i=j=0;

	while(t[i]!='\0')
	{
		switch(t[i])
		{
			case '\n':  s[j++]='\\';
					    s[j++]='n';
					     i++;
					     break;
		    case  '\t':	s[j++]='\\';
		    			s[j++]='t';		   
		    			i++;
		    			break;
		}

		if(t[i]!='\n' && t[i]!='\t') // Check whether the character is again 
		    s[j++]=t[i++];			 // escape sequence or not (if condition to handle multiple tab)
	}
	s[j]='\0';
}

void fill_empty_char_array(char t[])
{
	int i,c;

	for(i=0;i<50 && (c=getchar())!=EOF && c!='\n';)
		t[i++]=c;
	if (c=='\n')
		t[i++]='\n'; 

	t[i]='\0'; // indicates the termination of the string

}