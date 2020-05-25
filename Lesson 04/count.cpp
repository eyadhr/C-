#include <stdio.h>

int main()
{

    int num,i=0,sum=0;
    scanf("%d", &num);

    while (num)
    {
        sum += num % 10;
        num /= 10;
        i++;
    }

    printf("cunt : %d sum = : %d",i,sum);
    

}
