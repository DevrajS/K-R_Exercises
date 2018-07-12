#include<stdio.h>
/* Author Neeeraj kumar sharma */
void main()
{
   char userinput[100];
   int i,j,ascii,*frequency;
   printf("Enter String");
   scanf("%s",userinput);          // Also can be used getchar() for this purpose. will try in another program.
    i=j=0;
   frequency=(int *)calloc(26,sizeof(int));  //Allocated block of memory to story frequency of characters.
   while(userinput[i]!='\0')
   {
       ascii=userinput[i];
       if(ascii>=65 && ascii<=90)
       {
           frequency[ascii-65]++;     // core logic
       }
       else if(ascii>=97 && ascii<=122)
         frequency[ascii-97]++;     // core logic
         i++;
   }
   printf("\n");
   for(i=0;i<26;i++)
   {
       printf("%c | %d\n",i+65,frequency[i]);
   }
}
