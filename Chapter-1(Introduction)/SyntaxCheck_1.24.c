/* Developer: Neeraj Kumar sharma 
program to check rudimentary syntax
(missing closing paranthesis, brackets and braces)
*/
#include<stdio.h>
void getcode(int []);
void syntaxcheck(int program[]);
#define SIZE 200
void main()
{
    int i=0,c;
    int Buffer[SIZE];
    getcode(Buffer);
    syntaxcheck(Buffer);
}

void syntaxcheck(int program[])
{
 int i=0,c;
 int bracket,braces,paranthesis;
 bracket=braces=paranthesis=0;

 while((c=program[i])!='\0')
    {
      if(c=='(')
         paranthesis=1;
      else if(c==')')
         paranthesis=0;
      else if(c=='{')
         braces=1;
      else if(c=='}')
          braces=0;
      else if(c=='[')
           bracket=1;
      else if(c==']')
         bracket=0; 
         i++;   
    }
    if(paranthesis)
         printf("\nError : Missing ) closing paranthesis");
    if(braces)
         printf("\nError : Missing } closing braces");
    if(bracket)
         printf("\nError : Missing ] closing bracket");
    if(!paranthesis && !braces && !bracket)
       printf("\n Cheers! No any Rudimentary Syntax Found " );
}
void getcode(int arr[])
{
    int i=0,c;
  printf("Start Writing Your code Here : (press ctrl + z to exit)\n");  
  while((c=getchar())!=EOF)
    {
          arr[i]=c;
          i++;
    }
    if(c==-1)
    {
     arr[i]='\0';
    }
}