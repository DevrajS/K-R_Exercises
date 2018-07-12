#include<stdio.h>
#define SIZE 100
int getLength(char []);
void save(char [],char []);
void main()
{
    char curline[SIZE];
    char longline[SIZE];
    int len=0;
    int max=0;
    int r=0;
        printf("Please Enter Strings and press Ctrl + z to stop:\n");
       while((len=getLength(curline))>0)
       {
        if(max<len)
        {
            max=len;
            save(curline,longline);
        }
       }
  printf("longest line is\n");
   if(max>0)
   {
    for(;r<max-1;r++)
    printf("%c",longline[r]);
   }

}
int getLength(char curline[])
{
    int c;
    int i=0;
    while((c=getchar())!=EOF && c!='\n')
    {
        curline[i]=c;

        i++;
    }
    if(c=='\n'){
        curline[i]=c;
    i++;
    }

    curline[i]='\0';

    return i;
}
void save(char curline[],char longline[])
{
    int i=0;
    while(curline[i]!='\0')
    {
        longline[i]=curline[i];
        i++;
    }
}
