#include <stdio.h>

int fibonacci(int num);

int main()
{
    int num;
    scanf("%d", &num);
    printf("fibonacci(num %d) : %d", num, fibonacci(num));
}

int fibonacci(int num)
{
    int n, tol;
    int a = 0;
    int b = 1;

    for (int i = 2; i <= num - 1; i++)
    {
        tol = a + b;
        a = b;
        b = tol;
    }
    return tol;
}