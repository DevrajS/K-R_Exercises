#include<stdio.h>
#define SIZE 200
void getcode(int arr[]);
void remcmt(int arr[]);
void main()
{
    int i=0;
    int arr[SIZE];
    
    getcode(arr);
    remcmt(arr);
    while(arr[i]!='\0')
    {
        putchar(arr[i]);
        i++;
    }
}
void remcmt(int arr[])
{
    int i=0;
    int flag=1;
    while(arr[i]!='\0')
    {
        if(arr[i]=='/')
        {
            i++;
            if(arr[i]=='/')
             {
                 i=i-1;
                  while(arr[i]!='\n')
                  {
                      arr[i]=' ';
                      i++;
                  }
             }
         if(arr[i]=='*')
             {
            
                  while(flag)
                  {
                      
                     i--;
                      if(arr[i]=='*')
                       {
                           i++;
                           if(arr[i]=='/')
                           {
                              flag=0;
                              arr[i]=' ';
                              break;
                           }
                          
                       }
                       arr[i]=' ';
                        i++;
                  }
             }        
        }
        i++;
    }
}

void getcode(int arr[])
{
    int i=0,c;
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

