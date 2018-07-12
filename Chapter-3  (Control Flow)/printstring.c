#include<stdio.h>

int main()
{
	//print all sttrings greater than 80 chars
	  // Take input string
	  //
   int buffer[100];
   int c,count=0,i=0;

  while((c=getchar())!=EOF)
  {
  	while(c=='\n')
		{
			
		  buffer[i]='\0';

		if (count>=10)
		{
			for (int i = 0; buffer[i]; ++i)
			{
				putchar(buffer[i]);
			}
			break;
		}
		else
		{
			i=0;
			count=0;
		}
	   }
	buffer[i++]=c;
	count++;	
  }
		
	return 0;
}