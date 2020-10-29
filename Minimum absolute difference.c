/*Write a C program to find minimum absolute difference of a number and its closest prime. 

Given a positive integer N, the task is to find the absolute difference of N and the prime number closest to N .The closest prime to N can be either less than, equal to or greater than N.

if N=25, then the output is 2, because 
Closest prime greater than 25 is 29. So difference is 4.
Closest prime less than 25 is 23. So difference is 2.
The minimum of these two is 2.

if N is a prime number, then output should be 0

Sample Input-I
Enter the value for N
25

Sample Output-I
Result is 2

Sample Input-II
Enter the value for N
7

Sample Output-II
Result is 0

Sample Input-III
Enter the value for N
45

Sample Output-III
Result is 2*/




#include <stdio.h>
int main()    
{
   int n,i,j,flag=0,out,r2,r1;

   printf("Enter the value for N\n");

   scanf("%d",&n);
   for(i=n;i<=n;i++)
   {
     flag=0;
     for(j=2;j<n;j++)
     {
       if(i%j==0)
       {
         flag=1;
         break;
       }
     }
   }
   if(flag==0)
   {
     printf("Result is 0");
   }
   else
   {
for(i=n+1;i<=100;i++)
   {

      flag=0;

      for(j=2;j<i;j++)
      {
         if(i%j==0)
         {
            flag=1;
            break;
         }
      }

      if(flag==0)
      {
        r1=i-n;
         break;
      }
   }
for(i=n-2;i>=0;i--)
   {

      flag=0;

      for(j=2;j>i;j++)
      {
         if(i%j==0)
         {
            flag=1;
            break;
         }
      }

      if(flag==0)
      {
        r2=n-i;
         break;
      }
   }

if(r1<r2)
{
  printf("Result is %d",r1);
}
  else
  {
  printf("Result is %d",r2);
}
}
  
   return 0;

}
  
