#include <stdio.h>

int main(void)
{
    float p, r, t, si;
    printf("Enter principal: ");
    scanf("%f", &p);
    printf("Enter interest rate: ");
    scanf("%f", &r);
    printf("Enter time: ");
    scanf("%f", &t);
    si = (p * r * t)/100.0F;
    printf("Simple Interest: %1.2f", si);
    return 0;
}