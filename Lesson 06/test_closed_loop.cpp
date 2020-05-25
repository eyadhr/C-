#include <stdio.h>

int main()
{
    int num, flag = 0;
    for (num = 100; num <= 999 && num % 13 != 0; num++);

        if (num<=999)
        {
            printf("%d",num);
        }    
        else
        {
            printf("Not");
        }
    }