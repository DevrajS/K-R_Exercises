/*Author : Neeraj Kumar sharma*/

#include<stdio.h>
int getline(char text[]);
char * Rev_str(char text[]);
void main()
{
 char text[100];
 char *ch,i=0;
  ch=Rev_str(text);
  while(ch[i]!='\0')
  {
    printf("%c",ch[i]);
    i++;
  }
}
char * Rev_str(char text[])
{
   static char revstr[100];  // Expanded the scope of this array to the outside of this method
   int i,n;
   n=getline(text); // get input text from the stdin device

  for(i=0;i<n-1;i++)  // copying array elements in reverse order.
  {
      revstr[i]=text[n-i-2];
  }
 revstr[i]='\n';    //not necessary here but it is the best practised to put.
 i++;
  revstr[i]='\0';   // this will mark the end of the character string.

  return revstr;  // returning the character array pointer
}

int getline(char text[])
{
  int i=0;
  int c;
   while((c=getchar())!=EOF && c!='\n')
   {
       text[i]=c;
       i++;
   }

    if(c=='\n')
    {
        text[i]='\n';
         i++;
    }

    text[i]='\0';
    return i;
}
