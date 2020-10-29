/*Write a C program to Count pairs in an array such that LCM(arr[i], arr[j]) > min(arr[i],arr[j])

Given an array arr[], the task is to find the count of pairs from the array such that LCM(arr[i], arr[j]) > min(arr[i], arr[j])

Pairs (arr[i], arr[j]) and (arr[j], arr[i]) are considered identical and will be counted only once.

if arr[] = {1, 1, 4, 9}
Output is 5

All valid pairs are (1, 4), (1, 9), (1, 4), (1, 9) and (4, 9)

Sample Input-I
Enter the size of the array
4
Enter 4 elements
1
1
4
9

Sample Output-I
Result is 5

Sample Input-II
Enter the size of the array
8
Enter 8 elements
2
4
5
2
5
7
2
8

Sample Output-II
Result is 24*/


#include <stdio.h>


int main(void) {
  int i,j,a[20],n,count=0;
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
      if(a[i]!=a[j])
      {
      count=count+1;
      }
    }
  }
  printf("Result is %d",count);
  return 0;
}
