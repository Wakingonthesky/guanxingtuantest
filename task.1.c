#include <stdio.h>
int main ()
{
    int year = 0;
    printf ("year : ");
    scanf ("%d", &year);
    leap_year(year);
    return 0; 
}
void leap_year(int year)
{
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 = 0)
    {
        printf (" %d is leap year", year);
    }
    else
    {
        printf ("%d is not leap year", year);
    }
}