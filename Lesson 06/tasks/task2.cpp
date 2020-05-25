#include <stdio.h>

int main()
{
    int num;
    scanf("%d",&num);

    for (int i = 2; i <= num/2; i++)
    {
        (num %i == 0) ? (printf("%d ",i)) : (printf(""));
    }
}