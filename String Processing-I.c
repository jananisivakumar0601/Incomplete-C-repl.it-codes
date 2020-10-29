/*Write a C program to check if the string contains consecutive letters and each letter occurs exactly once. 
Get the sequence of alphabets through console

be specific with the output format, refer all the Sample  Inputs and Sample Outputs for more clarity
Sample Input-I
Input the string
xyz

Sample Output-I
The string 'x','y','z' which are consecutive letters
All the letters occurs exactly once
Sample Input-II
Input the string
fced
Sample Output-II
The string 'c','d','e','f' which are consecutive letters
All the letters occurs exactly once
Sample Input-III
Input the string
car
Sample Output-III
The string 'c','a','r' which are not consecutive letters
All the letters occurs exactly once
Sample Input-IV
Input the string
aba
Sample Output-IV
The string 'a','b','a' which are not consecutive letters
letter 'a' occurs 2 time(s)
*/

#include<stdio.h>
#include<string.h>
int main()
{
	char s[20],b[20];
	int i,j,temp,flag=0,count=1,r=0 ;
	printf("Input the string\n");
	scanf("%s",s);
strcpy(b,s);
		for(i=0;s[i]!='\0';i++)
	for(i=0;s[i]!='\0';i++)
	{
		for(j=i+1;s[j]!='\0';j++)
		{
			if(s[i]>s[j])
			{
			  
           temp=s[i];
           s[i]=s[j];
           s[j]=temp;
        
          }
      }
   }
   
for(i=0;i<strlen(s)-2;i++)
{
	for(j=i+1;j<strlen(s)-1;j++)
	{
		if(s[i]-s[j]==-1||s[i]-s[j]==1)
			{
				flag=1;
			}
	}
}printf("The string");
if(flag==1)
{
for(i=0;s[i]!='\0';i++)
printf("'%c',",s[i]);
}
else
{
	for(i=0;s[i]!='\0';i++)
	printf("'%c',",b[i]);
}
if(flag==1)
{
  printf("which are consecutive letters");
}
else
{
  printf("which are not consecutive letters");
}

for(i=0;s[i]!='\0';i++)
	{
		for(j=i+1;s[j]!='\0';j++)
		{
			if(s[i]==s[j])
			{
             count=count+1;
           
      
          }
      }
   }

if(count==1)
{
	printf("\nAll the letters occurs exactly once");
}
else
{
  for(i=0;s[i]!='\0';i++){
	printf("\nletter %c occurs %d times",s[i],count);
	break;
  }
}
return 0;
}
 
