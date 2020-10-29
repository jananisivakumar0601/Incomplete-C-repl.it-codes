/*Write a C program to insert a new value in the array(unsorted list)
get the size of the arrays from user, assume you gonna    work with integer arrays

Make sure your array must be flexible enough for at least one insertion

Sample Input-I
Enter the size of the array
4 
Input 4 elements 
1 
8 
7 
10 
Enter the value to be inserted
5 
Enter the index, after the index, value will be inserted
1 

Sample Output-I 
The current list of the array
1 8 7 10 
After Insert the element the new list is
1 8 5 7 10 

Sample Input-II
Enter the size of the array
10 
Input 10 elements 
11
44
34
45
67
54
23
98
87
42
Enter the value to be inserted
52
Enter the index, after the index, value will be inserted
8 

Sample Output-II 
The current list of the array
11 44 34 45 67 54 23 98 87 42
After Insert the element the new list is
11 44 34 45 67 54 23 98 87 52 42  */




#include<stdio.h>
int main()
{
	int a[20],i,j,n,value,position;
	printf("Enter the size of the array\n");
	scanf("%d",&n);
	printf("Input %d elements\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the value to be inserted\n");
	scanf("%d",&value);
	printf("Enter the index,after the index,value will be inserted\n");
	scanf("%d",&position);
	printf("The current list of the array\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	for(i=n;i>=position+1;i--)
		a[i+1]=a[i];
		a[position+1]=value;
	printf("\nAfter Insert the element the new list is\n");
	for(i=0;i<=n;i++)
	printf("%d ",a[i]);
	return 0;
}
  
  
