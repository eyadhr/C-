#include <stdio.h>

int main()
{
    int num,sum=0;
    scanf("%d",&num);

    for (int i = 1; i <= num; i++)
    {
        printf("%d ",i);
        sum +=i;
    }
    printf("\nThe Sum of Natural Number upto %d terms : %d",num,sum);
    
}