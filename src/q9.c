
#include <stdio.h>

int main()
{
    int num, weeks, remaining_days;

    printf("Enter a number of days: ");
    scanf("%d", &num);

    weeks = num / 7;
    remaining_days = num % 7;

    printf("%d week(s) and %d day(s)\n", weeks, remaining_days);

    return 0;
}
