#include <stdio.h>

int prime_Q10(int num);

int main()
{
    int num;
    scanf("%d", &num);

    if (num % 2 == 0)
    {
        prime_Q10(num);
    }
    else
    {
        printf("ERROR");
    }
}

int prime_Q10(int num)
{
    int primes[num / 2], cout = 0;

    for (int y = num - 1; y >= 3; y--) // num 67
    {
        int flag = 1;

        for (int i = 2; i <= y / 2; i++)
        {
            if (y % i == 0)
            {
                flag = 0;
            }
        }

        if (flag == 1)
        {
            primes[cout] = y;
            cout++;
        }
    }

    int i = 0;

    while (primes[i] > num/2) // cout = 9
    {
        int s = cout -1;
        while (primes[s] < num / 2)
        {
            if (primes[i] + primes[s] == num)
            {
                printf("%d + %d = %d\n", primes[i] , primes[s], num);
            }
            s--;
        }

        i++;
    }
}