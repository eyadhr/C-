#include <stdio.h>

int main()
{
    int num, coun = 10;
    scanf("%d", &num);

    for (int i = 1; i <= coun; i++)
    {
        printf("%d X %d = %d\n",num,i,num*i);
    }
}