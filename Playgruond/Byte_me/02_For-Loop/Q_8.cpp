#include <stdio.h>

int main()
{
    int num,sum=0;
    scanf("%d",&num);

    for (int i = 1; i <= num*2; i++)
    {   
        if (i%2==1)
        {
            printf("%d ",i);
            sum+=i;
        }
    }
    printf("\n%d",sum);
}