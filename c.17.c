#include<stdio.h>
main()
{
int reverse(int n);
int n,rev;
printf("enter a number\n");
scanf("%d",&n);
rev=reverse(n);
printf("reverse a number=%d",rev);
}
int reverse(int n)
{
int dig,s=0,t=n;
while(n!=0)
{
dig=n%10;
s=s*10+dig;
n=n/10;
}
return(s);
}
