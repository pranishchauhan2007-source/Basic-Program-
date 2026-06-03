#include <stdio.h>
int main()
{
    int n, x = 0, k;
    int count = 0, lock = 1;
    printf("Enter a number: ");
    scanf("%d", &n);
    while (n > 0)
    {
        k = n % 10;
        if (k == 0 && lock == 1)
            count++;
        else
            lock = 0;
        x = x * 10 + k;
        n = n / 10;
    }
    printf("%d", x);
    while (count > 0)
    {
        printf("0");
        count--;
    }
    return 0;
}