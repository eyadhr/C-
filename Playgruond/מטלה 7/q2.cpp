#include <stdio.h>

int main()
{
    int num, star = 1,space = 4;
    scanf("%d", &num);

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
        space--;
    


        printf("\n");
        star+=2;
    }
}