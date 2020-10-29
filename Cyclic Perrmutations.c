/*Write a C program to generate all cyclic permutations of a number. 

Get the input through console.

Infer more from sample inputs and outputs

Sample Input-I
Enter a number
123

Sample Output-I
Possible cyclic permutations are
123
312
231

Sample Input-II
Enter a number
5674

Sample Output-II
Possible cyclic permutations are
5674
4567
7456
6745

Sample Input-III
Enter a number
78675

Sample Output-III
Possible cyclic permutations are
78675
57867
75786
67578
86757*/





#include<stdio.h>
int main()
{
	int n,a[20],i,k=0,r,j,temp,s=0,l=0,b[20],temp1;
	printf("Enter a number\n");
	scanf("%d",&n);
	temp1=n;
	while(n!=0)
	{
		r=n%10;
		n=n/10;
		k++;
	}
	for(i=k-1;i>=0;i--)
	{
		a[i]=temp1%10;
		temp1=temp1/10;
	}
	printf("Possible cyclic permutations are\n");	
	for(i=0;i<=k-1;i++)
	{
		printf("%d",a[i]);
	}	
	printf("\n");				
	while(s<k-1)
	{
	temp=a[k-1];
	for(i=k-1;i>=0;i--)
	{
		a[i]=a[i-1];
		
		}
		a[0]=temp;

	for(i=0;i<=k-1;i++){
		printf("%d",a[i]);
		}
		printf("\n");
		s++;
		}
		
	return 0;
}
