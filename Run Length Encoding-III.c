/*Write a C program to print the frequency of letters and numbers in a String using run-length encoding.

Run-length encoding (RLE) is a very simple form of      lossless data compression in which runs of data

Make sure your logic should work for both uppercase,    lowercase letters and digits

infer the sample inputs and sample outputs throughly

limit the number sequences to 5

Sample Input-I
Enter the input string
rrtasdd1122233eerAAQKL34

Sample Output-I
RLE result is 2r1t1a1s2dtwo1three2two32e1r2A1Q1K1Lone3one4

Sample Input-II
Enter the input string
11111uuKkkllMM2229999awWE

Sample Output-II
RLE result is five12u1K2k2l2Mthree2four91a1w1W1E  */



#include<stdio.h>
#include<string.h>
int main()
{
	char s[20];
	int i,j,count;
	printf("Enter the input string\n");
	scanf("%[^\n]s",s);
	printf("RLE result is\n");
	for(i=0;i<strlen(s);i++)
	{
		count=1;
		for(j=i+1;j<strlen(s);j++)
		{
			if(s[i]==s[j])
			{
				if((i-j)==1||(i-j)==-1||s[j-1]=='0')
				{
					count++;
					s[j]='0';
				}
			}
		}
		if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z'))
		{
		if(s[i]!='0')
		printf("%d%c",count,s[i]);
		}
		else
		{
			if(s[i]!='0')
			switch(count)
			{
				case 1:
				printf("one");
				break;
				case 2:
				printf("two");
				break;
				case 3:
				printf("three");
				break;
				case 4:
				printf("four");
				break;
				case 5:
				printf("five");
				break;
				
			}
			if(s[i]!='0')
			printf("%c",s[i]);
		}
	}
	return 0;
}
