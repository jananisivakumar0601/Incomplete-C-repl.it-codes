/*Write a C program to left rotate an array by n position and right rotate by n position in a menu driven fashion.

get the size of the array thru console

infer all the sample inputs and outputs thoroughly before you proceed

Sample Input-I
Enter the size of the array
10
Input 10 numbers
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
Want to perform left rotate or right rotate?
1.Left rotate
2.Right rotate
1
Input number of times to rotate
4

Sample Output-I
Array after left rotation 4 time(s)
5
6
7
8
9
10
1
2
3
4

Sample Input-II
Enter the size of the array
10
Input 10 numbers
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
Want to perform left rotate or right rotate?
1.Left rotate
2.Right rotate
2
Input number of times to rotate
4

Sample Output-II
Array after right rotation 4 time(s)
7
8
9
10
1
2
3
4
5
6

Sample Input-III
Enter the size of the array
5
Input 5 numbers
8
1
3
4
0
Want to perform left rotate or right rotate?
1.Left rotate
2.Right rotate
1
Input number of times to rotate
1

Sample Output-III
Array after left rotation 1 time(s)
1
3
4
0
8

Sample Input-IV
Enter the size of the array
5
Input 5 numbers
8
1
3
4
0
Want to perform left rotate or right rotate?
1.Left rotate
2.Right rotate
2
Input number of times to rotate
1

Sample Output-IV
Array after right rotation 1 time(s)
0
8
1
3
4
*/


#include<stdio.h>
int n,i,a[30],r,c,r1;
int main()
{
	printf("Enter the size of the array\n");
	scanf("%d",&n);
	printf("Input %d numbers\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Want to perform left rotate or right rotate?\n");
	printf("1.Left rotate\n");
	printf("2.Right rotate\n");
	scanf("%d",&c);
	switch(c)
	{
		case 1:
		printf("Input number of times to rotate\n");
		scanf("%d",&r);
		printf("Array after left rotation %d time(s)\n",r);
		for(i=r;i<n;i++)
		{
			printf("%d\n",a[i]);
		}
	
	for(i=0;i<r;i++)
	{
		printf("%d\n",a[i]);
	}
	break;
	case 2:
		printf("Input number of times to rotate\n");
		scanf("%d",&r1);
		printf("Array after right rotation %d time(s)\n",r1);
		for(i=n-r1;i<n;i++)
		{
			printf("%d\n",a[i]);
		}
	
	for(i=0;i<n-r1;i++)
	{
		printf("%d\n",a[i]);
	}
	}
return 0;
}

