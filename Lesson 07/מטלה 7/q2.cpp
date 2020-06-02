#include <stdio.h>

int main()
{
    int num,count=0;

    for (int i = 0; i <= 10; i++)
    {
        scanf("%d",&num);

        while (num > 0)
        {
            num /=10;
            count++;
        }
        
    }
    printf("%d",count);
}