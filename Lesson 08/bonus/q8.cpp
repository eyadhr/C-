#include <stdio.h>

int CheckNum(int num)
{
    if (num >= 100 && num <= 999)
        return 1;
    if (num >= -999 && num <= -100)
        return 2;
    
        return 3;
}

int main()
{
    int res, num;
    scanf("%d", &num);
    res = CheckNum(num); // קריאה לפונקציה החסרה
    switch (res)
    {
    case 1:
        printf("3 digit mun +");
        break;
    case 2:
        printf("3 digit mun -");
        break;
    case 3:
        printf("not a 3 digit mun ");
    }
}
