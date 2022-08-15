#include <stdio.h>
int x;
int y;
int addtwonum()
{
    extern x;
    extern y;
    printf("Please give x an integer value: ");
    scanf("%d", &x);
    printf("Please give y an integer value: ");
    scanf("%d", &y);
    return x + y;
}

int main()
{
    int result;
    result = addtwonum();
    printf("The result of the sum of x and y is: %d\n", result);
    return 0;
}