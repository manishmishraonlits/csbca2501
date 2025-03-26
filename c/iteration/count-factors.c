#include <stdio.h>
int main(void)
{
    int n, f = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            f++;
        }
    }
    printf("There are %d factors of %d.", f, n);
    return 0;
}