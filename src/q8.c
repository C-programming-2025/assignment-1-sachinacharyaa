

#include <stdio.h>

int main()
{
    int far, celsius;

    printf("Enter a temperature in celsius: ");
    scanf("%d", &celsius);

    far = (celsius * 9 / 5) + 32;
    printf(" The fahrenheit is %d", far);

    return 0;
}