/*Write a C program to find number of unique pairs in an array.

Given an array arr[] of n elements, the task is to find all the unique pairs that can be formed using the elements of a given array.
arr[] = {1,1,2}
then the output is 4, because (1,1),(1,2),(2,1) & (2,2) are the unique pairs.

Sample Input-I
Enter the size of the array
3
Enter 3 elements
1
1
2

Sample Output-I
The following pairs are unique pairs
(1,1)
(1,2)
(2,1)
(2,2)
So the result is 4

Sample Input-II
Enter the size of the array
3
Enter 3 elements
1
2
3

Sample Output-II
The following pairs are unique pairs
(1,1)
(1,2)
(1,3)
(2,1)
(2,2)
(2,3)
(3,1)
(3,2)
(3,3)
So the result is 9*/



#include <stdio.h>

int main(void) {
  int a[20],i,j,n,k,count;
  printf("Enter the size of the array\n");
  scanf("%d",&n);
  printf("Enter %d elements\n",n);
  for(i=0;i<n;i++)
  {
  scanf("%d",&a[i]);
  }
  for(i=0;i<n;i++)
  {
    for(j=i+1;j<=n;j++)
    {
      if(a[i]==a[j])
      {
        for(k=j;k<n;k++)
        {
          a[k]=a[k+1];
        }
        k--;
        n--;
      }

    }

  }
  printf("The following pairs are unique pairs\n");
  for(i=0;i<=n-1;i++)
      {
        for(j=1;j<=n;j++)
        {
          printf("\n(%d,%d)",a[i],j);
          count=count+1;
        }
      }
  printf("\nSo the result is %d",count);
  return 0;
}
