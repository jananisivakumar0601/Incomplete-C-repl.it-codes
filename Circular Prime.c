/*Write a C program to check whether the given number is circular prime number or not and also generate the circular prime numbers from 1 to 1000.

A circular prime is a prime number with the property that the number generated at each intermediate step when cyclically permuting its (base 10) digits will be prime.
For example, 1193 is a circular prime, since 3119, 9311 and 1931 are prime numbers.

Sample Input-I
Choose the option
1.Check Circular Prime
2.Generate Circular Prime numbers between 1 & 1000
3.Exit
1
Enter a number
131

Sample Output-I
the entered number is a circular prime number
Sample Input-II
Choose the option
1.Check Circular Prime
2.Generate Circular Prime numbers between 1 & 1000
3.Exit
1
Enter a number
91

Sample Output-II
the entered number is a not a circular prime number

Sample Input-III
Choose the option
1.Check Circular Prime
2.Generate Circular Prime numbers between 1 & 1000
3.Exit
2

Sample Output-III
The circular prime numbers between 1 & 1000 are
2 3 5 7 11 13 17 31 37 71 73 79 97 113 131 197 199 311 337 373 719 733 */




#include<stdio.h>
#include<stdlib.h>
int n,temp,k=0,e=0,a[20],i,sum=0,count=0,choice;
int r,s=0,j,temp1,t,k,temp2,e,count1=0;
int main()
{
	printf("Choose the option\n");
	printf("1.Check Circular Prime\n");
	printf("2.Generate Circular Prime numbers between 1 & 1000\n");
	printf("3.Exit\n");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
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
	temp=a[k-1];
	for(i=k-1;i>=0;i--)
	{
		a[i]=a[i-1];
	}
	a[0]=temp;
	sum=0;
	for(i=k-1;i>=0;i--)
	{
		sum=sum*10+a[i];
	}
	for(i=2;i<sum;i++)
	{
		if(sum%i==0)
		{
			count++;
		}
	}
	e++;
	}
	if(count==0)
	printf("the entered number is a circular prime number\n");
	else
	printf("the entered number is a not circular prime number\n");
	break;
	case 2:
	printf("The circular prime numbers between 1 & 1000 are\n");
	for(i=2;i<1000;i++)
	{
		count=0;
		temp=i;
		s=0;
		while(temp!=0)
		{
			r=temp%10;
			temp=temp/10;
			s++;
		}
			for(j=2;j<i;j++)
			{

				if(i%j==0)
				{
					count++;
				}
			}

		if(count==0)
		{
			temp1=i;
			k=0;
			while(temp1!=0)
			{
				a[k]=temp1%10;
				temp1=temp1/10;
				k++;
			}
			e=0;
			count1=0;
			while(e!=s)
			{
			temp2=a[k-1];
			for(t=k-1;t>=0;t--)
			{
				a[t]=a[t-1];
			}
			a[0]=temp2;
			sum=0;
			for(t=k-1;t>=0;t--)
			{
				sum=sum*10+a[t];
			}
			for(j=2;j<sum;j++)
			{
				if(sum%j==0)
				{
					count1++;
				}
			}
			e++;
			}
			if(count1==0)
			printf("%d ",i);
		}

	}
break;
case 3:
exit(0);
}
	
	return 0;
	
}
