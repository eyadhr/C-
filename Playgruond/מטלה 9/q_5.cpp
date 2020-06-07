#include <stdio.h>

void ch_num(int num);

int main()
{
    int num;
    scanf("%d", &num);
    ch_num(num);
}

void ch_num(int num)
{
    int flag = 1;

    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            flag = 0;
            printf("%d ", i);
        }
    }

    if (flag == 1)
    {
        printf("A primary number");
    }
}