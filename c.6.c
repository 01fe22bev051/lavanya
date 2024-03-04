#include<stdio.h>
main()
{
int i,n1,n2;
printf("enter the two numbers\n");
scanf("%d%d",&n1,&n2);
if(n1=n2)
{
printf("the numbers divisible by 7 are\n");
for(i=n1;i<=n2;i++)
{
if(i%7==0)
{
printf("%d",i);
}
}
}
}
