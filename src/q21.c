
#include <stdio.h>

int main()
{
    int x, y, z, temp;

    printf("Enter first number (x): ");
    scanf("%d", &x);

    printf("Enter second number (y): ");
    scanf("%d", &y);

    printf("Enter third number (z): ");
    scanf("%d", &z);

    temp = x;
    x = y;
    y = z;
    z = temp;

    printf("After swapping: x = %d ,y = %d and z=%d \n", x, y, z);

    return 0;
}
