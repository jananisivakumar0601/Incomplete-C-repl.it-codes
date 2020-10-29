/*Write a program in C to count the frequency of each element of an array.
get the size of an array from user, assume you gonna work with integer arrays

Sample Input-I
Enter the size of the array
10
Input 10 integer numbers
1
3
1
3
4
5
6
7
8
5
Sample Output-I
1 occurs 2 time(s)
3 occurs 2 time(s) 
4 occurs 1 time(s)
5 occurs 2 time(s)
6 occurs 1 time(s)
7 occurs 1 time(s)
8 occurs 1 time(s)

Sample Input-II
Enter the size of the array
5
Input 5 integer numbers
0
8
6
3
1

Sample Output-II
0 occurs 1 time(s)
8 occurs 1 time(s)
6 occurs 1 time(s)
3 occurs 1 time(s)
1 occurs 1 time(s) */



#include <stdio.h>

int main()
{
    int arr[100], freq[100];
    int size, i, j, count;
    printf("Enter the size of the array\n");
    scanf("%d", &size);
    printf("Input %d integer numbers\n",size);
    for(i=0; i<size; i++)
    {
        scanf("%d",&arr[i]);

        
        freq[i] = -1;
    }


    for(i=0; i<size; i++)
    {
        count = 1;
        for(j=i+1; j<size; j++)
        {
            
            if(arr[i]==arr[j])
            {
                count++;
                 freq[j] = 0;
            }
        }

  
        if(freq[i] != 0)
        {
            freq[i] = count;
        }
    }

    for(i=0; i<size; i++)
    {
        if(freq[i] != 0)
        {
            printf("%d occurs %d time(s)\n", arr[i], freq[i]);
        }
    }

    return 0;
}
    
