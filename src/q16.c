#include <stdio.h>

int main()
{

    float x, y, result;

    printf("Enter the value of x: ");
    scanf(" %f", &x);

    printf("Enter the value of y: ");
    scanf(" %f", &y);

    result = ((x + y) / 2);
    printf("%f", result);
    return 0;
}