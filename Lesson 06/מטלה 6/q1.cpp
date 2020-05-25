#include <stdio.h>

int main()
{


    int i, a, b, n;
    scanf("%d", &n); 
    for (i = 1; i <= n; i++)
    {

        scanf(" %d %d", &a, &b);
        if (a < b)
            printf("%d", a);

        else
        (b < a) ? printf("%d \n", b) : printf("equal \n");

    }
}

/*
א.
13,13 = equal
13,-80 = -80
4,17 = 4
3,-3 = -3
0,11 0

ב.
loop for n times and print the lowes number