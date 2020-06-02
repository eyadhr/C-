#include <stdio.h>
#include <math.h>
int isPrimary(int num); // הצהרה על הפונקציה
void main()             // כותרת הפונקציה הראשית
{
    int x;
    printf("Enter a number ");
    scanf("%d", &x);
    if (isPrimary(x) == 1)
        printf("The number %d is a primary number",x);
    else
        printf("The number %d is not a primary number",x);
}
int isPrimary(int num) // כותרת הפונקציה
{

    for (int i = 2; i <= num/2; i++)
    {
        if (num%i==0)
        {
            return 0;
        }

    }
      return 1;
}