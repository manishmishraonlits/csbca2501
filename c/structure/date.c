#include <stdio.h>

struct date {
    int day;
    int month;
    int year;
};

void read(struct date *d);
void display(struct date d);

int main(void)
{
    struct date d;
    read(&d);
    display(d);
    return 0;
}

void read(struct date *d)
{
    printf("Enter day: ");
    scanf("%d", &d->day);
    printf("Enter month: ");
    scanf("%d", &d->month);
    printf("Enter year: ");
    scanf("%d", &d->year);

}

void display(struct date d)
{
    printf("Entered date is %d-%d-%d", d.day, d.month, d.year);
}