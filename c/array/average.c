#include <stdio.h>
#define SIZE 10

int main(void)
{
    int n[SIZE], sum = 0, avg;
    printf("Enter %d integers:\n", SIZE);
    for (int i = 0; i < SIZE; i++)
    {
        scanf("%d", &n[i]);
        sum = sum + n[i];
    }
    avg = sum/SIZE;
    printf("The average of ");
    for (int i = 0; i < SIZE; i++)
    {
        printf("%d, ", n[i]);
    }
    printf(" is %d.", avg);
    return 0;
}