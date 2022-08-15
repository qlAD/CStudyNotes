#include <stdio.h>

#define LENGTH 10
#define WIDTH 5

int main()
{
    int area;
    area = LENGTH * WIDTH;

    const x = 10;
    const y = 5;
    int perimeter;
    perimeter = 2 * (x + y);
    printf("The vaule of area is: %d\n", area);
    printf("The vaule of perimeter is: %d\n", perimeter);
    return 0;
}