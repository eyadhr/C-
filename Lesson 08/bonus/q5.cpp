#include <stdio.h>
int func5(int x, int y)
{
    int z;
    z = x + y;//5+8 = 13
    return (z); //13
}
int main()
{
    int a = 5, b = 8, c;
    c = func5(a, b);//5,b = 13
    printf("%d", c);
}
// 13
// a+b