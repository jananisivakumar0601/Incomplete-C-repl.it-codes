/*Write a C program to print odd positioned array elements(only prime numbers) and even positioned array elements(only prime numbers) separately and print their summations.
get the size of an array from user, assume you gonna work with integer arrays

consider index zero as an even number

don't consider 1 as a prime number

your logic should work for both 10 inputs and 5 inputs

have some considerations for non-prime numbers as well (please have a look @ sample input-ii)

Sample Input-I
Enter the size of the array
10
Input 10 integer numbers
7
3
1
3
4
5
2
7
8
5

Sample Output-I
Odd positioned prime numbers are
3
3
5
7
5
Summation is 23
Even positioned prime numbers are
7
2
Summation is 9

Sample Input-II
Enter the size of the array
5
Input 5 integer numbers
1
6
8
9
1

Sample Output-II
No odd positioned prime numbers
No even positioned prime numbers

*/

#include<stdio.h>
int main()
{
	int a[20],i,j,count,n,sum=0,k,b[20],sum1,s,c[20];
	printf("Enter the size of the array\n");
	scanf("%d",&n);
	printf("Input %d integer numbers\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	k=0;
	sum=0;
	for(i=1;i<n;i=i+2)
	{
		count=0;
		for(j=2;j<a[i];j++)
		{
			if(a[i]%j==0)
			{
				count++;
			}
		}
		if(count==0&&a[i]!=1)
		{
		b[k]=a[i];
		k++;
		}
}if(k==0)
{
printf("No odd positioned prime numbers\n");
}
if(k>0)
{
	printf("Odd positioned prime numbers are\n");
	for(i=0;i<k;i++)
	{
		printf("%d\n",b[i]);
		sum=sum+b[i];
	}
	printf("Summation is %d",sum);
}
sum1=0;
s=0;

for(i=0;i<n;i=i+2)
	{
		count=0;
		for(j=2;j<a[i];j++)
		{
			if(a[i]%j==0)
			{
				count++;
			}
		}
		if(count==0&&a[i]!=1)
		{
		c[s]=a[i];
		s++;
		}
}if(s==0)
{
printf("No even positioned prime numbers\n");
}
if(s>0)
{
	printf("\nEven positioned prime numbers are\n");
	for(i=0;i<s;i++)
	{
		printf("%d\n",c[i]);
		sum1=sum1+c[i];
	}
	printf("Summation is %d",sum1);
}
	return 0;
}
