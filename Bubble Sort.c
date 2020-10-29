/*Write a C program for Bubble sort
use the given skeleton 

for swap logic you should use pointers

the printArray function should take care of printing theresult

Sample Output
11
12
22
25
34
64
90
*/


#include <stdio.h>
int i,j,n,temp,size;
void swap(int *xp, int *yp)
{
 temp=*xp;
 *xp=*yp;
 *yp=temp;
}
// A function to implement bubble sort
void bubbleSort(int arr[], int n)
{
   for(i=0;i<n-1;i++)
   {
     for(j=0;j<n-i-1;j++)
     {
       if(arr[j]>arr[j+1])
       {
         swap(&arr[j],&arr[j+1]);
       }
     }
   }
}
 
/* Function to print an array */
void printArray(int arr[], int size)
{
  for(i=0;i<size;i++)
  {
    printf("%d\n",arr[i]);
  }
}
 
// Driver program to test above functions
int main(void)
{
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n=sizeof(arr)/sizeof(arr[0]);
   bubbleSort(arr,n);
    printArray(arr,n);
    return 0;
}
