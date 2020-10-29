/*Write a C program to print all elements of the given matrix in diagonal order. Make sure you gonna work with 2D array.

If this is an input array 
1 2 3 4
5 6 7 8
9 10 11 12
13 14 15 16
17 18 19 20
Output should be
1
5 2
9 6 3
13 10 7 4
17 14 11 8
18 15 12
19 16
20
because there are 8 diagonals

Sample Input-I
Enter the no. of rows
4
Enter the no. of columns
4
insert the element for 0,0
1
insert the element for 0,1
2
insert the element for 0,2
3
insert the element for 0,3
4
insert the element for 1,0
5
insert the element for 1,1
6
insert the element for 1,2
7
insert the element for 1,3
8
insert the element for 2,0
9
insert the element for 2,1
10
insert the element for 2,2
11
insert the element for 2,3
12
insert the element for 3,0
13
insert the element for 3,1
14
insert the element for 3,2
15
insert the element for 3,3
16

Sample Output-I
The matrix is
1 2 3 4
5 6 7 8
9 10 11 12
13 14 15 16
Result is
1
5 2
9 6 3
13 10 7 4
14 11 8
15 12
16

Sample Input-II
Enter the no. of rows
5
Enter the no. of columns
4
insert the element for 0,0
1
insert the element for 0,1
2
insert the element for 0,2
3
insert the element for 0,3
4
insert the element for 1,0
5
insert the element for 1,1
6
insert the element for 1,2
7
insert the element for 1,3
8
insert the element for 2,0
9
insert the element for 2,1
10
insert the element for 2,2
11
insert the element for 2,3
12
insert the element for 3,0
13
insert the element for 3,1
14
insert the element for 3,2
15
insert the element for 3,3
16
insert the element for 4,0
17
insert the element for 4,1
18
insert the element for 4,2
19
insert the element for 4,3
20

Sample Output-II
The matrix is
1 2 3 4
5 6 7 8
9 10 11 12
13 14 15 16
17 18 19 20
Result is
1
5 2
9 6 3
13 10 7 4
17 14 11 8
18 15 12
19 16
20*/




#include<stdio.h>
int main()
{
	int a[20][20],r,c,k,i,j;
	printf("Enter the no. of rows\n");
	scanf("%d",&r);
	printf("Enter the no. of columns\n");
	scanf("%d",&c);
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("insert the element for %d,%d\n",i,j);
			scanf("%d",&a[i][j]);
		}
	}
printf("The matrix is\n");	
for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
printf("%d",a[i][j]);
if(j!=c-1)
printf(" ");
if(j==c-1)
printf("\n");
}
}
printf("Result is\n");
for(k=0;k<=r-1;k++)
{
	i=k;
	j=0;
	while(i>=0&&j<=c-1)
	{
		printf("%d ",a[i][j]);
		i=i-1;
		j=j+1;
		}
		printf("\n");
	}
	for(k=1;k<=c-1;k++)
	{
		i=r-1;
		j=k;
		while(j<=c-1)
		{
			printf("%d ",a[i][j]);
			i=i-1;
			j=j+1;
		}
		printf("\n");
	}
	return 0;
	}





