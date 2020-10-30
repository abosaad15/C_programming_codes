#include <stdio.h>
#include <string.h>


static char daytab[2][13] = {
  {0,31,28,31,30,31,30,31,31,30,31,30,31},
  {0,31,29,31,30,31,30,31,31,30,31,30,31}
};

/* day of year: set day of year from month & day */
int day_of_year(int year, int month, int day)
{
  int i, leap;

  leap = ((year%4 == 0) && (year%100 != 0)) || (year%400 == 0);
  for (i = 1; i < month; i++)
    day += daytab[leap][i];
  return day;
}

/* month day: set month, day from day of year */
void month_day(int year, int yearday, int *pmonth, int *pday)
{
  int i, leap;

  leap = ((year%4 == 0) && (year%100 != 0)) || (year%400 == 0);
  for (i = 1; yearday > daytab[leap][i]; i++)
    yearday -= daytab[leap][i];
  *pmonth = i;
  *pday = yearday;
}

int main()
{
  int selection;
  int day, month, year, yearday;

  printf("Choose the operation you would like\n1- convert to day of year\n2- convert to day of month\n");
  scanf("%d",&selection);

  if (selection == 1) {
    printf("Enter the year: ");
    scanf("%d", &year);
    printf("Enter the month: ");
    scanf("%d", &month);
    printf("Enter the day: ");
    scanf("%d", &day);
    printf("day of year: %d\n", day_of_year(year,month,day));
  }
  else {
    printf("Enter the year: ");
    scanf("%d", &year);
    printf("Enter the yearday: ");
    scanf("%d", &yearday);
    month_day(year,yearday,&month, &day);
    printf("Day: %d\nMonth: %d\n",day, month);
  }
}
