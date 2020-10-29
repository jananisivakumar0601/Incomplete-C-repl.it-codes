/*Write a C program to find the longest sub-string which is prefix, suffix and also present inside the string.

Given a string str. The task is to find the longest sub-string which is a prefix, a suffix and a sub-string of the given string, str. 

If no such string exists then print -1.

Sample Input-I
Enter the string
fixprefixsuffix

Sample Output-I
fix

Sample Input-II
Enter the string
aaaa

Sample Output-II
aa*/



#include<stdio.h>
#include<string.h>
int main()
{
	char s[20],s1[20],s2[20];
	int count=0,i,j,k=0,e,l,c,a,flag;
	l=strlen(s);
	printf("Enter the string\n");
	scanf("%[^\n]s",s);
	for(i=0;i<strlen(s);i++)
	{
		count++;
	}
	for(i=2;i<count;i++)
	{
		if(count%i==0)
		{
		c=i;
		break;
		}
	}
	for(j=0;j<i;j++)
	{
		s1[k]=s[j];
		k++;
	}
	a=strlen(s)-c;
	k=0;
	for(i=a;i<strlen(s);i++)
	{
		s2[k]=s[i];
		k++;
	}
	for(i=0;i<k;i++)
	{
		if(s1[i]==s2[i])
		{
			flag=1;
		}
	}
	if(flag==1)
	{
		for(i=0;i<k;i++)
		printf("%c",s1[i]);
	}
	else
	{
		printf("-1");
	}
	return 0;
}
