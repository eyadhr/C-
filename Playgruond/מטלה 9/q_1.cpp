#include <stdio.h>
void sumer();
int sum_even = 0, sum_uneven = 0;

main()
{
    sumer();

    printf("sum_even = %d, sum_uneven = %d", sum_even, sum_uneven);
}

void sumer()
{
    int num;
    scanf("%d", &num);

    while (num)
    {
        if (num % 2 == 0)
            {sum_even += num;}
        else
            {sum_uneven += num;}

        scanf("%d", &num);
    }
}