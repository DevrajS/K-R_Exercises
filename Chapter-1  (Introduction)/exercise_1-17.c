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
    char *ptrarr[10];
     int i=0;

        printf("Please Enter Strings and press Ctrl + z to stop:\n");
       while((len=getLength(curline))>0)
       {
        if(len>10)
        {
                ptrarr[i]=(char *)malloc(sizeof(int)*len);
                save(curline,ptrarr[i]);
                i++;
        }
       }
  printf("longest line is\n");
   for (int j = 0; j <i ; ++j)
   {
       printf("%s\n",ptrarr[j]);
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