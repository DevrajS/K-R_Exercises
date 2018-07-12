#include "stdio.h"
int getline(char ch[]);
char * detab(char ch[],int);
void main()
{
    char *newch,ch[100];
    int n;
    n=getline(ch);
   newch=detab(ch,n);
   printf("%s",newch);

}
char * detab(char ch[],int size)
{
    int i=0,j,k=0,space=0,newsize;
    static char newch[100];

     for(i=0;i<size-1;i++)
     {

        if(ch[i]=='\t')
        {
            i++;
            newsize=size-1;

            space=8-(newsize%8);

            for(j=0;j<space;j++)
              newch[k++]='#';
        }

        newch[k++]=ch[i];

    }
    newch[k]='\n';
    k++;
    newch[k]='\0';
    return newch;
}
int getline(char ch[])
{
    int c,i=0;
    while((c=getchar())!='\n')
    {
      ch[i]=c;
      i++;
    }
    if(c=='\n')
    {
        ch[i]='\n';
        i++;
    }
    ch[i]='\n';
    return i;
}
