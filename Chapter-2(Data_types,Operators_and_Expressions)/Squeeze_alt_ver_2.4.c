/*
Developer : Neeraj Kumar sharma
Kernighan and Ritchie Exercise - 2.4
program to delete each character from the string that matches any character from the other input string.

Dry Run :
Input : 
           Enter string :infinity war return
           Enter characters you want to delete : ar
output : 
			Successfully deleted 4 characters from string!
            Updated String : infinity w etun

   - It is also calculating how many characters get deleted from the string. 

Follow this url to run this program online: https://onlinegdb.com/SkXw6OLWX             
*/
#include<stdio.h>
#include<stdlib.h>
void fill_text_in_array(char emptyarr[]);

void squeeze(char s1[],char s2[]);

int main(int argc, char const *argv[])
{
		char s1[50];
		char s2[50];

		printf("Enter string :");

		fill_text_in_array(s1);

		printf("\nEnter characters you want to delete : ");

		fill_text_in_array(s2);

		squeeze(s1,s2);

		return 0;
}
void fill_text_in_array(char emptyarr[])  /*Better to use this instead scanf() specially in this case*/
{
	 int c,i;
	
	for(i=0;(i<50) && ((c=getchar())!='\n')&& (c!=EOF);i++)
	{
		emptyarr[i]=c;
	}
    emptyarr[i]='\0';
}

void squeeze(char s1[],char s2[])
{
	 int i,j,k=0;
     int c,char_remove_count=0;

     while((c=s2[k++])!='\0')
     {
			for(i=j=0;s1[i]!='\0';i++)
			{

				if(s1[i]!=c)
				
					s1[j++]=s1[i];
				else
					char_remove_count++;	
			}
			s1[j]='\0';	
     }

	printf("\nSuccessfully deleted %d characters from string! \nUpdated String : %s\n",char_remove_count,s1);
}
