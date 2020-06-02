#include <stdio.h>
#include <math.h>

int isPrimary(int num); // הצהרה על הפונקציה
void main()             // כותרת הפונקציה הראשית
{
    int num,i;
    printf("Enter a number ");
    scanf("%d", &num);
    for (int i = 2; i <= num; i++)
    {
    if (isPrimary(i) == 1)
        printf("%d ",i);
    }
}

int isPrimary(int num) // כותרת הפונקציה
{
    int y = 1;

    for (int i = 2; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            y = 0;
            break;
        }
    }
    return y;
}