/*
Developer : Neeraj Kumar sharma
Program to convert Hexadecimal number into Decimal number

Dry Run -
 input : 0xff3 (base 16)
 output : 4083 (base 10)

*/
#include "stdio.h"
#include "math.h"

int atohex(int hex);
int Int_to_dec(int buffer[],int buffersize);

int main()
{
	int hex,integer,decimal;
	int buffer[10],buffersize=0,i=0;
     
	printf("Enter hex value (between a - f and 1 - 9):0x");
	
	while((hex=getchar())!='\n')
	{
		integer=atohex(hex);
		buffer[buffersize]=integer;
		buffersize++;
	}
    decimal=Int_to_dec(buffer,buffersize);

    printf("Integers were : \n");
    for(;i<buffersize;i++)
	  printf(" %d | \t",buffer[i]);

	printf("\n decimal value is %d",decimal);

	return 0;
}

int Int_to_dec(int buffer[],int buffersize)
{
	int decimal=0;
	int i;

	for(i=0;i<buffersize;i++)
		
		decimal=decimal + (buffer[i]*pow(16,(buffersize-1)-i));

	return decimal;
}

int atohex(int hex)
{
	int integer;
	if(hex>=97 && hex<=102)
	integer=hex-87;
    else if(hex>=49 && hex<=57)
     integer=hex-48;
	return integer;
}
