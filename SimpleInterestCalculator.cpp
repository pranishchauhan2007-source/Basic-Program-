#include<stdio.h>
#include<math.h>
int main()
{
float principal;
float rate;
float time;
float simple_interest;
printf("enter the value of principal:");
scanf("%f",&principal);
printf("enter the value of rate:");
scanf("%f",&rate);
printf("enter the value of time:");
scanf("%f",&time);
simple_interest= principal*rate*time/100;
printf(" simple_interest %f",simple_interest );
}