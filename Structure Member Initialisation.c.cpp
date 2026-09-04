#include<stdio.h>
struct Date{
int d;
int m;
int y;
};
int main(){
struct Date d1={27,9,2022};
printf("Date:%d/%d/%d\n",d1.d,d1.m,d1.y);
return 0;
}