#include<stdio.h>
void main()
{int n;
 printf("enter ANY number:");
scanf("%d",&n);
if(n>0)
printf("%d is postive",n);
else if(n<0)
printf("%d is negative",n);
else
printf("%d is zero",n);
}