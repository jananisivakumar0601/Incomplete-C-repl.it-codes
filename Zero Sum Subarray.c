/*Write a C program to find any subarray that sums to zero, if one exists.
Get the size of the array from the user, assume you gonna use integer arrays

Sample Input-I
Enter the size of the array
3
Input 3 elements
-1
1
0

Sample Output-I
subarray [-1,1]’s sum is 0

Sample Input-II
Enter the size of the array
5
Input 5 elements
1
-2
3
2
5

Sample Output-II
subarray [-2,2]’s sum is 0

Sample Input-III
Enter the size of the array
5
Input 5 elements
1
2
3
4
5

Sample Output-III
no subarray yields 0 as sum */

#include<stdio.h>
int main()
{
	int a[20],i,j,n,sum,count=0;
	printf("Enter the size of the array\n");
	scanf("%d",&n);
	printf("Input %d elements\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]+a[j]==0)
			{
				sum=a[i]+a[j];
				count=count+1;
				printf("Subarray[%d,%d]'s sum is %d",a[i],a[j],sum);
			}
		}
	}
	if(count==0)
	{
		printf("no subarray yields 0 as sum");
	}

	return 0;
	
}
