#include <stdio.h>
int main(void)
{
    int marks;
    printf("Enter marks: ");
    scanf("%d", &marks);
    if (marks > 100)
    {
        printf("Invalid");
    }
    else
    {
        if (marks >= 80)
        {
            printf("Grade A");
        }
        else
        {
            if (marks >= 60)
            {
                printf("Grade B");
            }
            else
            {
                if (marks >= 40)
                {
                    printf("Grade C");
                }
                else
                {
                    if (marks >= 0)
                    {
                        printf("Grade D");
                    }
                    else
                    {
                        printf("Invalid");
                    }
                }
            }
        }
    }
    return 0;
}