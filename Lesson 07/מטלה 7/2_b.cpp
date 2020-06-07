#include <stdio.h>

int main()
{
    int n, cont = 0; //34,8,5645,45,19,7,5599,6,10,401 = 22

    for (int  i = 1; i <= 10; i++)
    {
        scanf("%d", &n); //

        while (n !=0 ) //calc
        {
            n /= 10;
            cont++;
        }
    }
    printf("%d",cont);
}