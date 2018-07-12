#include "stdio.h"
#include "limits.h"

void main()
{

printf("Character : \n");
   printf("Range of signed char is %d to %d\n",CHAR_MIN,CHAR_MAX);	
   printf("\tMinimum Value of Unsigned Char : 0\n" );
   printf("\t Maximum Value of unsigned char is  %d\n",UCHAR_MAX);

printf("Integer(SIZE OF INTEGER 4 BIT) : \n");
   printf("Range of signed Integer is %d to %d\n",INT_MIN,INT_MAX);	
   printf("\tMinimum Value of Unsigned Integer : 0\n");
   printf("\t Maximum Value of unsigned Integer is  %u\n",UINT_MAX);
printf("Short Int : \n");
printf("Range of signed Integer is %d to %d\n",SHRT_MIN,SHRT_MAX);	
   printf("\tMinimum Value of Unsigned Integer : 0\n");
   printf("\t Maximum Value of unsigned Integer is  %u\n",USHRT_MAX);
printf("Long Int : \n");
   printf("Range of Signed Integer is %d to %d\n",LONG_MIN,LONG_MAX);
   printf("Minimum value of unsigned Long int is 0\n");
   printf("Maximum value of unsigned Long int is %u \n",ULONG_MAX);

}