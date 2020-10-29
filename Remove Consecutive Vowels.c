/*Write a C program to remove consecutive vowels from a given string.

Given a string s of lowercase letters, we need to remove consecutive vowels from the string.

Final output should not contain two consecutive vowels.

get the input string through console.

Sample Input-I
Enter the string
your article is in the queue

Sample Output-I
yor article is in the qu

Sample Input-II
Enter the string
i am very serious about my career

Sample Output-II
i am very seris abot my carer

Sample Input-III
Enter the string
welcome to 100 days of coding challenge

Sample Output-III
welcome to 100 days of coding challenge*/




#include<stdio.h>
#include<string.h>
int main()
{
    char str[30];
    int i,j,k;
    printf("Enter the string\n");
    scanf("%[^\n]s",str);
    for(i=0;i<strlen(str);i++)
    {
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
        for(j=i+1;j<=i+1;j++)
        {
            if(str[j]=='a'||str[j]=='e'||str[j]=='i'||str[j]=='o'||str[j]=='u')
            {
            for(k=i;k<strlen(str);k++)
            {
                str[k+1]=str[k+2];
            
            }
            } 
        }
    }
     for(i=0;i<strlen(str);i++)
    {
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
        for(j=i+1;j<=i+1;j++)
        {
            if(str[j]=='a'||str[j]=='e'||str[j]=='i'||str[j]=='o'||str[j]=='u')
            {
            for(k=i;k<strlen(str);k++)
            {
                str[k+1]=str[k+2];
            
            }
            } 
        }
    }
    for(i=0;i<strlen(str);i++)
    printf("%c",str[i]);
    
return 0;
}
