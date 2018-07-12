#include<stdio.h>
void main()
{
    int l,i=0,j=0,k=0;
    char str[100];
    char newstr[100];
    l=getline(str);
    while(str[i]!='\0')
    {
        if(str[i]==' ')
        {
            newstr[j]=str[i];
            j++;
            i++;
            while(str[i]==' ')
            {
                i++;
            }
        }
        newstr[j]=str[i];
        i++;
        j++;
    }
     newstr[j]='\0';

       while(newstr[k]!='\0'){
        printf("%c",newstr[k]);
        k++;
     }
}

int getline(char s[])
{
    int i,c,t;
    i=c=0;
    while((c=getchar())!=EOF && c!='\n')
    {
         s[i]=c;
         i++;
    }
   if(c=='\n')
   {
       s[i]='\n';
       i++;
   }
    s[i]='\0';

    return i;
}
