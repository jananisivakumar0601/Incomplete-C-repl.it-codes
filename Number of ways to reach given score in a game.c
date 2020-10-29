/*Write a C program to count number of ways to reach a score using 1 and 2 with no consecutive 2s.

A cricket player has to score N runs, with condition he can take either 1 or 2 runs only and consecutive runs should not be 2. Find all the possible combination he can take. For example, if input is 4, then output is also 4, because the following 4 combinations are possible to reach the score 4, 1+1+1+1, 1+2+1, 2+1+1, 1+1+2.

Sample Input-I
Enter the score
4

Sample Output-I
4

Sample Input-II
Enter the score
5

Sample Output-II
6*/



#include<stdio.h>
int main()
{
	int n,i,j,a[20],sum=0,sum1=0,count;
	printf("Enter the score\n");
	scanf("%d",&n);
	j=0;
	for(i=1;i<n;i++)
	{
		sum=n/i;
		if(sum==n)
		{
			sum=1;
		}
		a[j]=sum;
		j++;
		
	}
	if(j%2!=0)
	{
	
	count=j+1;
	printf("%d",count);
	}
	else
	{
	
	count=j+2;
	printf("%d",count);	
	}
		
	return 0;
}
