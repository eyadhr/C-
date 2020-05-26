#include <stdio.h>
int main()
{
    int num;
    printf("enter the amount of rows ");
    scanf("%d", &num);

    for (int y = 1; y <= num; y++)
    {
        for (int x = num - 1; x >= y; x--)
        {
            printf(" ");
        }
        9
        for (int z = 1; z <= 2 * y - 1; z++)
        {
            printf("*");
        }
        printf("\n");
    }
}

