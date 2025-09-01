
#include <stdio.h>

int main()
{

    int num, result;

    printf("Enter char a value:");
    scanf(" %c", num);

    result = ((num / 3 * 3) == num) && ((num / 2 * 2) == num);
    printf("%d\n", result);

    return 0;
}