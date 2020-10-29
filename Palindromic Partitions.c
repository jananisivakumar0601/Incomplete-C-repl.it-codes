/*Write a C program to print all the palindromic partitions in a given string.

Sample Input-I
Enter the string
hello

Sample Output-I
Palindromic partitions are
h e l l o
ll 

Sample Input-II
Enter the String
nitin 

Sample Output-II
n i t i n
n iti n
nitin*/




#include<stdio.h>
#include<string.h>
int main()
{
	char s[20],a[20];
	int i,flag=0,j,k;
	printf("Enter the string\n");
	scanf("%[^\n]s",s);
	printf("palindromic partitions are\n");
	for(i=0;i<strlen(s);i++)
	{
		printf("%c ",s[i]);
	}
	printf("\n");
	for(i=0;i<strlen(s);i++)
	{
		if(s[i]!=s[strlen(s)-i-1])
		{
			flag++;
		}
	}
	if(flag!=0)
	{
		for(i=0;i<strlen(s);i++)
		{
			if(s[i]==s[strlen(s)-i-1])
			{
				printf("%c%c",s[i],s[strlen(s)-i-1]);
				break;
			}
		}
	}
	k=0;
	if(flag==0)
	{
	for(i=0;i<strlen(s);i++)
	{
	if(s[i]==s[i+2])
	{
	    for(j=i;j<strlen(s)-1;j++)
	    {
			printf("%c",s[j]);
			}
			}
			
			else{
				if(i==0||i==strlen(s)-1)
				{
					
				if(i==strlen(s)-1)
				printf(" ");
				printf("%c ",s[i]);
				}
			}
	}
	printf("\n");
	for(i=0;i<strlen(s);i++)
	
	printf("%c",s[i]);
	}

	return 0;
}
