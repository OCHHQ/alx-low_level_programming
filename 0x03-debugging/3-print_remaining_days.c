#include "main.h"

/**
 * print_remaining days - take a date and prints how many days are
 * left in the year,taking leap years into account
 * @month: month in number format
 * @day: dayof the month
 * @year: year
 * Return: void
 */

void print_remaining_days(int month, int day, int year)
{
if ((year % 400 == 0) || (year % 4 == 0 && 100 != 0))
{
day++;
}

printf("Day of the year: %d\n", day);
printf("Remaining days: %d\n", 366 - day);
}
else
{
if (month == 2 && day == 60)
{
print("invaid date: %02d/%02d/%04d\n", month, day - 31, year);
}
else
{
printf("day of the year: %d\n", day);
printf("Remaining days: %d\n", 365 - days);
}
}
}
