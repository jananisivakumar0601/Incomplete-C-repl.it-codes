/*Write a C program to minimise array sum by subtracting larger elements from smaller ones.

Choose any two elements from the array say A and B where A>B and then subtract B from A

Sample Input-I
Enter the size of the array
3
Enter 3 elements
2
4
6

Sample Output-I
Result is 6
Reason for Sample Output-I is as follows
Perform the following operations:-
subtract 2 from 4 then the array becomes 2 2 6
subtract 2 (at 2nd position) from 6 the array 
becomes 2 2 4
subtract 2 (at 2nd position) from 4 the array
becomes 2 2 2
Now the sum of the array will be 6.

Sample Input-II
Enter the size of the array
5
Enter 5 elements
1
2
3
4
5

Sample Output-II
Result is 5*/





#include <stdio.h>

int main(void) {
  
int i,j,a[20],n,r,sum=0;
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
    if(a[i]<a[j])
    {
      r=a[j]-a[i];
      a[j]=r;

    }
  }
}
  for(i=0;i<n;i++){
  sum=sum+a[i];
  }
  printf("Result is %d",sum);
  return 0;
}


  
