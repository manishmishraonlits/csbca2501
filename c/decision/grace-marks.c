#include <stdio.h>
int main(void)
{
    int marks;
    printf("Enter marks: ");
    scanf("%d", &marks);
    if(marks < 40)
    {
        marks = marks + 5;
    }
    printf("Marks: %d", marks);
    return 0;
}