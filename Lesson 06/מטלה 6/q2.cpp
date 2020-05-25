#include <stdio.h>

int main()
{

    int num, sum1, sum2, cnt;
    sum1 = sum2 = 0;
    for (cnt = 1; cnt <= 5, cnt++)
    {

        scanf("%d", &num);
        (num % 2 == 0) ? sum1 += num : sum2 += num;
    }

    printf("\nsum1 =  %d  ,  sum2 = %d", sum1, sum2);
}
/*

א. 
sum1 = 19
sum2 = 8

ב.
loop for 5 times and save even numbers to sum1 and uneven numbers to num2