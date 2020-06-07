#include <stdio.h>

int main()
{
    int num, in_sum = 1, sum = 0;
    scanf("%d", &num);

    for (; num > 0; num--) // 3
    {
        for (int i = 1; i < num + 1; i++)
        {
            in_sum *= num;
        }
        sum += in_sum;
        in_sum = 1;
    }
    printf("\n%d", sum);
}