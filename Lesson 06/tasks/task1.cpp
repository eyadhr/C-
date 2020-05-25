#include <stdio.h>

int main ()
{
    for (int i = 10; i <= 99; i++)
    {
        (i%5 == 0) ? (printf("%d",i)) : (printf(" "));
    }
    

}