/*Write a C program to print the frequency of letters in a String using run-length encoding.

Run-length encoding(RLE) is a very simple form of lossless data compression in which runs of data

infer the sample inputs and sample outputs throughly

Sample Input-I
Enter the input string
wwwwaaadexxxxxx

Sample Output-I
RLE result is 4w3a1d1e6x

Sample Input-II
Enter the input string
aaaabbcccccddf

Sample Output-II
RLE result is 4a2b5c2d1f  */


#include<stdio.h>
#include<string.h>
int main()
{
	char s[20];
	int i,j,count;
	printf("Enter the input string\n");
	scanf("%[^\n]s",s);
	printf("RLE result is ");
	for(i=0;i<strlen(s);i++)
	{
		count=1;
		if(s[i-1]!=s[i])
		{
	for(j=i+1;j<strlen(s);j++)
	{
		if(s[i]==s[j])
	count=count+1;
	}
	}
	if(s[i-1]!=s[i])
	printf("%d%c",count,s[i]);
	
	}
	return 0;
}
