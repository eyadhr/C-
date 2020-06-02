#include <stdio.h>

void func2(int x);
int main()
{
    int number, sum;
    scanf("%d", &number); //3284
    func2(number); 
}

void func2(int x)
{
    int s = 0, cnt = 0;
    while (x) //3284
    {
        s += x % 10; //3284
        x /= 10;
        cnt++;
    }
    printf("sum = %d , count = %d", s, cnt);
}

//א.4 17
//ב.מחשבת את סכום הספרות וכמות הספרות
//ג	פונקציה המקבלת ערכים אך אינה מחזירה ערך.