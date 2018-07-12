		/*
		Developer: Neeraj Kumar sharma

		Exercise 3-5. Write the function itob(n,s,b) that converts the integer n into a base b 
		character representation in the string s. 
		In particular, itob(n,s,16) formats s as a hexadecimal integer in s.

		Dry Run 1:

				Input :
						Enter number:  15412

		                 Enter Base (2,8,16): 2
		        output: 
		        		 Binary value = 11 1100 0011 0100 (made string readable with adding space)
		Dry Run 2 :
				Input : Enter number:  5124785

		                Enter Base (2,8,16): 16

		        Output: 
		                 Hex value = 0x4E32B1

		  Note : Love to code this....
		*/

		#include<stdio.h>
		#include<math.h>
		#include<string.h>

	int itob(int n,char s[],int b);

	int main(int argc, char const *argv[])
	{
		char str[50];
		int num,base,n;
		printf("Enter number:  ");
		scanf("%d",&num);
		printf("\nEnter Base (2,8,16): ");
		scanf("%d",&base);
		itob(num,str,base);

			base==16?printf("\nHex value = %s",str):base==8?                   // nested ternary operator : P
			printf("\nOctal value = %s",str):base==2?printf("\nBinary value = %s",str):-1;
			
			return 0;
		}

		int itob(int n,char str[],int base)
		{
			int i=0;
			int space=0,hex_letter;

			switch(base)
			{
				case 2:
				while(n>0)
				{
					str[i++]=abs(n%2) +'0';
					n=n/2;
					if(++space%4==0)
						str[i++]=' ';
				}
				str[i]='\0';
				break;
				case  8:	 
				while(n>0)
				{
					str[i++]=abs(n%8) +'0';
					n=n/8;
				}
				str[i]='\0';
				break;
				case  16:	
				while(n>0)
				{
					hex_letter=abs(n%16);
					switch(hex_letter)
					{
						case 10: str[i++]='A';
						break;
						case 11: str[i++]='B';
						break;
						case 12: str[i++]='C';
						break;
						case 13: str[i++]='D';
						break;
						case 14: str[i++]='E';
						break;               
						case 15: str[i++]='F';
						break;
						default: 
						str[i++]=hex_letter+'0';
						break;
					}
					n=n/16;
				}
				str[i++]='x';
				str[i++]='0';
				str[i]='\0';		
				
				break;
				default: 
				printf("\nDude! Enter correct Base (2,8,16)!");
			}
			strrev(str);
		}