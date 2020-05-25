#include <stdio.h>

int main()
{

    x = 10;
    y = 3;
    
    do
    {
        y *= 2;
    j = y / x;
    i = y % x;
    } while (j < i);
    printf("y = %d \n", y); //6

    int x = 5;
    int y = 3;
    do
        x += 2;
    while (x % y);
    printf("x = %d \n", x); //9

}