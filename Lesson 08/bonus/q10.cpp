#include <conio.h>
#include <stdio.h>

void printSumAndMul(int a, int b)
{
    printf("Sum %d\n", a + b);
    printf("Mul %d", a * b);
}

int main()
{
    int a, b, max;
    printf("Enetr two numbers : ");
    scanf("%d %d", &a, &b);
    printSumAndMul(a, b);
    getch();
}


