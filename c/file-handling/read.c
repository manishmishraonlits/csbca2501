#include <stdio.h>

int main(void)
{
    FILE *fp;
    char c;
    fp = fopen("sometext.txt", "r");
    if (fp == NULL)
    {
        printf("File not found!");
        return 1;
    }
    while((c = getc(fp)) != EOF)
    {
        put(c);
    }
    fclose(fp);
    printf("Reading finished!");
    return 0;
}