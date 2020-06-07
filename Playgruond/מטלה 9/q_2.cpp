#include <stdio.h>
void counter();
int sum_pos = 0, sum_neg = 0;

main()
{
    counter();

    printf("sum_pos = %d, sum_uneven = %d", sum_pos, sum_neg);
}

void counter()
{
    int num,i=0;

    while (i < 10)
    {
        scanf("%d", &num);

        if (num >= 0)
            {sum_pos++;}
        else
            {sum_neg++;}
        i++;
    }
}