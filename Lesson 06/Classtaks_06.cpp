#include <stdio.h>

int main()
{
    int num,sum=0;
    scanf("%d",&num);

    for (int i = 1; i <= num/2 ; i++)
    {
        if (num %i ==0)
        {
            sum += i;
        }
    }
    if (sum == num)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    
    
    

}