/*Write a C program to move all the special characters to end of the string.

get the input string from the user through console

Give the consideration for following special characters
~,!,@,#,$,%,^,&,*,?

Sample Input-I
Enter the input string
H##!~e?*%&l~lo A!~?s?%@pi~$r&$$a??n#t~s!

Sample Output-I
The final output is 
Hello Aspirants##!~?*%&~!~??%@~$&$$??#~!

Sample Input-II
Enter the input string
T@e!c&&h@i*e N?e@r##d~~s&

Sample Output-II
The final output is
Techie Nerds@!&&@*?@##~~&*/





#include <stdio.h>
 #include <string.h> 
 int main() 
 { 
	char s[40],temp,a[40],b[30];
	int i,j,k,e;
	int l=strlen(s);
	printf("Enter the input string\n");
	scanf("%[^\n]s",s);
	k=0;
	printf("The final output is\n");
	for(i=0;i<strlen(s);i++)
	{
		if(s[i]=='&'||s[i]=='#'||s[i]=='~'||s[i]=='!'||s[i]=='@'||s[i]=='$'||s[i]=='%'||s[i]=='^'||s[i]=='*'||s[i]=='?')
		{
 	  
 	  a[k]=s[i];
 	  k++;
 	  }
 	  }
 	  e=0;
 	  for(i=0;i<strlen(s);i++)
	{
		if(s[i]!='&'&&s[i]!='#'&&s[i]!='~'&&s[i]!='!'&&s[i]!='@'&&s[i]!='$'&&s[i]!='%'&&s[i]!='^'&&s[i]!='*'&&s[i]!='?')
		{
 	  
 	  b[e]=s[i];
 	  e++;
 	  }
 	  
 	  }
strcat(b,a);
printf("%s",b);

 	   return 0; 
 	   }





