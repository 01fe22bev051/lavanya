#include<stdio.h>
main()
{
char ch;
int n1,n2,add,sub,mul,div;
printf("enter two numbers\m");
scanf("%d%d",&n1,&n2);
printf("enter the choice\n");
fflush(stdin);
scanf("%c",&ch);
if(ch=='+')
{
add=n1+n2;
printf("sum=%d",add);
}
else if(ch=='-')
{
 sub=n1-n2;
printf("sub=%d",sub);
}
else if(ch=='/')
{
div=n1/n2;
printf("div=%d",div);
}
else if(ch=='*')
{
mul=n1*n2;
printf("mul=%d",mul);
}
}
