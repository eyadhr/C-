#include <stdio.h>
float func6(int a, int b, int c)
{
    float m;
    m = (float)(a + b + c) / 3; // 8/3 = 2.666666
    return (m);
}
int main()
{
    int x1, x2, x3;
    float res;
    scanf("%d %d %d", &x1, &x2, &x3); // 1,3,4
    res = func6(x1, x2, x3);
    printf("%f", res); // 2.666667
}

// 2.666667
// מחשב את ממוצע 3 מיספרים