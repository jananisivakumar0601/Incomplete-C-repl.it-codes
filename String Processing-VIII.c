/*Write a C program to make a palindromic string non-palindromic by rearranging its letters.
Get a char array from the user

print the string after rearranging some characters such   that the string becomes non-palindromic, if it’s impossible then print -1

Sample Input-I
Enter the string
anna

Sample Output-I
aann

Sample Input-II
Enter the string
aaa

Sample Output-II
-1
*/


#include<stdio.h>
#include<string.h>
void palindrome(char[]);
int main()
{
	char s[30];
	printf("Enter the string\n");
	scanf("%s",s);
	palindrome(s);
	return 0;
	}
	void palindrome(char s[])
	{
		int i,j,temp,flag=1;
		int l=strlen(s);

	for(i=0;i<strlen(s);i++)
	{
		for(j=i+1;j<strlen(s);j++)
		{
			if(s[i]>s[j])
			{
			temp=s[i];
			s[i]=s[j];
			s[j]=temp;
		}
	}
}

for(i=0;i<l;i++)
	{
		if(s[i]!=s[l-i-1]){

			printf("%c",s[i]);
			}
			else{
				printf("-1");
				break;
			}
   }
   
}
