#include <stdio.h>
int num1, num2;
int perfect_num_ck(int num);
void Friendly_num_ck();

int main()
{
    int num_ck = 0;
    scanf("%d %d", &num1, &num2);

    num_ck = perfect_num_ck(num1);

    if (num_ck == 1)
    {
        printf("%d", num1);
    }
    else
    {
        num_ck = perfect_num_ck(num2);

        if (num_ck == 1)
        {
            printf("%d", num2);
        }
    }

    if (num_ck == 0)
    {
        Friendly_num_ck();
    }
}

int perfect_num_ck(int num)
{
    int sum = 0;

    for (int i = 1; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            sum += i;
        }
    }

    if (sum == num)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void Friendly_num_ck()
{
    int sum1 = 1, sum2 = 1;

    if (num1 > 0 && num2 > 0)
    {
        for (int i = 2; i <= num1 / 2; i++)
        {
            if (num1 % i == 0)
            {
                sum1 += num1 / i;
            }
        }

        for (int i = 2; i <= num2 / 2; i++)
        {
            if (num2 % i == 0)
            {
                sum2 += num2 / i;
            }
        }
    }

    if (sum1 == num2 && sum2 == num1)
    {
        printf("Friendly numbers");
    }
    else
    {
        printf("No");
    }
}