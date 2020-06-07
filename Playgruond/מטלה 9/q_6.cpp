#include <stdio.h>

void num_parts();

int main()
{
    num_parts();
}

void num_parts()
{
    int flag = 1, num_1, num_2;
    scanf("%d %d", &num_1, &num_2);

    for (int i = 100; i <= 999; i++)
    {
        if (i%num_1==0 && i%num_2 == 0)
        {
            flag = 0;
            printf("%d ", i);
        }
    }

    if (flag == 1)
    {
        printf("no 3 dig num that div to %d & %d", num_1, num_2);
    }
}