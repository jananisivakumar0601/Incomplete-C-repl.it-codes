/*Analyze and design a solution that will print the numbers as a spiral. For example for the given N x M matrix, where N is the number of rows and M is the number of columns, the number sequence will be from 1 to N x M.

Sample Input-I
Enter the value for N
5
Enter the value for M
4

Sample Output-I
The final spiral matrix is 
1	2	3	4
14	15	16	5
13	20	17	6
12	19	18	7
11	10	9	8

Sample Input-II
Enter the value for N
5
Enter the value for M
5

Sample Output-II
The final spiral matrix is 
1	2	3	4	5
16	17	18	19	6
15	24	25	20	7
14	23	22	21	8
13	12	11	10	9*/






#include<stdio.h>
const int MAX = 100; 
void spiralFill(int m, int n, int a[][MAX]) 
{ 
 
    int val = 1; 

    int k = 0, l = 0; 

    while (k < m && l < n) 

    {
    

        for (int i = l; i < n; ++i) 

            a[k][i] = val++; 

  

        k++; 


        for (int i = k; i < m; ++i) 

            a[i][n-1] = val++; 

        n--; 


        if (k < m) 

        { 

            for (int i = n-1; i >= l; --i) 

                a[m-1][i] = val++; 

            m--; 

        } 

  


        if (l < n) 

        { 

            for (int i = m-1; i >= k; --i) 

                 a[i][l] = val++; 

            l++; 

        } 

    } 

} 

int main() 

{ 

    int m,n;
    printf("Enter the value for N\n");
    scanf("%d",&m);
    printf("Enter the value for M\n");
    scanf("%d",&n);
    int a[MAX][MAX]; 

    spiralFill(m, n, a); 
    printf("The final spiral matrix is\n");

    for (int i=0; i<m; i++) 

    { 

       for (int j=0; j<n; j++) 
       printf("%d ",a[i][j]);
       printf("\n");

    } 

    return 0; 

} 

