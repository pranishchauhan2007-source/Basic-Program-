#include<stdio.h>

int main()
{
    int N, i;

    printf("Enter the value of N: ");
    scanf("%d", &N);

    for(i = 1; i <= 2*N-1; i = i + 2)
    {
        printf("%d\n", i);
    }

    return 0;
}