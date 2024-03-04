#include<stdio.H>
main()
{
int i,sum=0,n1,n2;
printf("enter the numbers n1,n2\n");
scanf("%d%d",&n1,&n2);
if(n1<=n2)
{
for(i=n1;i<=n2;i++)
{
if(i%2!=0)
{
sum=sum+i;
}
printf("%d",sum);
}
}
}
