#include <stdio.h>
int main()
{
    int x;
    int y;
    printf("Please give x an integer value: ");
    scanf("%d", &x);
    printf("Please give y an integer value: ");
    scanf("%d", &y);

    (x % 2 == 0) ? printf("X is even.\n") : printf("X is odd.\n");
    (y % 2 == 0) ? printf("Y is even.\n") : printf("Y is odd.\n");

    printf("x + y = %d\n", x + y);
    printf("x - y = %d\n", x - y);
    printf("x * y = %d\n", x * y);
    printf("x / y = %d\n", x / y);
    printf("x % y = %d\n", x % y);

    // i++ 先赋值后运算（运算结果不赋值） , --i（先运算后赋值）
    /*

    x = 2;
    x ++ = 2
    ++ x = 4

    */
    printf("x ++ = %d\n", x++);
    printf("++ x = %d\n", ++x);
    printf("x -- = %d\n", x--);
    printf("-- x = %d\n", --x);

    return 0;
}