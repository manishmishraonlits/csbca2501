#include <stdio.h>
int main(void)
{
    int n, f = 1;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (int i = n; i >= 1; i--)
    {
        f = f * i;
    }
    printf("%d! = %d", n, f);
    return 0;
}