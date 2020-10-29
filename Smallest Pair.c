/*Write a C program to find smallest pair in an array

Given an array of distinct numbers, the task is to find a pair which has the minimum sum and print the sum

Sample Input-I
Enter the size of the array
4
Enter 4 elements
1
9
0
2

Sample Output-I
Smallest pair is [0,1]
Sum of the smallest pair is 1

Sample Input-II
Enter the size of the array
10
Enter 4 elements
32
9
10
2
11
13
19
22
30
21

Sample Output-II
Smallest pair is [2,9]
Sum of the smallest pair is 11*/


#include <stdio.h>

int main(void) {
  int a[30],i,j,n,temp,c;
  printf("Enter the size of the array\n");
  scanf("%d",&n);
  printf("Enter %d elements\n",n);
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
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
  c=a[0]+a[1];
    printf("Smallest pair is [%d,%d]",a[0],a[1]);
    printf("\nSum of the smallest pair is %d",c);
  
  return 0;
}
  
