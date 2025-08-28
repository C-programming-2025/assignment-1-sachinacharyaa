
#include <stdio.h>

int main()
{
    char ch;
    int result;

    printf("Enter a char: ");
    scanf("%c", &ch);

    result = (ch >= 'A' && ch <= 'Z');

    printf("%d\n", result);

    return 0;
}
