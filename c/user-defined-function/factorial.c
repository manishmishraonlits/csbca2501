/*
Objective: Program to find factorial of a number using user defined function
Date: 16/04/2025
*/

#include <stdio.h>
int factorial(int n);   //Function declaration/prototype
int main(void)
{
    int n, f;
    printf("Enter a number: ");
    scanf("%d", &n);
    f = factorial(n);          //Function call
    printf("%d! = %d\n", n, f);
    return 0;
}

// Function Definition
int factorial(int n)
{
    if(n==1 || n==0)                //Base case
        return 1;

    return n * factorial(n - 1);    //Recursive case
}