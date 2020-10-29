/*Write a program in C to print all unique elements in an array.
get the size of an array from user, assume you gonna work with integer arrays

Sample Input-I
Enter the size of the array
10
Input 10 integer numbers
1
3
1
3
4
5
6
7
8
5
Sample Output-I
The unique elements are
4
6
7
8

Sample Input-II
Enter the size of the array
5
Input 5 integer numbers
0
8
6
3
1
Sample Output-II
no elements have more than one occurrence in the given array*/



#include <stdio.h>
int main()
{
	int a[20],i,j,n,freq[30],count=1,count1=0,b[30];
	printf("Enter the size of the array\n");
	scanf("%d",&n);
	printf("Input %d integer numbers\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		freq[i]=-1;
	}
	b[i]=a[i];
	for(i=0;i<n;i++)
	{
		count=1;
		for(j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
			{
				count=count+1;
				freq[j]=0;
			}
			
		}

if(freq[i]!=0)
{
	freq[i]=count;
}
}
for(i=0;i<n;i++)
{
	if(freq[i]==1)
	{
		count1=count1+1;
	}
	}
	if(count1==n)
	{
	printf("no elements have more than one occurrence in the given array");
	}
	if(count1!=n)
	{
		printf("The unique elements are\n");
		for(i=0;i<n;i++)
		{
			if(freq[i]==1)
			{
				printf("%d\n",a[i]);
			}
		
	}
	}

return 0;
}
