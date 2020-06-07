#include <stdio.h>

void ch_div_of_2(int num);

int main()
{
    int num;
    scanf("%d", &num);
    ch_div_of_2(num);
}

void ch_div_of_2(int num)
{

    for (int i = 2; i <= num; i++)
    {
        if (num % i == 0)
        {
            printf("%d ", i);
            num /= i;
            i = 2;
        }
    }
}