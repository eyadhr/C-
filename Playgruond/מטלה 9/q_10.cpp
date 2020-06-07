#include <stdio.h>

int scan_series(int num);

int main()
{
    int num;
    scanf("%d", &num);

    if (num >= 1 && num <= 100)
    {
        scan_series(num);
    }
    else
    {
        printf("ERROR");
    }
}

void scan_series(int num)
{
    int n = 1;

    while (num > 1)
    {
        printf("%d ", num);

        if (num % 2 == 0)
        {
            num = num / 2; // in doc there is a % not /
        }
        else
        {
            num = num * 3 + 1;
        }

        n++;
    }
    printf("%d ", num);
    printf("\nn = %d", n);
}