#include <stdio.h>

int sum_AB(int x,int y);
int mul_AB(int x, int y);

int main()
{
    int a,b;
    scanf("%d %d",&a,&b);

    printf("sum_AB %d\n", sum_AB(a, b));
    printf("mul_AB %d", mul_AB(a, b));
}

int sum_AB(int x, int y)
{
    int sum=x+y;
    return sum;
}

int mul_AB(int x, int y)
{
    int sum = x * y;
    return sum;
}
