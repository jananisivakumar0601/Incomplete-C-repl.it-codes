/*Write a C program to Generate the following output
be conscious about number of spaces between asterisks
for Sample Input-I-> from iterations 1 to 5 should be 18 to 2(difference should be 4)
for Sample Input-II-> from iterations 1 to 6 should be 22 to 2(difference should be 4)

Sample Input-I 
Input the number
5

Sample Output-I
*                  *
* *              * *
* * *          * * *
* * * *      * * * *
* * * * *  * * * * *
* * * * *  * * * * *
* * * *      * * * *
* * *          * * *
* *              * *
*                  *

Sample Input-II
Input the number
6

Sample Output-II
*                      *
* *                  * *
* * *              * * *
* * * *          * * * *
* * * * *      * * * * *
* * * * * *  * * * * * *
* * * * * *  * * * * * *
* * * * *      * * * * *
* * * *          * * * *
* * *              * * *
* *                  * *
*                      *


*/


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
			printf("* ");
			count++;
		}
		for(k=1;k<=4*n-4*i;k++)
		{
			printf(" ");
		}
		while(count!=0)
		{
			printf(" *");
			count--;
		}
		printf("\n");
	}
	for(i=n;i>=1;i--)
	{
		count=0;
		for(j=1;j<=i;j++)
		{
			printf("* ");
			count++;
		}
		for(k=1;k<=4*n-4*i;k++)
		{
			printf(" ");
		}
		while(count!=0)
		{
			printf(" *");
			count--;
		}
		printf("\n");
	}
	return 0;
}
