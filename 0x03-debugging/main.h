#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>

void positive_or_negative(int i)
{if (i > 0)
printf("%d is positive\n", i);
else if (i < 0)
printf("%d is negative\n", i);
else if (i == 0)
printf("%d is zero\n", i); }
int largest_number(int a, int b, int c)
{int largest;
if (a > b && b > c)
{
largest = a;
}
else if (b > a && a > c)
{
largest = b;
}
else if (c > a && a > b)
{
largest = c;
}
else if (c > b && b > a)
{
largest = c;
}
else if (a > c && c > b)
{
largest = a;
}
else if (b > c && c > a)
{
largest = b;
}
return (largest);
}
int convert_day(int month, int day);
void print_remaining_days(int month, int day, int year);

#endif /* MAIN_H */
