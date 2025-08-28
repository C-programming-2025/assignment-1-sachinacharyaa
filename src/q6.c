
#include <stdio.h>

int main()
{

    int num1, num2, rectangle;

    printf("Enter a length: ");
    scanf("%d", &num1);

    printf("Enter a width: ");
    scanf("%d", &num2);

    rectangle = (num1 * num2);
    printf("The area of rectangle is %d", rectangle);

    return 0;
}