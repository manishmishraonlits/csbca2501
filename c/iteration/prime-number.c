#include <stdio.h>
int main(void)
{
    int n, flag = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n == 2)
    {
        printf("Prime Number");
        return 0;
    }

    if(n % 2 == 0)
    {
        printf("Not a prime number");
        return 0;
    }
    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
            flag = 1;
            break;
    }

    if (flag == 0)
        printf("Prime Number");
    else
        printf("Not a Prime Number");

    return 0;
}