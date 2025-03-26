#include <stdio.h>
int main(void)
{
    int a, b, c;
    printf("Enter three integers:\n");
    scanf("%d%d%d", &a, &b, &c);
    if (a < b && b < c)
        printf("%d, %d, %d.", a, b, c);
    else if (a < c && c < b)
        printf("%d, %d, %d.", a, c, b);
    else if (b < a && a < c)
        printf("%d, %d, %d.", b, a, c);
    else if (b < c && c < a)
        printf("%d, %d, %d.", b, c, a);
    else if (c < a && a < b)
        printf("%d, %d, %d.", c, a, b);
    else if (c < b && b < a)
        printf("%d, %d, %d.", c, b, a);
    return 0;
}