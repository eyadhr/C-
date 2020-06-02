#include <stdio.h>

long calc(int number1, int number2);

int main()
{
    int number1, number2;
    printf("Enter the number1 : ");
    scanf("%d", &number1);
    printf("Enter the number2 : ");
    scanf("%d", &number2);

    long calc(int number1,int number2); // 15,5

    printf("The result is : %ld", calc(number1, number2));
}

long calc(int number1, int number2)
{
    int tmp;
    long result = 1;
    if (number1 > 9 || number1 < -9) // 15,5
    {
        printf("Sorry, big numbers!");
        return (0);
    }
    if (number2 > 9 || number2 < -9)
        return (0);

    switch (number2)
    {
    case 0:
        result = 1;
        break;
    case 1:
        result = number1;
        break;
    default:
        for (tmp = 1; tmp <= number2; tmp++) 
            result *= number1;
    }
    return (result);
}

/*
א.	תאר בקצרה מה מבצעת התוכנית (מבלי להתייחס לכל פקודה).
if num1-2 bettwin (9)-(-9) then run, num2 is the amout of pow to num1 (0 and 1 are seprit form the)

ב.	איזה ערך תדפיס התוכנית עבור קליטת הנתונים הבאים מהמקלדת :
5	5-	5	15	number1
4	3	0	5	Number2
625,-125,1,to big 
ג.	הסבר מה נחוץ להגביל את ערכי number1, number2 בתוכנית הנ"ל ?
max int val
כיצד ניתן לקלוט מספרים גדולים יותר ?
dubble insted int
ד.	הסבר כיצד תשתנה התוצאה אם נשמיט את ה – break לפני : case 1	.
הלולאוה תרוץ ויוצא num1*num1 ולא num1

*/