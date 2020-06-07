#include <stdio.h>

void bin_num(int num);

int main()
{
    int num;
    scanf("%d", &num);
    bin_num(num);
}

void bin_num(int num)
{
    int bin[32], count = 0;

    while (num)
    {
        if (num % 2 == 0)
        {
            bin[count] = 0;
        }
        else
        {
            bin[count] = 1;
        }

        num /= 2;
        count++;
    }

    for (int i = count - 1; i >= 0; i--)
    {
        printf("%d", bin[i]);
    }
}