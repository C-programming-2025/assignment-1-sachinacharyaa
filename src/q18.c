

#include <stdio.h>

int main()
{

    int num1, num2, num3, sum;
    int square1, square2, square3;

    printf("Enter number1: ");
    scanf("%d", &num1);

    printf("Enter number2: ");
    scanf("%d", &num2);

    printf("Enter number3: ");
    scanf("%d", &num3);

    sum = (num1) * (num1) + (num2) * (num2) + (num3) * (num3);
    printf(" The sqaure of %d %d  %d is : %d\n", num1, num2, num3, sum);
    return 0;
}