#include <stdio.h>
int isEven(int num);

int main()
{
    int num, res;
    printf("Enetr the first number : ");
    scanf("%d", &num);
    while (num)
    {
        res = isEven(num); // קריאה לפונקציה
        if (res == 1)
            printf("The number %d is even !\n", num);
        else
            printf("The number %d is odd !\n", num);
        printf("Enetr the next number : ");
        scanf("%d", &num);
    }
}

int isEven(int num)
{
    if (num%2==0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
    
}