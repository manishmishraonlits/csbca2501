#include <stdio.h>
#include <string.h>

int main(void)
{
    char name[50];
    printf("Enter your name: ");
    scanf("%[^\n]", name);
    int l = strlen(name);
    printf("Your name has %d letters.", l);
    return 0;
}