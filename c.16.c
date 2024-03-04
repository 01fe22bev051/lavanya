#include<stdio.h>
main()
{
float p,t,r,total_amount,SI;
printf("enter the values of p,t,r\n");
scanf("%f%f%f",&p,&t,&r);
SI=p*t*r/100;
total_amount=p+SI;
printf("total_amount=%f\n",total_amount);
}
