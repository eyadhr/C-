#include <stdio.h>

int main()
{
    int num,sum=0;
    scanf("%d",&num);

    for (int i = 1; i <= num; i++)
    {
        sum=0;

        for (int b = 1 ; b <= i; b++)
        {
            sum += i*i;
        }
        printf("\nNumber is : %d and cube of the %d is :125 : %d",i,i, sum);
    }
    
    
}