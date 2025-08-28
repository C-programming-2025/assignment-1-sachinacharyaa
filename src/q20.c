
#include <stdio.h>

int main()
{

    int num, result;

    printf("Enter the value of x: ");
    scanf(" %d", &num);

    result = ((num % 3 == 0) && (num % 5 == 0));
    printf("%d", result);
    return 0;
}