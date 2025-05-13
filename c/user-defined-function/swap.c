#include <stdio.h>

void swap(int *a, int *b);     //Function declaration

int main(void)
{
    int a, b;
    printf("Enter the value of a: ");
    scanf("%d", &a);
    printf("Enter the value of b: ");
    scanf("%d", &b);
    swap(&a, &b);
    printf("The values of a and b after swapping are %d and %d, respectively.", a, b);
    return 0;
}

void swap(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}