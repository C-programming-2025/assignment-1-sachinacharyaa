#include <stdio.h>

int main()
{
    int num, result;

    printf("Enter a number: ");
    scanf("%d", &num);

    result = (num > 0 && num % 2 == 0);
    printf("%d\n, Here 1 means True and 0 means False", result);

    return 0;
}
