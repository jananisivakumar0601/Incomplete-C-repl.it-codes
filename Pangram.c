/*Write a C program to display missing characters to make a string pangram.

Pangram is a sentence containing every letter in the english alphabet. Given a string, find all characters that are missing from the string, i.e., the characters that can make string a pangram.

The output should be in alphabetic order.

Sample Input-I
Enter the string
The quick brown fox jumps

Sample Output-I
The pangram result is
adglvyz

Sample Input-II
Enter the string
Mr. Jock, TV quiz PhD., bags few lynx.

Sample Output-II
The entered string is perfect pangram.*/



#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
	char str[80];
	char a[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
	int i=0, len, j,k,count; 
	int length=0;
	printf("Enter the String\n");
	scanf("%[^\n]s",str);
	len=strlen(str);
	for(i=0; i<len; i++)
	{
		if(str[i]==' ')
		{
			for(j=i; j<len; j++)
			{
				str[j]=str[j+1];
			}
		len--;
		}
	}
	for(i=0; i<len; i++)
	{
		if(isupper(str[i]))
		{
	     str[i]=tolower(str[i]);
		}
	}
	for(i=0;i<len;i++)
	{
	    for(j=0;j<26;j++)
	    {
	        if(str[i]==a[j])
	        {
	            length++;
	        }
	    }
	}
	  if(length==26)
	  printf("The entered string is perfect pangram\n");
	  else
	  {
	      printf("The pangram result is\n");
	      	for(i=0;i<26;i++)
	{
	    count=0;
	    for(j=0;j<len;j++)
	    {
	        if(a[i]==str[j])
	        {
	            count++;
	        }
	    }
	    if(count==0)
	    printf("%c",a[i]);
	}

	  }
	   return 0;
}
