#include<stdio.h>
void main()
{
    int count=0;
  int c;
    while((c=getchar())!='\n')
    {
        count++;
        if(count>=14)
        {
           if(c==' ')
           {
               printf("\n");
               count=0;
           }
        }
        putchar(c);
    }
}