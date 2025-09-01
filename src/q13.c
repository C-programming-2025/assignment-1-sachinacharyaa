#include <stdio.h>

int main()
{
    int num, result;

    printf("Enter a value: ");
    scanf("%d", &num);

    result = ((num / 3 * 3) == num) && ((num / 2 * 2) == num);
    printf("%d\n", result);

    return 0;
}
