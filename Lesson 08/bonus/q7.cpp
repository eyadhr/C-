#include <stdio.h>

void func7(int n)
{
    int x, y;
    for (x = 1; x <= n; x++)  //3
    {
        for (y = 1; y <= 2 * n; y++) //6
            printf("*");
        printf("\n");
    }
}

int main()
{
    func7(3);
}

//******
//******
//******