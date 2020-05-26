#include <stdio.h>

int main()
{
    int num, count_min,count_max;
    scanf("%d %d", &count_min, &count_max);

    for (int i = 1; i <= 10; i++)
    {   
        for (int y = count_min; y <= count_max; y++)
        {
            printf("%dx%d = %d ",y,i,i*y);
        }
        printf("\n");
    }
}