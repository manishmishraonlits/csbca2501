#include <stdio.h>

int main(void)
{
    int i = 1;
    do
    {
        printf("%d. C was developed by Dennis Ritche in 1972.\n", i);
        i++;
    } while (i <= 5); // Exit controlled
    return 0;
}