/*Write a C program to rearrange characters in a string such that no two adjacent are same.

get the input string through console(assume you gonna work with lowercase letters)

Sample Input-I
Enter the string
aaabc

Sample Output-I
abaca

Sample Input-II
Enter the string
bbbaa

Sample Output-II
babab

Sample Input-III
Enter the string
aaaabc

Sample Output-III
Not possible to rearrange

Sample Input-IV
Enter the string
aa

Sample Output-IV
Not possible to rearrange*/







#include<stdio.h>
#include<string.h>
int main()
{
	char s[20];
	int i,j,l,count=0;
	l=strlen(s);
	printf("Enter the string\n");
	scanf("%[^\n]s",s);
	for(i=0;i<strlen(s);i++)
	{
			if(s[i]==s[i+1])
			{
				for(j=i+1;j<strlen(s);j++)
				{
					if(s[i]!=s[j])
					{
						
			s[i+1]=s[j];
			s[j]=s[j+1];
			s[j+1]=s[i];
			break;
					}
				}
				
			}
	}
	for(i=0;i<strlen(s);i++)
	{
			if(s[i]==s[i+1])
			{
				count++;
			}
	}
	if(count==0)
	{
		for(i=0;i<strlen(s);i++)
		printf("%c",s[i]);
	}
	else
	{
		printf("Not possible to rearrange\n");
	}
	
	return 0;
}
