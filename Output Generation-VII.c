/*Write a C program to Generate the following output
be conscious about number of spaces
for Sample Input-I > from iterations 1 to 5 should be 8 to 0(difference should be 2)
for Sample Input-II > from iterations 1 to 7 should be 12 to 0(difference should be 2)
Sample Input-I
5
Sample Output-I
0        0
01      01
010    010 
0101  0101 
0101001010
Sample Input-II
7
Sample Output-II
0            0
01          01
010        010 
0101      0101 
01010    01010
010101  010101
01010100101010  */




#include<stdio.h>
int main()
{
	int n,i,j,k,s,count;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		count=0;
		for(j=1;j<=i;j++)
		{
			if(j%2!=0)
			printf("0");
			if(j%2==0)
			printf("1");
			count++;
		}
		for(k=1;k<=n-i;k++)
		{
			printf(" ");
		}
		for(s=1;s<=i;s++)
		{
			if(s%2!=0)
			printf("0");
			if(s%2==0)
			printf("1");
		}
		printf("\n");
	}

	
	
	return 0;
}
