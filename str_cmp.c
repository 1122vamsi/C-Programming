#include<stdio.h>
#include<string.h>
void main()
{
char str1[100],str2[100];
int i,a,b,c,count=0;
printf("enter the first string:");
gets(str1);
printf("enter the second string:");
gets(str2);
a=strlen(str1);
b=strlen(str2);
if(a<b)
c=b;
else
c=a;
for(i=0;i<c;i++)
{
if(str1[i]==str2[i])
count++;
else if(str1[i]!=str2[i])
{
printf("the strings are equal upto %d position",count);
break;
}
if(i==c-1&&str1[i]==str2[i])
printf("strings are equal");
}
}
