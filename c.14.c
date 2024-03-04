#include<stdio.h>
main()
{
int x,y;

printf("\n enter the values of x and y");
scanf("%d%d",&x,&y);
printf("values before swapping\n");
printf("x=%d\ny=%d\n",x,y);
x=x+y;
y=x-y;
x=x-y;

printf("the value after swapping x and y\n");
printf("x=%d\ny=%d\n",x,y);
}
