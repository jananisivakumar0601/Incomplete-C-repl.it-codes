/*Write a function that returns the index where a character, c, occurs in a string, s. The function returns -1 if c is not present in s. Use array indexing.
your logic should work for repetitive characters in a     given string

consider every sample input and sample output for passing test cases.

Sample Input-I
Enter the String
data
Enter the character you want to search
a
The character ‘a’ found in 2 index/indices 1,3
Which index you’re targeting?
3

Sample Output-I
3
Sample Input-II
Enter the String
google cloud platform
Enter the character you want to search
o
The character ‘o’ found in 4 index/indices 1,2,9,18
Which index you’re targeting?
9

Sample Output-II
9

Sample Input-III
Enter the String
analytics
Enter the character you want to search
y 
The character ‘y’ found in 1 index/indices 4

Sample Output-III
4 */


#include <stdio.h>
#include<string.h>
#include<string.h>
int position(char,char []);
int main() {
  char a[20],c;
  int i,pos,d,m;
  printf("Enter the String\n");
  scanf("%[^\n]s",a);
  printf("Enter the character you want to search\n");
  scanf(" %c",&c);
  position(c,a);
return 0;
}
int position(char c,char a[])
{
  int i,count=0,t,flag=1,e;
  printf("The character'%c'found in ",c);
  for(i=0;i<strlen(a);i++)
  {
    if(a[i]==c)
    {
      count=count+1;
    }
  }
    printf("%d index",count);
    printf("/indices ");
  for(i=0;i<strlen(a);i++)
  {
    if(a[i]==c)
     printf("%d,",i);
     e=i-4;
  }
  if(count==1)
  {
    printf("\n%d",e);
  }
  if(count!=1)
  {
  printf("\nWhich index you're targeting?\n");
  scanf("%d",&t);
  for(i=0;i<strlen(a);i++)
  {
    if(a[i]==c)
    {
      if(i==t)
      {
      flag=1;
      }
    }
  }
  if(flag==1)
  printf("%d",t);
  }
  
  return -1;

}
