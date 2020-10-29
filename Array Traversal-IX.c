/*Write a C program to merge two arrays of same size sorted in descending order.
get the size of the arrays from user, assume you gonna    work with integer arrays

I kept one special test case of array size mismatch- so   have a special care for array size-> if the size of the   first array is not matched with the size of the second    array, you should print "make sure both the arrays must   be with the same size"

Sample Input-I
Input the number of elements to be stored in the first array 
5 
Input 5 elements in the array
0
4
2
1
3
Input the number of elements to be stored in the second array 
5 
Input 5 elements in the array
9
8
1
3
2 

Sample Output-I
The merged array in descending order is 
9 8 4 3 3 2 2 1 1 0

Sample Input-II
Input the number of elements to be stored in the first array 
3 
Input 3 elements in the array
1
2
3
Input the number of elements to be stored in the second array 
3 
Input 3 elements in the array
1
2
3 

Sample Output-II
The merged array in descending order is 
3 3 2 2 1 1  */


#include <stdio.h>
void merge(int[],int,int[],int,int[]);
int main()
{
  int a[20],i,j,n,m,b[30],c[20],k,temp;
  printf("Input the number of elements to be stored in the first array\n");
  scanf("%d",&n);
  printf("Input %d elements in the array\n",n);
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  printf("Input the number of elements to be stored in the second array\n");
  scanf("%d",&m);
  if(n!=m)
  {
    printf("make sure both the arrays must be with the same size\n");
  }
  if(n==m)
  {
  printf("Input %d elements in the array\n",m);
  for(i=0;i<m;i++)
  {
    scanf("%d",&b[i]);
  }
  
    for(i=0;i<n;i++)
    {
      c[i]=a[i];
    }
    k=i;
    for(i=0;i<m;i++)
    {
      c[k]=b[i];
      k++;
    }
for(i=0;i<k;i++)
{
  for(j=i+1;j<k;j++)
  {
    if(c[i]<c[j])
    {
      temp=c[i];
      c[i]=c[j];
      c[j]=temp;
    }
  }
}
printf("The merged array in descending order is\n");
for(i=0;i<k;i++)
printf("%d ",c[i]);
}
return 0;
}










