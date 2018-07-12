/* Author Neeraj Kumar Sharma
*Entab program (Top stop 8 considered)
(Koshish karne walo ki kavi haar nhi hoti)
*/
#include "stdio.h"
#define TABSTOP 8

void main()
{
    int c;
    int blank=0,tab=0,space=0,i;
    int flag=1;
	while((c=getchar())!=EOF)
    {
      
       if(c==' ')
       {
           flag=1;  // putting flag to 1 or 0 will enable to print or not print the spaces.
           space++;
        if(space%TABSTOP==0)
         {
          tab++;    // calculate number of tabs
          space=0; //reset space to 0
         }
       }
     
      else
      {
          for(i=0;i<tab;i++) // It will print the number of tabs
          {
             printf("\\t");
               flag=0;  // disable the flag to avoid printing space
          }
            
            tab=0; // reset tab to 0 for the next input string.
            if(flag)//flag do no let print the space if tab is printed
            {

             for(i=1;i<=space;i++)
                {
                    putchar(' ');
                    flag=0; // let to know the space is printed and the flag is set to 0. 
                }
            }
                 putchar(c);  //printing the characters ..
      }      
      
    }
}
