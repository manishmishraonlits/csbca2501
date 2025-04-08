#include <stdio.h>
#define SIZE 10

int main(void)
{
    int n, sum = 0, avg;
    printf("Enter %d integers:\n", SIZE);
    for (int i = 1; i <= SIZE; i++)
    {
        scanf("%d", &n);
        sum = sum + n;
    }
    avg = sum/SIZE;
    printf("The average of ");
    for (int i = 1; i <= SIZE; i++)
    {
        printf("%d, ", n);
    }
    printf(" is %d.", avg);
    return 0;
}