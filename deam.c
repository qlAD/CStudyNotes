#include <stdio.h>
int main()
{
    int x = 2;
    int y;
    y = x++;
    printf("%d\n", y);
    y = ++x;
    printf("%d\n", y);

    return 0;
}