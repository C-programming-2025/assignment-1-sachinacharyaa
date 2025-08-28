
#include <stdio.h>

int main()
{

    char a, b, c;
    char greater;

    printf("Enter char a value:");
    scanf(" %c", &a);

    printf("Enter char b value:");
    scanf(" %c", &b);

    printf("Enter char c value:");
    scanf(" %c", &c);

    greater = (a > b) && (c != 0);
    printf("%d\n", greater);

    return 0;
}