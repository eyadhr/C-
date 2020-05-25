#include <stdio.h>

int main()
{

    int n, f = 1;
    scanf("%d", &n);
    if (n < 0)
        printf("Illegal number");
    else
    {
        for (; n > 0; n--) //5 | 4 | 3 | 2 | 1
            f *= n;
             //5*1 = 5 | 4*5 = 20 | 3*20 = 60 | 60*2 =120 | 120*1= 120
    printf("%d", f); // 120
    }
}

/*
א.
120
1
Illegal number

ב.
moltpy n by f(wich starts at 1 and saves the value  off*=n)  wihle dec n until 0 then prints the number