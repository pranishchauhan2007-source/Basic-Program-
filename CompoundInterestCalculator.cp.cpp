#include<stdio.h>
#include<math.h>
int main()
{
float principal;
float rate;
int time;
float compound_interest;
printf("enter the value of principal:");
scanf("%f",&principal);
printf("enter the value of rate:");
scanf("%f",&rate);
printf("enter the value of time:");
scanf("%d",&time);
compound_interest= principal*(1+rate/100),time-principal;
printf(" compound_interest %f",compound_interest );
}