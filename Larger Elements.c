/*Write a C program to find number of larger elements on right side in a string

If the input string is “abcd”, then the output is 3 2 1 0, because there are 3 greater characters on right of 'a', 2 greater characters on right of 'b', 1 greater character on right of 'c' and 0 greater characters on right of 'd'

Accept a char array from the user

Sample Input-I
Enter the String
abcd

Sample Output-I
3 2 1 0

Sample Input-II
Enter the String
string

Sample Output-II
1 0 0 1 0 0 

Sample Input-III
Enter the String
computer

Sample Output-III
7 4 4 3 0 0 1 0  */



#include<stdio.h>
#include<string.h>
int main()
{
	char s[30];
	int i,j,count=0;
	printf("Enter the String\n");
	scanf("%s",s);
	for(i=0;i<strlen(s);i++)
	{count=0;
		for(j=i+1;j<strlen(s);j++)
		{
			if(s[i]<s[j])
				{
					count=count+1;
				
				}
			}
	
			printf("%d",count);	
		}
	
				
	return 0;
}
