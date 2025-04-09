#include <stdio.h>
#include <string.h>

int main(void)
{
    char name[50];
    printf("Enter your name: ");
    scanf("%[^\n]", name);
    // gets(name);
    int l = strlen(name);
    printf("The last letter of your name is %c.", name[l-1]);
    return 0;
}