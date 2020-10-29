/*Write a C program to print the frequency of letters in a String using run-length encoding.

Run-length encoding (RLE) is a very simple form of      lossless data compression in which runs of data

Make sure your logic should work for both uppercase and lowercase letters

infer the sample inputs and sample outputs throughly

Sample Input-I
Enter the input string
AAaaBBcccdeEFfGGhh

Sample Output-I
RLE result is 2A2a2B3c1d1e1E1F1f2G2h

Sample Input-II
Enter the input string
iiIIjKkLLmmMSsSZzZZ

Sample Output-II
RLE result is 2i2I1j1K1k2L2m1M1S1s1S1Z1z2Z  */



#include<stdio.h>
#include<string.h>
int main(){
char s[20];
int i,j,count;
printf("Enter the input string\n");
scanf("%s",s);
printf("RLE result is\n");
	for(i=0;i<strlen(s);i++)
	{
		if(s[i-1]!=s[i]){
		count=1;
		for(j=i+1;j<strlen(s);j++)
		{
			if(s[i]==s[j])
			{
				count++;
	
			}
			if(s[j+1]==s[j]&&s[i]==s[j])
			count++;
			break;
		}
		if(s[i-1]!=s[i])
		printf("%d%c",count,s[i]);
		}
	}
return 0;
	
}
