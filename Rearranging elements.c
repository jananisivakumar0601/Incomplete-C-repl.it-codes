/*Write a C program to rearrange odd and even values in alternate fashion in Ascending order.

Given an array of integers (both odd and even), the task is to arrange them in such a way that odd and even values come in alternate fashion in non-decreasing order(ascending) respectively.

If the smallest value is Even then we have to print Even-Odd pattern.

If the smallest value is Odd then we have to print Odd-Even pattern.

Get the input from the user, No. of odd elements must be equal to No. of even elements in the input array

Sample Input-I
Enter the size of the array
6
Input 6 elements
1
3
2
5
4
8

Sample Output-I
Smallest value is 1, so output is Odd-Even pattern
1,2,3,4,5,8

Sample Input-II
Enter the size of the array
6
Input 6 elements
9
8
13
2
19
14

Sample Output-II
Smallest value is 2, so output is Even-Odd pattern
2,9,8,13,14,19*/





#include<stdio.h>
int main()
{
	int a[20],i,j,n,flag,temp;
	printf("Enter the size of the array\n");
	scanf("%d",&n);
	printf("\nInput %d elements\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
	      if(a[i]>a[j])
	      {
      		temp=a[i];
      		a[i]=a[j];
      		a[j]=temp;
      	}
		}
	}
	printf("\nSmallest value is %d,",a[0]);
	for(i=0;i<=0;i++)
	{
		if(a[i]%2==0)
		{
			printf("so output is Even-Odd pattern ");
			flag=0;
		}
		else{
			printf("so output is Odd-Even pattern ");
			flag=1;
		}
		}
		if(flag==0)
		{
			for(i=1;i<n;i=i+2)
			{
				if(a[i]%2==0)
				{
					temp=a[i];
					a[i]=a[i+1];
					a[i+1]=temp;
				}
			}
		}
		if(flag==1)
		{
			for(i=1;i<n;i=i+2)
			{
				if(a[i]%2!=0)
				{
					temp=a[i];
					a[i]=a[i+1];
					a[i+1]=temp;
				}
			}
		}
		
		for(i=0;i<n;i++)
		{	
		printf("%d",a[i]);
		if(i<n-1)
		printf(",");
		}
	return 0;
}
