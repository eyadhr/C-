#include <stdio.h>

int main()
{
    int num,ck=0 ;
    scanf("%d", &num);

    for (int i = 2; i <= num-1; i++)
    {
       if (num % i == 0)
       (ck = 1);
    }
    (ck == 0) ? (printf("yes")) : (printf("no"));
}