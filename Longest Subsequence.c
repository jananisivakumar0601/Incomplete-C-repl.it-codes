/*Write a C program to find the longest subsequence such that adjacent elements have at-least one common digit.

Given an array arr[] of n integers, the task is to find the length of the longest sub-sequence such that adjacent elements of the sub-sequence have at least one digit in common.

Sample Input-I
Enter the size of the array
7
Enter 7 elements
1
12
44
29
33
96
89

Sample Output-I
The longest subsequence is 1,12,29,96,89

Sample Input-II
Enter the size of the array
6
Enter 6 elements
12
23
45
43
36
97

Sample Output-II
The longest subsequence is 12,23,43,36*/




#include<stdio.h>
int main()
{
	int a[20],n,i,r2,r1,temp2,j,temp,r,count,r3,r4,r5,temp1,temp3;
	printf("Enter the size of the array\n");
	scanf("%d",&n);
	printf("Enter %d elements\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("The longest subsequence is\n");
	for(i=0;i<n-1;i++)
	{	
		temp=a[i];				
		r=a[i]%10;
		for(j=i+1;j<n;j++)
		{
			temp2=a[j];
			r1=a[j]%10;
			r2=a[j]/10;
			if(r1==r||r2==r){
			printf("%d,%d",temp,temp2);
		if(j<n-2)
		printf(",");
			a[j]=0;
			break;
			}
			}
	}
	for(i=n-1;i>=n-1;i--)
	{
		temp1=a[i];
		r3=a[i]%10;
		for(j=n-2;j>=0;j--)
		{
			temp3=a[j];
			r4=a[j]%10;
			r5=a[j]/10;
			if(r3==r4||r3==r5)
			printf(",%d",temp1);
		}
	}
	return 0;
}
