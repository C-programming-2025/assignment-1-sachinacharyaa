
#include <stdio.h>

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("%d\n", (num > 0) && ((num & (num - 1)) == 0));

    return 0;
}
