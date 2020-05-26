#include <stdio.h>

int main()
{
    int num, star = 1,space;
    scanf("%d", &num);
    space = num-1;
    for (int i = 0; i < num; i++)
    {
        for (int i=0 ; i < space ; i++)
        {
            printf(" ");
        }

        for (int i = 0; i < star; i++)
        {
            printf("*");
        }
        printf("\n");
        star+=2;
        space--;
    }
}
