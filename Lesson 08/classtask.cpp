#include <stdio.h>
int sum=1;

void fractal(int num);
int bigerthen_zero(int x);

int main()
{
    int num;
    scanf("%d",&num);

    fractal(num);

    printf("%d",sum);
    
}

int bigerthen_zero(int x)
{
    if (x >=0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void fractal(int num)
{
    if (bigerthen_zero(num) == 1)
    {
        for (int i = 1; i <= num; i++)
        {
            sum *= i;
        }
    }
}


