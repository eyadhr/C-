#include <stdio.h>

void min_of_2();

int main()
{
    min_of_2();
}

void min_of_2()
{
    int num_1, num_2, i = 1;

    do
    {
        scanf("%d %d", &num_1, &num_2);
        if (num_1 < num_2)
        {
            printf("%d\n", num_1);
        }
        else if (num_2 < num_1)
        {
            printf("%d\n", num_2);
        }
        else
        {
            printf("equal\n");
        }

        i++;
    } while (i <= 5);
}