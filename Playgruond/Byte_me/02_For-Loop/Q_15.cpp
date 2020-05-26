#include <stdio.h>

int main()
{
    int num,sum=1;
    scanf("%d",&num);

    for ( ; num > 0; num--)
    {
        sum*=num;
    }
    printf("%d", sum);
}




