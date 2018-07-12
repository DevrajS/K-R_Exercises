/*
 Developer : Neeraj Kumar Sharma. 

 Exercise 1-13. Write a program to print a histogram of the lengths of words in its input. 
 It is easy to draw the histogram with the bars horizontal; 
 
 "a vertical orientation is more challenging." 

  |* Challenge Accepted and done : ) |

  Input : 
  		    Please Enter the string : coding is fun and i really used to enjoy this..

  Output :   		    
                                  |         |
                                  |         |     |
				  |         | |   | |
                                  |   | |   | |   | |
                                  | | | |   | | | | |
                                  | | | | | | | | | |
                                  6020303010604020504
        coool right !!                          

 Note : Its output Histogram is quite impressive and similar to graphical music visualizer the bars will be high and low
 based on the frequency of the words.The value 0 indicates the blank character in the histogram.It will also 
 handle the multiple spaces and tabs.

 Happy to code this... : )
*/


#include<stdio.h>
#include<stdlib.h>

int histogram(int frequency_of_chars_in_words[],int size);

int main(int argc, char const *argv[])
{
	int size=0,i=0,c,freq=0;
	int frequency_of_chars_in_words[20];
	printf("\n");
	printf("Please Enter the string : ");

	while((c=getchar())!=EOF && (c!='\n'))
	{
			freq++;
		/*Assigning the frequency of words in the array */
		if (c==' '  || c=='\t')
		{
			frequency_of_chars_in_words[i++]=--freq;
			freq=0;
			/*Assigning 0 to indicate space or blank character */
			frequency_of_chars_in_words[i]=freq; 
			i++;
		}
	}
    
	frequency_of_chars_in_words[i]=freq;
        size=++i;
    
    
   histogram(frequency_of_chars_in_words,size);
  
    return 0;
}

int histogram(int frequency_of_chars_in_words[],int size)
{
	int largebar=0;
    
     int *arr=(int *)malloc(sizeof(int)*size);
     
     /*Backing up the data of the array in another array 'arr' for further use*/
     for (int i = 0; i <size; ++i)
     {
     	arr[i]=frequency_of_chars_in_words[i];	
     }

    /*finding the largest value from the array*/
    for (int i = 0; i < size; ++i)
    {
    	largebar=frequency_of_chars_in_words[i]>largebar?frequency_of_chars_in_words[i]:largebar;
    }

      printf("\n");

	for(int i = largebar; i > 0; --i)
	{
		for (int j = 0; j <size; ++j)
		{	/* Core logic : ) say kernel*/	
			if (frequency_of_chars_in_words[j]==i)
			{   
				/*Decrementing the actual value of array  */
					frequency_of_chars_in_words[j]--;
				printf("|");	
			}
			else
				printf(" ");
		}
		printf("\n");
	}
	/* Used previous backed up data to print the frequency of the words*/
	 for (int i = 0; i < size; ++i)
	 {
	 	printf("%d",arr[i]);
	 }
	return 0;
}

