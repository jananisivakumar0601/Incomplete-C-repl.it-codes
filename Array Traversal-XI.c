/*Write a C program to insert a new value in the array(sorted list)
get the size of the arrays from user, assume you gonna    work with integer arrays

you don’t need to ask the user to input the position

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

Sample Output-I 
The current list of the array after sorting
1 7 8 10 
After Insert the element the new list is
1 5 7 8 10 

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

Sample Output-II 
The current list of the array after sorting
11 23 34 42 44 45 54 67 87 98
After Insert the element the new list is
11 23 34 42 44 45 52 54 67 87 98

*/

#include <stdio.h>
int main()
{
  int a[20],i,j,n,value,temp;
  printf("Enter the size of the array\n");
  scanf("%d",&n);
  printf("Input %d elements\n",n);
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  printf("Enter the value to be inserted\n");
  scanf("%d",&value);
  printf("The current list of the array after sorting\n");
  for(i=0;i<n;i++)
  {
    for(j=i+1;j<n;j++)
    {
      if(a[i]>a[j])
      {
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
      }
    }
  }
  for(i=0;i<n;i++)
  printf("%d ",a[i]);
  for(i=0;i<=n;i++)
  {
  a[n]=value;
  }
  for(i=0;i<=n;i++)
  {
    for(j=i+1;j<=n;j++)
    {
      if(a[i]>a[j])
      {
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
      }
    }
  }
  printf("\nAfter Insert the element the new list is\n");
  for(i=0;i<=n;i++)
  printf("%d ",a[i]);
  return 0;
}
