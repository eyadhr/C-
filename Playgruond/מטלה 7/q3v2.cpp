#include <stdio.h>

int main()
{
    int num, in_sum = 1, sum = 0;
    scanf("%d", &num);

    for (; num >= 0; num--)
    {
        for (int i = 1; i < num + 1; i++)
        {
            in_sum *= num;
        }
        printf("*");
        sum += in_sum;
        in_sum = 1;
    }
    printf("\n%d", sum-1);
}