#include <stdio.h>
int func1(int x); 
int main()
{
    int number, sum;
    scanf("%d", &number); //3284
    sum = func1(number); 
    printf("sum = %d", sum); // 17
}
int func1(int x) //3284
{
    int s = 0;
    while (x) //3284!=0
    {
        s += x % 10; //0+4+8+2+3
        x /= 10; //328 , 32 ,3 ,0
    }
    return (s); // 17
}

//א. 17
//ב.מחשבת את סכום הספרות 
//ג. פונקציה המקבלת ערכים ומחזירה ערך אחד