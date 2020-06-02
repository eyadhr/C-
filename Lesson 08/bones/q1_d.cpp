#include <stdio.h>
void func4(); //   הצהרה על הפונקציה
void main()
{
    func4(); // קריאה לפונקציה
}

void func4() // כותרת הפונקציה
{
    int n, digit, sum1 = 0, sum2 = 0;
    scanf("%d", &n);
    while (n)
    {
        digit = n % 10;
        (digit % 2) ? sum1 += digit : sum2 += digit;
        n \= 10;
    }
    printf("sum1 = %d , sum2 = %d", sum1, sum2);
}
