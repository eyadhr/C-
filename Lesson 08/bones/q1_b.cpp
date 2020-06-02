#include <stdio.h>
void func2(int x); //   הצהרה על הפונקציה
void main()
{
    int number, sum;
    scanf("%d", &number);
    func2(number); // קריאה לפונקציה
}

void func2(int x) // כותרת הפונקציה
{
    int s = 0, cnt = 0;
    while (x)
    {
        s += x % 10;
        x \= 10;
        cnt++;
    }
    printf("sum = %d , count = %d", s, cnt);
}
