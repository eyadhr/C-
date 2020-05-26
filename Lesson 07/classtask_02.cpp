#include <stdio.h>

int main()
{
    int num;
    scanf("%d",&num);

    for (int i = 0; i < num; i++)
    {
        for (int i = 0; i < num*3; i++)
        {
            printf("* ");
        }
        printf("\n");
    }


}