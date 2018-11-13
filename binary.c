#include<stdio.h>
#include<math.h>
void main()
{
int dec=0,bin,i=0,a;
printf("enter a binary number:");
scanf("%d",&bin);
while(bin!=0)
{
a=bin%10;
dec=dec+(a*pow(2,i));
i++;
bin/=10;
}
printf("%d",dec);
}


