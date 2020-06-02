
#include <stdio.h>
float func3(); //   הצהרה על הפונקציה
int main()
{
    float avg;
    avg = func3(); // קריאה לפונקציה
    printf("average = %f", avg);
}

float func3() // כותרת הפונקציה
{
    int n, s = 0, cnt = 0;
    scanf("%d", &n); //3284
    while (n)        //3284
    {
        s += n % 10; //17
        n /= 10;
        cnt++; //4
    }
    return ((float)s / cnt); //4.25
}

//א.4.25
//ב.מחשבת את ממוצע הספרות
//ג	פונקציה שאינה מקבלת ערכים אך מחזירה ערך אחד.