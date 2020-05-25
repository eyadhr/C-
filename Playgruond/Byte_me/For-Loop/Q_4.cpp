#include <stdio.h>

int main()
{
    int num,sum=0;
    float avg;

    for (int i = 1; i <= 10; i++)
    {
        scanf("%d",&num);
        sum +=num;
    }
    avg = (float) sum/10;
    printf("\nThe sum of 10 no is : %d The Average is : %f",sum,avg);
}
