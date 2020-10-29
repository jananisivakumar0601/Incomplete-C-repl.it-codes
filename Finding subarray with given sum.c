/*Write a C program to find a subarray which sums to an input sum.
Get the array length and sum from the user through console.

Refer sample input and output thoroughly

Subarray- sequence of elements(not jumping indices)

Sample Input-I
Enter array length and sum respectively
8
20
enter 8 elements
4
2
10
3
-3
10
5
5

Sample Output-I
Subarray is 10 3 -3 10

Sample Input-II
Enter array length and sum respectively
6
15
enter 6 elements
5
1
-6
7
7
3

Sample Output-II
Subarray not found  */




#include<stdio.h>
int main()
{
	int a[20],i,j,n,s,a1[20],k,sum=0,count=0;
	printf("Enter array length and sum respectively\n");
	scanf("%d",&n);
	scanf("\n%d",&s);
	printf("enter %d elements\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		sum=0;k=0;
		for(j=i;j<n;j++)
		{
			a1[k]=a[j];
			sum=sum+a[j];
			k++;
		if(sum==s)
		{
			printf("Subarray is ");
		for(i=0;i<k;i++)
		{
			printf("%d ",a1[i]);
			count++;
		}
		}
		if(count!=0)
		{
			break;
		}
		}
		}
		if(count==0)
		{
			printf("Subarray not found");
		}
		
	return 0;
}
