#include <stdio.h>
#define SIZE 10
int main(void)
{
    int nums[] = {96, 9, 65, 15, 33, 22, 89, 72, 11, 46};

    for (int i = 0; i < SIZE - 1; i++)
    {
        for (int j = i + 1; j < SIZE; j++)
        {
            if (nums[i] > nums[j])
            {
                int t = nums[i];
                nums[i] = nums[j];
                nums[j] = t;
            }
        }
    }

    printf("The sorted array is:\n");
    for (int i = 0; i < SIZE; i++)
    {
        printf("%d\n", nums[i]);
    }
    return 0;
}