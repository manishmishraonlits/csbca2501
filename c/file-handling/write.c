#include <stdio.h>

int main(void)
{
    FILE *fp;
    char c;
    fopen("sometext.txt", "w");
    printf("Type something below:\n");
    while((c = getchar()) != EOF)
    {
        putc(c, fp);
    }
    fclose(fp);
    printf("Writing finished!");
    return 0;
}