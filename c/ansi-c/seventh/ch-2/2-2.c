#include <stdio.h>

int main(void)
{
    float pr, pp;
    printf("Enter price in rupees: ");
    scanf("%f", &pr);
    pp = pr * 100.0F;
    printf("Price in paisa is %1.0f.", pp);
    return 0;
}