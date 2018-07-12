/*Developer Neeraj Kr. Sharma
- program to write a loop (used in getline() in ch-1)
without using logical operator (|| and &&)
*/
#include<stdio.h>
#include<stdlib.h>
void main()
{
    int i,lim=4;
    int c;
     printf("Please type here:\n");
   // for(i=0;(i<lim) * ((c=getchar())!=EOF) * (c!='\n');i++) //Conditon will return 0 if it is false and soon it will get multiply by other condition
     //    putchar(c);                                          // and hence the loop conditional will overall become false.
     printf("\n printed Using multiplication operator * ");

    for(i=0;(i<lim) ? (((c=getchar())!=EOF)?1: ((c!='\n')?1:0)):0;i++)
            putchar(c);
            printf("\nprinted Using Conditional Operator\n");

}
