#include<stdio.h>
void main()
{
int dec,bin[10],count=0,i=0,a;
printf("enter a decimal number:");
scanf("%d",&dec);
while(dec>0)
{
a=dec%2;
bin[i]=a;
dec/=2;
i++;
count++;
}
for(i=count-1;i>=0;i--)
printf("%d",bin[i]);
}
