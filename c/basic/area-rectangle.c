/*
PROGRAM TO READ LENGTH & BREADTH OF RECTANGLE
AND FIND ITS AREA

DATE: 20250304
*/
#include <stdio.h>

int main(void)
{ 
    float l, b, a;
    printf("Enter length: ");
    scanf("%f", &l);
    printf("Enter breadth: ");
    scanf("%f", &b);
    a = l * b;
    printf("Area is %1.2f sq. units.", a);
    return 0;
}