#include <stdio.h>
#include "main.h"
#define LEAP_YEAR 366
#define FULL_YEAR 365
#define JAN_DAYS 31

/**
 * print_remaining_days - takes a date and prints how many days are
 * left in the year, taking leap years into considerations
 * @month: month in number format
 * @day: day of month
 * @year: year
 *
 * Return: void
 */

void print_remaining_days(int month, int day, int year)
{
	if ((!(year % 100 == 0) || year % 400 == 0)
			&& year % 4 == 0)
	{
		if (month > 2 && day >= 60)
			day++;
		printf("Day of the year: %d\n", day);
		printf("Remaining days: %d\n", LEAP_YEAR - day);
	}
	else
	{
		if (month == 2 && day == 60)
			printf("Invalid date: %02d/%02d/%04d\n",
					month, day - JAN_DAYS, year);
		else
		{
			printf("Day of the year: %d\n", day);
			printf("Remaining days: %d\n", FULL_YEAR - day);
		}
	}
}
