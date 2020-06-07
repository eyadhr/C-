#include <stdio.h>

void age_dif();

int main()
{
    age_dif();
}

void age_dif()
{
    int age_1, age_2, sum, i = 1;

    do
    {
        scanf("%d %d", &age_1, &age_2);
        sum = age_1 - age_2;

        if (sum < 0)
            sum *= -1;

        printf("age1 : %d age2 : %d, age_dif = %d\n", age_1, age_2, sum);
        i++;
    } while (i <= 10);
}