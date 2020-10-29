/*Write a C program to capitalise the first and last letter of each word in an input line.
consider you’re getting an input in lower case

for two letter word, both needs to be capitalized 

Sample Input-I
Enter the string
congratulations to all

Sample Output-I
CongratulationS TO AlL

Sample Input-II
Enter the string
hello all,hope things are going well

Sample Output-II
HellO AlL,HopE ThingS ArE GoinG WelL */


#include <stdio.h>
#include<string.h>
#include<ctype.h>

int main(void) {
  char str[20];
  int i,length;
  printf("Enter the string\n");
  scanf("%[^\n]s",str);
  length=strlen(str);
  for(i=0;i<length;i++)
  {
    if(i==0||i==length-1)
    {
      str[i]=toupper(str[i]);
    }
    if(str[i]==' ')
    {
      str[i+1]=toupper(str[i+1]);
      str[i-1]=toupper(str[i-1]);
    }
  }
for(i=0;i<length;i++)
{
  printf("%c",str[i]);
  
}
  
  return 0;
}
