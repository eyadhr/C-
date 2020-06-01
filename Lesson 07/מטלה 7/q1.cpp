#include <stdio.h>

int main()
{
    int num,count=0;
    scanf("%d", &num);

    for (int i = 0; i < num; i++)
    {
        count++;
        for (int i = 0; i < count; i++)
        {
            printf("* ");
        }
        printf("\n");
    }
}