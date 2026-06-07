#include<stdio.h>
int main() {
    int a ,b,c ;
    float average;
    printf("Enter the three numbers  : ");
    scanf("%d %d %d",&a,&b,&c);
    average=(a+b+c)/3;
    printf("average value  %f",average ) ;
    return 0;
}