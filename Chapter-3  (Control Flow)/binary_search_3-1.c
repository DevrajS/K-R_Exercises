/*
 Developer : Neeraj kr. Sharma

 Exercise 3-1. Our binary search makes two tests inside the loop,
 when one would suffice (at the price of more tests outside.) 
 Write a version with only one test inside the loop

 Input :
     Enter searching element : 2
 ouput :
 	  position : 0   

*/

#include<stdio.h>
int binary_search(int ,int [],int );

int main(int argc, char const *argv[])
{
	int key,array_size;
	int pos,v[]={2,6,10,11,16,22,65,84,98,100};
	printf("Enter searching element : ");
	scanf("%d",&key);
	array_size=10;
	pos=binary_search(key,v,array_size);
	pos!=-1? printf("position : %d\n",pos):printf("Sorry Element not found!\n");
	return 0;
}
int binary_search(int key,int v[],int array_size)
{
	int mid=0,high,low;
	high=array_size-1;
	low=0;
	while(low<=high  && v[mid]!=key)  // loop version 2.0 having only one test inside the loop
	{
		mid=(low+high)/2;
		if (key<v[mid])
			high=mid-1;
		else
			low=mid+1;
	}

	return v[mid]!=key?-1:mid; // ternary operator contain less priority than relational operator 
}
