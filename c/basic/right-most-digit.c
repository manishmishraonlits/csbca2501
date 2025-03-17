/*
Program to read an integer and display its rightmost digit
*/
#include <stdio.h>

int main(void)
{
    int n, d;
    printf("Enter a number: ");
    scanf("%d", &n);
    d = n % 10;
    printf("The rightmost digit is %d.", d);
    return 0;
}