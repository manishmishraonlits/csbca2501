#include <stdio.h>
int main(void)
{
    char name[50];
    printf("Enter your name: ");
    scanf("%s", name);
    printf("The first letter of your name is %c.", name[0]);
    return 0;
}