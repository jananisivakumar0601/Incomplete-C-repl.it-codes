/*Write a C program to print Sum Triangle for a given array

Given an array, construct a triangle where last row contains elements of given array, every element of second last row contains sum of below two elements and so on.

Get the input from the user through console

Sample Input-I
Enter the size of the array
8
Enter 8 elements
4
3
9
1
0
6
5
7

Sample Output-I
Sum Triangle is
417
218 199
125 93 106
74 51 42 64
41 33 18 24 40
19 22 11 7 17 23
7 12 10 1 6 11 12
4 3 9 1 0 6 5 7

Sample Input-II
Enter the size of the array
5
Enter 5 elements
2
7
5
6
1

Sample Output-II
Sum Triangle is
85
44 41
21 23 18
9 12 11 7
2 7 5 6 1*/



#include<stdio.h>
 void printTriangle(int arr[] , int n)
  {  
   if (n < 1)
   {    
  	return; 
  	} 
   int temp[n - 1]; 
  	   	            
  for (int i = 0; i < n - 1; i++)
  	 {  
     int x = arr[i] + arr[i + 1];  
          temp[i] = x; 
         }  
   printTriangle(temp, n - 1);
       for (int i = 0; i < n ; i++)
        {  
         if(i == n - 1)         
          printf("%d ",arr[i]);  
               else
                 printf("%d ",arr[i]);
                     } 
                        printf("\n");
                         } 
         int main()
          {    
          	int arr[20],i,j,n;
          	   printf("Enter the size of the array\n");
          	   scanf("%d",&n);
          	   printf("Enter %d elements\n",n);
          	   for(i=0;i<n;i++)
          	   {
             		scanf("%d",&arr[i]);
             	} 
             	printf("Sum triangle is\n");
          	      printTriangle(arr, n); 
          	      }
