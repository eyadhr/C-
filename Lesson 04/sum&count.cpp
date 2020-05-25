#include <stdio.h>

int main()
{

    int num=0,sum = 0,cunt=0;

    while (sum < 50)
    {
        scanf("%d", &num);
        sum += num;
        cunt++;
    }
    printf("cunt = : %d sum = : %d",cunt,sum);
}
