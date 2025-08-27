// W.A.P to convert numbers of days to years, months and days.
#include <stdio.h>
int main () {
    int days, years, months, remaining_days;
    printf("Enter number of days\n");
    scanf("%d", &days);
    years = days / 360;
    remaining_days = days % 360;            
    months = remaining_days / 30;           
    remaining_days = remaining_days % 30;   
    printf("%d days is equivalent to %d years, %d months and %d days\n", days, years, months, remaining_days);
    return 0;
}