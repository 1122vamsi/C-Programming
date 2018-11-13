#include<stdio.h>
#include<string.h>
void main()
{
char str1[100],str2[100];
int i,a,j;
printf("enter the first string:");
gets(str1);
a=strlen(str1);
for(i=0;i<a;i++)
str1[i]==str2[i];
str2[a]='\0';
puts(str2);
}

