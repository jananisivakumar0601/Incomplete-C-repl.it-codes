/*Write a C program to count total number of indices(i,j) such that arr[i]=arr[j] & i != j
In simple terms, in a given array of size n, count the index pairs with equal elements. 
For eg, if the input array is {1,1,2}, then output is 1, because index 0 and index 1 holds same value

Get the array size and elements from the user through console.

Sample Input-I
Enter the size of the array
5
Input 5 elements 
0
1
1
2
2

Sample Output-I
Result is 2

Sample Input-II
Enter the size of the array
10
Input 10 elements 
1
2
3
4
5
6
7
8
9
10

Sample Output-II
Result is 0

Sample Input-III
Enter the size of the array
10
Input 10 elements 
1
1
1
2
3
3
4
4
5
5

Sample Output-III
Result is 5*/




#include<stdio.h>
int main()
{
	int a[20],i,j,n,count=0,freq[20];
	printf("Enter the size of the array\n");
	scanf("%d",&n);
	printf("Input %d elements\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		freq[i]=-1;
	}
	for(i=0;i<n;i++)
	{
	   for(j=i+1;j<n;j++)
		{
			if(a[i]==a[j]&&freq[i]!=0)
			{
				count=count+1;
				freq[j]=0;
			}
		}
	}
	printf("\nResult is %d",count);
return 0;
}
