/*Write a C program to check whether we can make all numbers of an array equal.

Given an array arr[], the task is to make all the array elements equal with the given operation.

In a single operation, any element of the array can be either multiplied by 2 or by 3.

If its possible to make all the array elements equal with the given operation then print Yes else print No.
for example, 
if input is arr[]={50,75,100}
then output is Yes, because
{50 * 2 * 3, 75 * 2 * 2, 100 * 3} = {300, 300, 300}

Sample Input-I
Enter the size of the array
3
Enter 3 elements
50
75
100

Sample Output-I
Yes, it’s possible to make all numbers of an array equal

Sample Input-II
Enter the size of the array
2
Enter 2 elements
10
14

Sample Output-II
No, it’s not possible to make all numbers of an array equal*/




#include <stdio.h>

int main(void) {
  int n,a[100],i,j,flag=0;
  printf("Enter the size of the array\n");
  scanf("%d",&n);
  printf("Enter %d elements\n",n);
  for(i=0;i<n;i++){
    scanf("%d",&a[i]);
  }
  for(i=0;i<n;i++){
    while(a[i]%2==0)
    a[i]/=2;
    while(a[i]%3)
    a[i]/=3;
    if(a[i]!=a[0])
    flag=1;
  }
  if(flag==1)
  printf("Yes, it’s possible to make all numbers of an array equal");
  else
  printf("No, it’s not possible to make all numbers of an array equal");

  return 0;
}
