#include <stdio.h>
void func4();
int main()
{
    func4();
}

void func4()
{
    int n, digit, sum1 = 0, sum2 = 0;
    scanf("%d", &n); //3284
    while (n)        //3284
    {
        digit = n % 10; //3,2,8,4
        (digit % 2) ? sum1 += digit : sum2 += digit; // sum1 = 3 sum2 = 14
        n /= 10;
    }
    printf("sum1 = %d , sum2 = %d", sum1, sum2); // sum1 = 3 sum2 = 14
}

//א. sum1 = 3 sum2 = 14
//ב.מחשבת את סכום המספרים הזוגים והאי זוגים
//ג	פונקציה שאינה מקבלת ערכים ואינה מחזירה ערך.