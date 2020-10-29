/*Write a C program to find largest number with prime digits.

Given an integer value for n, find the largest integer value x such that x<=n and all the digits of x are prime.

Sample Input-I
Enter a number 
45

Sample Output-I
Result is 37

Sample Input-II
Enter a number 
7721

Sample Output-II
Result is 7577

Sample Input-III
Enter a number 
1000

Sample Output-III
Result is 777*/






#include<stdio.h>
int main()
{
	int n,i,j,count,s=0,temp,count1=0,r,k,a[20],r1,m,temp1;
	printf("Enter a number\n");
	scanf("%d",&n);
	printf("Result is ");
	for(i=n-1;i>=1;i--)
	{
	temp=i;
	temp1=i;
	m=0;
	while(temp1!=0)
	{
		r1=temp1%10;
		temp1=temp1/10;
		m++;
	}
	s=0;
	r=0;
	
	while(temp!=0)
	{
		r=temp%10;
		count1=0;
		for(k=2;k<r;k++)
		{
			if(r%k==0&&r!=0&&r!=1)
			count1++;
		}
		if(count1==0&&r!=0&&r!=1)
		{
		a[s]=r;
		s++;
		}
		temp=temp/10;
		
	}
	if(s==m)
	{
	printf("%d\n",i);
	break;
}

	
}
return 0;
}
