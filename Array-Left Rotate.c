/*Write a C program to left rotate an array by n position.
get the size of the array thru console

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
5
Input 5 numbers
8
1
3
4
0
Input number of times to rotate
1
Sample Output-II
Array after left rotation 1 time(s)
1
3
4
0
8
*/


#include<stdio.h>
int n,i,a[30],r;
int main()
{
	printf("Enter the size of the array\n");
	scanf("%d",&n);
	printf("Input %d numbers\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
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
	
return 0;
}
