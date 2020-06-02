#include <stdio.h>

int printstar();

int main()
{
    printstar();
}

int printstar()
{
    int num;
    scanf("%d", &num);

    for (int i = 1; i <= num; i++)
    {
        for (int i = 1; i <= num; i++)
        {
            printf("* ");
        }
        printf("\n");
    }
}
