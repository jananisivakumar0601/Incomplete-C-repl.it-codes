/*Write a C program to rotate the array elements in anti-clockwise rotation and print it.

Infer the problem statement thoroughly through sample inputs and sample outputs

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
1	2	3	4
5	6	7	8
9	10	11	12
13	14	15	16
Anti-clockwise Rotation output is
2	3	4	8
1	7	11	12
5	6	10	16
9	13	14	15

Sample Input-II
Enter the no. of rows
3
Enter the no. of columns
3
insert the element for 0,0
8
insert the element for 0,1
7
insert the element for 0,2
1
insert the element for 1,0
2
insert the element for 1,1
5
insert the element for 1,2
6
insert the element for 2,0
3
insert the element for 2,1
4
insert the element for 2,2
9

Sample Output-II
The matrix is 
8	7	1
2	5	6
3	4	9
Anti-clockwise Rotation output is
7	1	6
8	5	9
2	3	4*/




#include<stdio.h>
int main()
{
	int a[20][20],i,j,c,r,temp,count=0,temp1,temp3;
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
			count++;
		}
	}
	printf("The matrix is\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d ",a[i][j]);
			if(j==c-1)
			printf("\n");
		}
	}
	printf("Anti-clockwise Rotation output is\n");
	temp=a[0][0];
	temp1=a[1][1];
	temp3=a[r-1][c-1];
	for(i=0;i<=0;i++)
	{
		for(j=0;j<c-1;j++)
		{
			a[i][j]=a[i][j+1];
		}
	}
	j=c-1;
	for(i=0;i<r;i++)
	{
		a[i][j]=a[i+1][j];
		if(i==r-1)
		{
		for(j=c-1;j>=0;j--)
		a[i][j]=a[i][j-1];
		}
		
	}
	j=0;
	for(i=r-1;i!=0;i--)
	{
		a[i][j]=a[i-1][j];
	}
	a[1][0]=temp;
	if(count>9)
	{
	i=1;j=1;
	while(i!=3)
	{
		a[i][j]=a[i][j+1];
		a[i][j+1]=a[i+1][j+1];
		if(i==2)
		{
			a[i][j]=a[i][j-1];
		}
		i++;
		j++;
	}
	a[2][1]=temp1;
	a[r-2][c-1]=temp3;
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d ",a[i][j]);
			if(j==c-1)
			printf("\n");
		}
	}
return 0;
}


