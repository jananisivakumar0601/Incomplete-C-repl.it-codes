/*Write a C program to checks if a string is a palindrome by ignoring all white spaces.
get the input string through the console

Sample Input-I
Enter the String
level

Sample Output-I
The entered string is a palindrome string

Sample Input-II
Enter the String
i ia wah hawaii

Sample Output-II
The entered string is a palindrome string

Sample Input-III
Enter the String
outstanding

Sample Output-III
The entered string is not a palindrome string  */


#include<stdio.h>
#include<string.h>
int main()
{
	char str[80];
	int i=0, len, j,flag=0;
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
	for(i=0;i<len;i++)
  {
    if(str[i]!=str[len-i-1])
    {
      flag=1;
    break;
    }
  }
    if(flag==0)
    {
      printf("The entered string is a palindrome string");
    }
    else
    {
      printf(" The entered string is not a palindrome string");
    }
  return 0;
}

