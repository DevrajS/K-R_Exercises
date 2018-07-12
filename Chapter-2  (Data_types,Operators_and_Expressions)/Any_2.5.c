/*
Developer : Neeraj Kumar Sharma
Kernighan and Ritchie Exercise - 2.5
- program to Write the function any(s1,s2), which returns the first location in a string 
s1 where any character from the string s2 occurs, or -1 if s1 contains no characters from s2.

Dry Run :
 Input: 
		please Enter string: Hello, there
		please Enter another string: Namastey
 output:
 	    Found First matching character t in 8 location!
 - Key feature : It also detect and specify matching blank space;
*/

#include<stdio.h>
void fill_text_in_array(char emptyarr[]);
int any(char [],char []);

int main(int argc, char const *argv[])
{
	char s1[50];
	char s2[50];
	int loc;
	printf("please Enter string: ");
	fill_text_in_array(s1);
	printf("\nplease Enter another string: ");
	fill_text_in_array(s2);
    loc=any(s1,s2); 

	if(loc>=1)
	{
	  if(s1[loc-1]==' ')
	  	 printf("\n Found First matching character 'space' in %d location!",any(s1,s2));
	  else 
	  	 printf("\n Found First matching character %c in %d location!",s1[loc-1],any(s1,s2));
	}
    else
   	  printf("\n Sorry No any Matching character found!");
	return 0;
}

int any(char s1[],char s2[])
{
	int i,j,key;

	for (j = 0;(key=s2[j])!='\0'; ++j)
		for(i=0;s1[i]!='\0';i++)
			if (s1[i]==key)
	 	        return i+1;  //returning location btw 

  if (key=='\0')  //Traverse till last if not found return -1
  	return -1;

}
void fill_text_in_array(char emptyarr[])  
{
	 int c,i;
	
	for(i=0;(i<50) && ((c=getchar())!='\n')&& (c!=EOF);i++)
	{
		emptyarr[i]=c;
	}
    emptyarr[i]='\0';
}