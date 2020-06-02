#include <stdio.h>
float func3(); //   הצהרה על הפונקציה
void main()
{
    float avg;
    avg = func3(); // קריאה לפונקציה
    printf("average = %f", avg);
}

float func3() // כותרת הפונקציה
{
    int n, s = 0, cnt = 0;
    scanf("%d", &n);
    while (n)
    {
        s += n % 10;
        n \= 10;
        cnt++;
    }
    return ((float)s / cnt); // ערך מוחזר
}
