/*Write a C program to count pairs in array whose sum is divisible by k.

Given an array arr[] and a positive integer k, the task is to count total number of pairs in the array whose sum is divisible by k.

for example, if arr[]={1,2,3,4,5,6} and k=3, then output is 5, because the following pairs’ sum divisible by k, (1,2), (1,5),(2,4),(3,6),(4,5).

Get the size of the array, array elements and the value of k through the console.

Sample Input-I
Enter the size of the array
6
Input 6 elements
2
2
1
7
5
3
Enter the value for k
4

Sample Output-I
Result is 5

Sample Input-II
Enter the size of the array
7
Input 7 elements
5
9
36
74
52
31
42
Enter the value for k
3

Sample Output-II
Result is 7*/



#include <stdio.h>

int main(void) {
int i,j,a[30],n,c,count=0,r;
printf("Enter the size of the array\n");
scanf("%d",&n);
printf("Input %d elements\n",n);

for(i=0;i<n;i++)
{
  scanf("%d",&a[i]);
}
printf("Enter the value for k\n");
scanf("%d",&r);
for(i=0;i<n;i++)
{
  for(j=i+1;j<n;j++)
  {
    c=a[i]+a[j];
    if(c%r==0)
    {
      count=count+1;
    }
  }
}
printf("Result is %d",count);
return 0;
}
