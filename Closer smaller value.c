/*Write a C program to find closest smaller value for every element in an array.

Get the size and value for array elements through console.

Given an array of integers, find the closest smaller element for every element, if there is no smaller element then print -1.

Sample Input-I
Enter the size of the array
6
Enter 6 integer elements
10
5
11
6
20
12

Sample Output-I
Final output is
6 -1 10 5 12 11

Sample Input-II
Enter the size of the array
6
Enter 6 integer elements
10
5
11
10
20
12

Sample Output-II
Final output is
5 -1 10 5 12 11*/




#include<stdio.h>
int main()
{
	int a[20],i,j,n,b[20],temp,count;
	printf("Enter the size of the array\n");
	scanf("%d",&n);
	printf("Enter %d integer elements\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&b[i]);
		a[i]=b[i];
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(b[i]<b[j])
			{
				temp=b[i];
				b[i]=b[j];
				b[j]=temp;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		count=0;
		for(j=0;j<n;j++)
		{
		
			if(a[i]>b[j])
			{
				count=count+1;
				a[i]=b[j];
				break;
			
			}
	//break;
		}
		if(count==0)
		a[i]=-1;
	}
	printf("Final output is\n");
	for(i=0;i<n;i++)
	printf("%d ",a[i]);
	return 0;
}
