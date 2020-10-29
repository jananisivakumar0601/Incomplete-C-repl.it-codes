/*Write a C program to find Largest Palindromic Number by permuting digits.

Given a very large input N, the task is to print the largest palindromic number obtained by permuting the digits of N.

If it is not possible to make a palindromic number, then print “palindrome cannot be formed”

For Example
if the input is 313551, then the output is 531135, because 531135 is the largest number which is a palindrome, 135531, 315513 and other numbers can also be formed but we need the highest of all of the palindromes.

Sample Input-I
Enter a number
531135

Sample Output-I
The largest palindromic number is 531135

Sample Input-II
Enter a number
331

Sample Output-II
The largest palindromic number is 313

Sample Input-III
Enter a number
3444

Sample Output-III
Palindrome cannot be formed*/




#include<stdio.h>
int main()
{
	int a[20],n,sum=0,temp,i,k,temp1,e=0,sum1=0,s=0,b[20],j;
	printf("Enter a number\n");
	scanf("%d",&n);
	temp=n;
	while(n!=0)
	{
		a[k]=n%10;
		n=n/10;
		k++;
		}
		while(e!=k)
		{
		temp1=a[k-1];
		for(i=k-1;i>=0;i--)
		{
			a[i]=a[i-1];
		}
		a[0]=temp1;
		sum=0;
		for(i=0;i<k;i++)
	{
		sum=sum*10+a[i]%10;
	}

	temp=sum;
	sum1=0;
	while(temp!=0)
	{
		sum1=sum1*10+temp%10;
		temp=temp/10;
	}
	if(sum==sum1)
	{
		b[s]=sum;
		s++;
	}
	e++;
}
if(s==0)
printf("Palindrome cannot be formed");

if(s==1)
{
printf("The largest palindromic number is ");
for(i=0;i<s;i++)
	printf("%d",b[i]);
	}
	if(s>1)
	{
		printf("The largest palindromic number is ");
		for(i=0;i<s;i++)
		{
			for(j=i+1;j<s;j++)
			{
				if(b[i]<b[j])
				{
					printf("%d",b[j]);
				}
			}
		}
	}

	
	return 0;
}
