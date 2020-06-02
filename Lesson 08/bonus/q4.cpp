#include <stdio.h>
int findMax(int a, int b);

int main()
{
    int a, b, max;
    printf("Enetr two numbers : ");
    scanf("%d %d", &a, &b);
    max = findMax(a, b);
    printf("max is : %d ", max);
}

int findMax(int a,int b)
{
    if (a>=b)
    {
        return a;
    }
    else
    {
        return b;
    }
 
}
